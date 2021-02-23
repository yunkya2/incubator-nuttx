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

#if 0
volatile static spinlock_t g_appdsp_boot;

extern int arm_pause_handler(int irq, void *c, FAR void *arg);
extern void fpuconfig(void);
#endif

/****************************************************************************
 * Private Functions
 ****************************************************************************/

#if 0
/****************************************************************************
 * Name: appdsp_boot
 *
 * Description:
 *   This is the boot vector for APP_DSP
 *
 * Input Parameters:
 *
 * Returned Value:
 *
 ****************************************************************************/

static void appdsp_boot(void)
{
  int cpu;

  cpu = up_cpu_index();
  DPRINTF("cpu = %d\n", cpu);

  /* Setup NVIC */

  up_irqinitialize();

  /* Setup FPU */

  fpuconfig();

  /* Clear SW_INT for APP_DSP(cpu) */

  putreg32(0, CXD56_CPU_P2_INT + (4 * cpu));

  /* Enable SW_INT */

  irq_attach(CXD56_IRQ_SW_INT, arm_pause_handler, NULL);
  up_enable_irq(CXD56_IRQ_SW_INT);

  spin_unlock(&g_appdsp_boot);

#ifdef CONFIG_SCHED_INSTRUMENTATION
  /* Notify that this CPU has started */

  sched_note_cpu_started(this_task());
#endif

  /* Then transfer control to the IDLE task */

  nx_idle_trampoline();
}
#endif

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

int up_cpu_start(int cpu)
{
#if 0
  int i;
  struct tcb_s *tcb = current_task(cpu);

  DPRINTF("cpu=%d\n", cpu);

#ifdef CONFIG_SCHED_INSTRUMENTATION
  /* Notify of the start event */

  sched_note_cpu_start(this_task(), cpu);
#endif

  /* Reset APP_DSP(cpu) */

  modifyreg32(CXD56_CRG_RESET, 1 << (16 + cpu), 0);

  /* Copy initial stack and reset vector for APP_DSP */

  putreg32((uint32_t)tcb->adj_stack_ptr, VECTOR_ISTACK);
  putreg32((uint32_t)appdsp_boot, VECTOR_RESETV);

  spin_lock(&g_appdsp_boot);

  /* See 3.13.4.16.3 ADSP Startup */

  /* 2. Clock supply */

  modifyreg32(CXD56_CRG_CK_GATE_AHB, 0, 1 << (16 + cpu));

  /* 3. Clock stop */

  modifyreg32(CXD56_CRG_CK_GATE_AHB, 1 << (16 + cpu), 0);

  /* 4. APP_DSP(cpu) start preparation */

  /* Copy APP_DSP0 settings to all 12 tiles for APP_DSP(cpu)
   * TODO: need to exclude memory areas for AMP
   */

  for (i = 0; i < 12; i++)
    {
      uint32_t val = getreg32(CXD56_ACNV_P0_DST0 + (4 * i));
      putreg32(val, CXD56_ACNV_P0_DST0 + (4 * i) + (cpu * 0x20));
    }

  /* 5. Reset release */

  modifyreg32(CXD56_CRG_RESET, 0, 1 << (16 + cpu));

  /* 6. Clock supply */

  modifyreg32(CXD56_CRG_CK_GATE_AHB, 0, 1 << (16 + cpu));

  /* Setup SW_INT for APP_DSP0. The caller is APP_DSP0 and
   * it's enough to setup only once. So, here this setup is
   * done in case that we boot APP_DSP1 (cpu=1).
   */

  if (1 == cpu)
    {
      /* Clear SW_INT for this APP_DSP0 */

      putreg32(0, CXD56_CPU_P2_INT);

      /* Setup SW_INT for this APP_DSP0 */

      irq_attach(CXD56_IRQ_SW_INT, arm_pause_handler, NULL);
      up_enable_irq(CXD56_IRQ_SW_INT);
    }

  spin_lock(&g_appdsp_boot);

  /* APP_DSP(cpu) boot done */

  spin_unlock(&g_appdsp_boot);

  return 0;
#endif
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

/****************************************************************************
 * Name: up_send_irqreq()
 *
 * Description:
 *   Send up_enable_irq() / up_disable_irq() request to the specified cpu
 *
 *   This function is called from up_enable_irq() or up_disable_irq()
 *   to be handled on specified CPU. Locking protocol in the sequence is
 *   the same as up_pause_cpu() plus up_resume_cpu().
 *
 * Input Parameters:
 *   idx - The request index (0: enable, 1: disable)
 *   irq - The IRQ number to be handled
 *   cpu - The index of the CPU which will handle the request
 *
 ****************************************************************************/

void up_send_irqreq(int idx, int irq, int cpu)
{
}



#endif /* CONFIG_SMP */
