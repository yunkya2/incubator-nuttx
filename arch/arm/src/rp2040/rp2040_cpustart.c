/****************************************************************************
 * arch/arm/src/rp2040/rp2040_cpustart.c
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdint.h>
#include <assert.h>
#include <debug.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#include <nuttx/arch.h>
#include <nuttx/spinlock.h>
#include <nuttx/sched_note.h>

#include "nvic.h"
#include "arm_arch.h"
#include "sched/sched.h"
#include "init/init.h"
#include "arm_internal.h"

#include "hardware/rp2040_memorymap.h"

#include "hardware/rp2040_sio.h"
#include "hardware/rp2040_psm.h"

#ifdef CONFIG_SMP

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#if 0
#  define DPRINTF(fmt, args...) _err(fmt, ##args)
#else
#  define DPRINTF(fmt, args...) do {} while (0)
#endif

#ifdef CONFIG_DEBUG_FEATURES
#  define showprogress(c) arm_lowputc(c)
#else
#  define showprogress(c)
#endif

/****************************************************************************
 * Public Data
 ****************************************************************************/

volatile static spinlock_t g_core1_boot;

extern int arm_pause_handler(int irq, void *c, FAR void *arg);

/****************************************************************************
 * Private Functions
 ****************************************************************************/

void fifo_drain(void)
{
  uint32_t rcv;

  while (getreg32(RP2040_SIO_FIFO_ST) & RP2040_SIO_FIFO_ST_VLD)
    {
      rcv = getreg32(RP2040_SIO_FIFO_RD);
    }
  __asm__ volatile ("sev");
}

/****************************************************************************
 * Name: core1_boot
 *
 * Description:
 *   This is the boot vector for Core #1
 *
 * Input Parameters:
 *
 * Returned Value:
 *
 ****************************************************************************/

#include "hardware/rp2040_sio.h"

static void core1_boot(void)
{
//  int cpu = up_cpu_index();
//  DPRINTF("cpu = %d\n", cpu);

  fifo_drain();
  *(int *)0xd0000050 = 0;

  /* Setup NVIC */

  up_irqinitialize();

  irq_attach(RP2040_SIO_IRQ_PROC1, arm_pause_handler, NULL);
  up_enable_irq(RP2040_SIO_IRQ_PROC1);

  spin_unlock(&g_core1_boot);

#ifdef CONFIG_SCHED_INSTRUMENTATION
  /* Notify that this CPU has started */

  sched_note_cpu_started(this_task());
#endif

  /* Then transfer control to the IDLE task */

  nx_idle_trampoline();
}

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: up_cpu_start
 *
 * Description:
 *   In an SMP configution, only one CPU is initially active (CPU 0). System
 *   initialization occurs on that single thread. At the completion of the
 *   initialization of the OS, just before beginning normal multitasking,
 *   the additional CPUs would be started by calling this function.
 *
 *   Each CPU is provided the entry point to is IDLE task when started.  A
 *   TCB for each CPU's IDLE task has been initialized and placed in the
 *   CPU's g_assignedtasks[cpu] list.  Not stack has been allocated or
 *   initialized.
 *
 *   The OS initialization logic calls this function repeatedly until each
 *   CPU has been started, 1 through (CONFIG_SMP_NCPUS-1).
 *
 * Input Parameters:
 *   cpu - The index of the CPU being started.  This will be a numeric
 *         value in the range of from one to (CONFIG_SMP_NCPUS-1).  (CPU
 *         0 is already active)
 *
 * Returned Value:
 *   Zero on success; a negated errno value on failure.
 *
 ****************************************************************************/


int fifo_comm(uint32_t msg)
{
  uint32_t rcv;

  while (!(getreg32(RP2040_SIO_FIFO_ST) & RP2040_SIO_FIFO_ST_RDY))
    ;
  putreg32(msg, RP2040_SIO_FIFO_WR);
  __asm__ volatile ("sev");

  while (!(getreg32(RP2040_SIO_FIFO_ST) & RP2040_SIO_FIFO_ST_VLD))
    __asm__ volatile ("wfe");

  rcv = getreg32(RP2040_SIO_FIFO_RD);

  return msg == rcv;
}

