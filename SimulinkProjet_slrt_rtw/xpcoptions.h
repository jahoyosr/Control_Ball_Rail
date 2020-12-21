#ifndef __SimulinkProjet_XPCOPTIONS_H___
#define __SimulinkProjet_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "SimulinkProjet.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_SimulinkProjet_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  0
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            512
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void SimulinkProjet_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_SimulinkProjet_T *const SimulinkProjet_M)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  SimulinkProjet_M->Timing.stepSize0 = SimulinkProjet_M->Timing.stepSize0 *
    ratio;
  SimulinkProjet_M->Timing.stepSize1 = SimulinkProjet_M->Timing.stepSize1 *
    ratio;
  SimulinkProjet_M->Timing.stepSize2 = SimulinkProjet_M->Timing.stepSize2 *
    ratio;
  SimulinkProjet_M->Timing.stepSize = SimulinkProjet_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  SimulinkProjet_ChangeStepSize(stepSize, SimulinkProjet_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(SimulinkProjet_M, errMsg);
}

#endif                                 /* __SimulinkProjet_XPCOPTIONS_H___ */