int up_cpu_start(int cpu)
{
  int i;
  struct tcb_s *tcb = current_task(cpu);

  DPRINTF("cpu=%d\n", cpu);

#ifdef CONFIG_SCHED_INSTRUMENTATION
  /* Notify of the start event */

  sched_note_cpu_start(this_task(), cpu);
#endif

  putreg32(0, RP2040_SIO_SPINLOCK0);

  /* Reset Core 1 */
#if 1
  setbits_reg32(RP2040_PSM_PROC1, RP2040_PSM_FRCE_OFF);
  while (!(getreg32(RP2040_PSM_FRCE_OFF) & RP2040_PSM_PROC1))
    ;
  clrbits_reg32(RP2040_PSM_PROC1, RP2040_PSM_FRCE_OFF);
#endif

retry:
  fifo_drain();
  if (!fifo_comm(0)) goto retry;
  fifo_drain();
  if (!fifo_comm(0)) goto retry;
  if (!fifo_comm(1)) goto retry;
  if (!fifo_comm(getreg32(ARMV6M_SYSCON_VECTAB))) goto retry;
  if (!fifo_comm((uint32_t)tcb->adj_stack_ptr)) goto retry;

  spin_lock(&g_core1_boot);

  if (!fifo_comm((uint32_t)core1_boot)) goto retry;

  *(int *)0xd0000050 = 0;

  irq_attach(RP2040_SIO_IRQ_PROC0, arm_pause_handler, NULL);
  up_enable_irq(RP2040_SIO_IRQ_PROC0);

  spin_lock(&g_core1_boot);

  spin_unlock(&g_core1_boot);

  return 0;
}





/****************************************************************************
 * Name: up_cpu_pausereq
 *
 * Description:
 *   Return true if a pause request is pending for this CPU.
 *
 * Input Parameters:
 *   cpu - The index of the CPU to be queried
 *
 * Returned Value:
 *   true   = a pause request is pending.
 *   false = no pasue request is pending.
 *
 ****************************************************************************/

bool up_cpu_pausereq(int cpu)
{
}

/****************************************************************************
 * Name: up_cpu_paused
 *
 * Description:
 *   Handle a pause request from another CPU.  Normally, this logic is
 *   executed from interrupt handling logic within the architecture-specific
 *   However, it is sometimes necessary necessary to perform the pending
 *   pause operation in other contexts where the interrupt cannot be taken
 *   in order to avoid deadlocks.
 *
 *   This function performs the following operations:
 *
 *   1. It saves the current task state at the head of the current assigned
 *      task list.
 *   2. It waits on a spinlock, then
 *   3. Returns from interrupt, restoring the state of the new task at the
 *      head of the ready to run list.
 *
 * Input Parameters:
 *   cpu - The index of the CPU to be paused
 *
 * Returned Value:
 *   On success, OK is returned.  Otherwise, a negated errno value indicating
 *   the nature of the failure is returned.
 *
 ****************************************************************************/

int up_cpu_paused(int cpu)
{
}

/****************************************************************************
 * Name: arm_pause_handler
 *
 * Description:
 *   Inter-CPU interrupt handler
 *
 * Input Parameters:
 *   Standard interrupt handler inputs
 *
 * Returned Value:
 *   Should always return OK
 *
 ****************************************************************************/

int arm_pause_handler(int irq, void *c, FAR void *arg)
{
}

/****************************************************************************
 * Name: up_cpu_pause
 *
 * Description:
 *   Save the state of the current task at the head of the
 *   g_assignedtasks[cpu] task list and then pause task execution on the
 *   CPU.
 *
 *   This function is called by the OS when the logic executing on one CPU
 *   needs to modify the state of the g_assignedtasks[cpu] list for another
 *   CPU.
 *
 * Input Parameters:
 *   cpu - The index of the CPU to be stopped/
 *
 * Returned Value:
 *   Zero on success; a negated errno value on failure.
 *
 ****************************************************************************/

int up_cpu_pause(int cpu)
{
}

/****************************************************************************
 * Name: up_cpu_resume
 *
 * Description:
 *   Restart the cpu after it was paused via up_cpu_pause(), restoring the
 *   state of the task at the head of the g_assignedtasks[cpu] list, and
 *   resume normal tasking.
 *
 *   This function is called after up_cpu_pause in order resume operation of
 *   the CPU after modifying its g_assignedtasks[cpu] list.
 *
 * Input Parameters:
 *   cpu - The index of the CPU being re-started.
 *
 * Returned Value:
 *   Zero on success; a negated errno value on failure.
 *
 ****************************************************************************/

int up_cpu_resume(int cpu)
{
}


void rp2040_send_irqreq(int irq)
{
}


#endif /* CONFIG_SMP */
