/*
 * SimulinkProjet.c
 *
 * Code generation for model "SimulinkProjet".
 *
 * Model version              : 1.15
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Tue Apr 10 10:24:27 2018
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "SimulinkProjet_capi.h"
#include "SimulinkProjet.h"
#include "SimulinkProjet_private.h"

/* Block signals (auto storage) */
B_SimulinkProjet_T SimulinkProjet_B;

/* Continuous states */
X_SimulinkProjet_T SimulinkProjet_X;

/* Block states (auto storage) */
DW_SimulinkProjet_T SimulinkProjet_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SimulinkProjet_T SimulinkProjet_Y;

/* Real-time model */
RT_MODEL_SimulinkProjet_T SimulinkProjet_M_;
RT_MODEL_SimulinkProjet_T *const SimulinkProjet_M = &SimulinkProjet_M_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SimulinkProjet_M->Timing.TaskCounters.TID[2])++;
  if ((SimulinkProjet_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.01s, 0.0s] */
    SimulinkProjet_M->Timing.TaskCounters.TID[2] = 0;
  }

  SimulinkProjet_M->Timing.sampleHits[2] =
    (SimulinkProjet_M->Timing.TaskCounters.TID[2] == 0);
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  SimulinkProjet_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  SimulinkProjet_output();
  SimulinkProjet_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  SimulinkProjet_output();
  SimulinkProjet_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void SimulinkProjet_output(void)
{
  real_T u0;
  real_T u1;
  real_T u2;
  if (rtmIsMajorTimeStep(SimulinkProjet_M)) {
    /* set solver stop time */
    if (!(SimulinkProjet_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&SimulinkProjet_M->solverInfo,
                            ((SimulinkProjet_M->Timing.clockTickH0 + 1) *
        SimulinkProjet_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&SimulinkProjet_M->solverInfo,
                            ((SimulinkProjet_M->Timing.clockTick0 + 1) *
        SimulinkProjet_M->Timing.stepSize0 +
        SimulinkProjet_M->Timing.clockTickH0 *
        SimulinkProjet_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(SimulinkProjet_M)) {
    SimulinkProjet_M->Timing.t[0] = rtsiGetT(&SimulinkProjet_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(SimulinkProjet_DW.SBPA_SubsysRanBC);
  if (rtmIsMajorTimeStep(SimulinkProjet_M) &&
      SimulinkProjet_M->Timing.TaskCounters.TID[1] == 0) {
    /* Level2 S-Function Block: '<Root>/PCI-6024E AD' (adnipcie) */
    {
      SimStruct *rts = SimulinkProjet_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Outport: '<Root>/Out1' */
    SimulinkProjet_Y.Out1 = SimulinkProjet_B.PCI6024EAD_o1;

    /* Outport: '<Root>/Out2' */
    SimulinkProjet_Y.Out2 = SimulinkProjet_B.PCI6024EAD_o2;

    /* Sum: '<Root>/Sum2' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    SimulinkProjet_B.Sum2 = SimulinkProjet_P.Constant1_Value -
      SimulinkProjet_B.PCI6024EAD_o2;

    /* ZeroOrderHold: '<Root>/Zero-Order Hold' */
    SimulinkProjet_B.ZeroOrderHold = SimulinkProjet_B.Sum2;

    /* Gain: '<S3>/Proportional Gain' */
    SimulinkProjet_B.ProportionalGain = SimulinkProjet_P.PIDController2_P *
      SimulinkProjet_B.ZeroOrderHold;

    /* Gain: '<S3>/Derivative Gain' */
    SimulinkProjet_B.DerivativeGain = SimulinkProjet_P.PIDController2_D *
      SimulinkProjet_B.ZeroOrderHold;
  }

  /* Integrator: '<S3>/Integrator' */
  SimulinkProjet_B.Integrator = SimulinkProjet_X.Integrator_CSTATE;

  /* Integrator: '<S3>/Filter' */
  SimulinkProjet_B.Filter = SimulinkProjet_X.Filter_CSTATE;

  /* Sum: '<S3>/SumD' */
  SimulinkProjet_B.SumD = SimulinkProjet_B.DerivativeGain -
    SimulinkProjet_B.Filter;

  /* Gain: '<S3>/Filter Coefficient' */
  SimulinkProjet_B.FilterCoefficient = SimulinkProjet_P.PIDController2_N *
    SimulinkProjet_B.SumD;

  /* Sum: '<S3>/Sum' */
  SimulinkProjet_B.Sum = (SimulinkProjet_B.ProportionalGain +
    SimulinkProjet_B.Integrator) + SimulinkProjet_B.FilterCoefficient;

  /* Sum: '<Root>/Sum1' */
  SimulinkProjet_B.Sum1 = SimulinkProjet_B.Sum - SimulinkProjet_B.PCI6024EAD_o1;

  /* Gain: '<S2>/Proportional Gain' */
  SimulinkProjet_B.ProportionalGain_b = SimulinkProjet_P.PIDController_P *
    SimulinkProjet_B.Sum1;

  /* Integrator: '<S2>/Integrator' */
  SimulinkProjet_B.Integrator_k = SimulinkProjet_X.Integrator_CSTATE_j;

  /* Gain: '<S2>/Derivative Gain' */
  SimulinkProjet_B.DerivativeGain_l = SimulinkProjet_P.PIDController_D *
    SimulinkProjet_B.Sum1;

  /* Integrator: '<S2>/Filter' */
  SimulinkProjet_B.Filter_c = SimulinkProjet_X.Filter_CSTATE_l;

  /* Sum: '<S2>/SumD' */
  SimulinkProjet_B.SumD_m = SimulinkProjet_B.DerivativeGain_l -
    SimulinkProjet_B.Filter_c;

  /* Gain: '<S2>/Filter Coefficient' */
  SimulinkProjet_B.FilterCoefficient_g = SimulinkProjet_P.PIDController_N *
    SimulinkProjet_B.SumD_m;

  /* Sum: '<S2>/Sum' */
  SimulinkProjet_B.Sum_k = (SimulinkProjet_B.ProportionalGain_b +
    SimulinkProjet_B.Integrator_k) + SimulinkProjet_B.FilterCoefficient_g;

  /* Saturate: '<Root>/Saturation' */
  u0 = SimulinkProjet_B.Sum_k;
  u1 = SimulinkProjet_P.Saturation_LowerSat;
  u2 = SimulinkProjet_P.Saturation_UpperSat;
  if (u0 > u2) {
    SimulinkProjet_B.Saturation = u2;
  } else if (u0 < u1) {
    SimulinkProjet_B.Saturation = u1;
  } else {
    SimulinkProjet_B.Saturation = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Outport: '<Root>/Out3' */
  SimulinkProjet_Y.Out3 = SimulinkProjet_B.Saturation;
  if (rtmIsMajorTimeStep(SimulinkProjet_M) &&
      SimulinkProjet_M->Timing.TaskCounters.TID[1] == 0) {
    /* Level2 S-Function Block: '<Root>/PCI-6024E DA' (danipcie) */
    {
      SimStruct *rts = SimulinkProjet_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Gain: '<S3>/Integral Gain' */
    SimulinkProjet_B.IntegralGain_i = SimulinkProjet_P.PIDController2_I *
      SimulinkProjet_B.ZeroOrderHold;
  }

  /* Gain: '<S2>/Integral Gain' */
  SimulinkProjet_B.IntegralGain = SimulinkProjet_P.PIDController_I *
    SimulinkProjet_B.Sum1;
  if (rtmIsMajorTimeStep(SimulinkProjet_M) &&
      SimulinkProjet_M->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S1>/Unit Delay' */
    SimulinkProjet_B.UnitDelay = SimulinkProjet_DW.UnitDelay_DSTATE;

    /* Sum: '<S1>/Sum' incorporates:
     *  Constant: '<S1>/Constant'
     */
    SimulinkProjet_B.Sum_kb = SimulinkProjet_P.Constant_Value -
      SimulinkProjet_B.UnitDelay;

    /* Outputs for Enabled SubSystem: '<Root>/SBPA' incorporates:
     *  EnablePort: '<S4>/Enable'
     */
    if (SimulinkProjet_B.Sum_kb > 0.0) {
      /* Memory: '<S4>/Memory8' */
      SimulinkProjet_B.Memory8 = SimulinkProjet_DW.Memory8_PreviousInput;

      /* Memory: '<S4>/Memory4' */
      SimulinkProjet_B.Memory4 = SimulinkProjet_DW.Memory4_PreviousInput;

      /* Logic: '<S4>/Logical Operator' */
      SimulinkProjet_B.LogicalOperator = SimulinkProjet_B.Memory8 ^
        SimulinkProjet_B.Memory4;

      /* DataTypeConversion: '<S4>/Data Type Conversion' */
      SimulinkProjet_B.DataTypeConversion = SimulinkProjet_B.LogicalOperator;

      /* Gain: '<S4>/Gain1' */
      SimulinkProjet_B.Gain1 = SimulinkProjet_P.SBPA_A *
        SimulinkProjet_B.DataTypeConversion;

      /* Memory: '<S4>/Memory' */
      SimulinkProjet_B.Memory = SimulinkProjet_DW.Memory_PreviousInput;

      /* Memory: '<S4>/Memory1' */
      SimulinkProjet_B.Memory1 = SimulinkProjet_DW.Memory1_PreviousInput;

      /* Memory: '<S4>/Memory2' */
      SimulinkProjet_B.Memory2 = SimulinkProjet_DW.Memory2_PreviousInput;

      /* Memory: '<S4>/Memory3' */
      SimulinkProjet_B.Memory3 = SimulinkProjet_DW.Memory3_PreviousInput;

      /* Memory: '<S4>/Memory5' */
      SimulinkProjet_B.Memory5 = SimulinkProjet_DW.Memory5_PreviousInput;

      /* Memory: '<S4>/Memory6' */
      SimulinkProjet_B.Memory6 = SimulinkProjet_DW.Memory6_PreviousInput;

      /* Memory: '<S4>/Memory7' */
      SimulinkProjet_B.Memory7 = SimulinkProjet_DW.Memory7_PreviousInput;

      /* Sum: '<S4>/Sum' */
      SimulinkProjet_B.Sum_m = SimulinkProjet_B.Gain1 +
        SimulinkProjet_P.SBPA_Offset;
      if (rtmIsMajorTimeStep(SimulinkProjet_M)) {
        srUpdateBC(SimulinkProjet_DW.SBPA_SubsysRanBC);
      }
    }

    /* End of Outputs for SubSystem: '<Root>/SBPA' */
  }

  if (rtmIsMajorTimeStep(SimulinkProjet_M) &&
      SimulinkProjet_M->Timing.TaskCounters.TID[1] == 0) {
    /* Sin: '<Root>/Sine Wave' */
    if (SimulinkProjet_DW.systemEnable != 0) {
      SimulinkProjet_DW.lastSin = sin(SimulinkProjet_P.SineWave_Freq *
        SimulinkProjet_M->Timing.t[1]);
      SimulinkProjet_DW.lastCos = cos(SimulinkProjet_P.SineWave_Freq *
        SimulinkProjet_M->Timing.t[1]);
      SimulinkProjet_DW.systemEnable = 0;
    }

    SimulinkProjet_B.SineWave = ((SimulinkProjet_DW.lastSin *
      SimulinkProjet_P.SineWave_PCos + SimulinkProjet_DW.lastCos *
      SimulinkProjet_P.SineWave_PSin) * SimulinkProjet_P.SineWave_HCos +
      (SimulinkProjet_DW.lastCos * SimulinkProjet_P.SineWave_PCos -
       SimulinkProjet_DW.lastSin * SimulinkProjet_P.SineWave_PSin) *
      SimulinkProjet_P.SineWave_Hsin) * SimulinkProjet_P.SineWave_Amp +
      SimulinkProjet_P.SineWave_Bias;

    /* End of Sin: '<Root>/Sine Wave' */

    /* Sum: '<Root>/Sum' incorporates:
     *  Constant: '<Root>/Constant'
     */
    SimulinkProjet_B.Sum_g = SimulinkProjet_B.SineWave +
      SimulinkProjet_P.Constant_Value_m;
  }
}

/* Model update function */
void SimulinkProjet_update(void)
{
  real_T HoldSine;
  real_T HoldCosine;
  if (rtmIsMajorTimeStep(SimulinkProjet_M) &&
      SimulinkProjet_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S1>/Unit Delay' */
    SimulinkProjet_DW.UnitDelay_DSTATE = SimulinkProjet_B.Sum_kb;

    /* Update for Enabled SubSystem: '<Root>/SBPA' incorporates:
     *  Update for EnablePort: '<S4>/Enable'
     */
    if (SimulinkProjet_B.Sum_kb > 0.0) {
      /* Update for Memory: '<S4>/Memory8' */
      SimulinkProjet_DW.Memory8_PreviousInput = SimulinkProjet_B.Memory7;

      /* Update for Memory: '<S4>/Memory4' */
      SimulinkProjet_DW.Memory4_PreviousInput = SimulinkProjet_B.Memory3;

      /* Update for Memory: '<S4>/Memory' */
      SimulinkProjet_DW.Memory_PreviousInput = SimulinkProjet_B.LogicalOperator;

      /* Update for Memory: '<S4>/Memory1' */
      SimulinkProjet_DW.Memory1_PreviousInput = SimulinkProjet_B.Memory;

      /* Update for Memory: '<S4>/Memory2' */
      SimulinkProjet_DW.Memory2_PreviousInput = SimulinkProjet_B.Memory1;

      /* Update for Memory: '<S4>/Memory3' */
      SimulinkProjet_DW.Memory3_PreviousInput = SimulinkProjet_B.Memory2;

      /* Update for Memory: '<S4>/Memory5' */
      SimulinkProjet_DW.Memory5_PreviousInput = SimulinkProjet_B.Memory4;

      /* Update for Memory: '<S4>/Memory6' */
      SimulinkProjet_DW.Memory6_PreviousInput = SimulinkProjet_B.Memory5;

      /* Update for Memory: '<S4>/Memory7' */
      SimulinkProjet_DW.Memory7_PreviousInput = SimulinkProjet_B.Memory6;
    }

    /* End of Update for SubSystem: '<Root>/SBPA' */
  }

  if (rtmIsMajorTimeStep(SimulinkProjet_M) &&
      SimulinkProjet_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Sin: '<Root>/Sine Wave' */
    HoldSine = SimulinkProjet_DW.lastSin;
    HoldCosine = SimulinkProjet_DW.lastCos;
    SimulinkProjet_DW.lastSin = HoldSine * SimulinkProjet_P.SineWave_HCos +
      HoldCosine * SimulinkProjet_P.SineWave_Hsin;
    SimulinkProjet_DW.lastCos = HoldCosine * SimulinkProjet_P.SineWave_HCos -
      HoldSine * SimulinkProjet_P.SineWave_Hsin;
  }

  if (rtmIsMajorTimeStep(SimulinkProjet_M)) {
    rt_ertODEUpdateContinuousStates(&SimulinkProjet_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SimulinkProjet_M->Timing.clockTick0)) {
    ++SimulinkProjet_M->Timing.clockTickH0;
  }

  SimulinkProjet_M->Timing.t[0] = rtsiGetSolverStopTime
    (&SimulinkProjet_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++SimulinkProjet_M->Timing.clockTick1)) {
      ++SimulinkProjet_M->Timing.clockTickH1;
    }

    SimulinkProjet_M->Timing.t[1] = SimulinkProjet_M->Timing.clockTick1 *
      SimulinkProjet_M->Timing.stepSize1 + SimulinkProjet_M->Timing.clockTickH1 *
      SimulinkProjet_M->Timing.stepSize1 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(SimulinkProjet_M) &&
      SimulinkProjet_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick2"
     * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++SimulinkProjet_M->Timing.clockTick2)) {
      ++SimulinkProjet_M->Timing.clockTickH2;
    }

    SimulinkProjet_M->Timing.t[2] = SimulinkProjet_M->Timing.clockTick2 *
      SimulinkProjet_M->Timing.stepSize2 + SimulinkProjet_M->Timing.clockTickH2 *
      SimulinkProjet_M->Timing.stepSize2 * 4294967296.0;
  }

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void SimulinkProjet_derivatives(void)
{
  XDot_SimulinkProjet_T *_rtXdot;
  _rtXdot = ((XDot_SimulinkProjet_T *) SimulinkProjet_M->ModelData.derivs);

  /* Derivatives for Integrator: '<S3>/Integrator' */
  _rtXdot->Integrator_CSTATE = SimulinkProjet_B.IntegralGain_i;

  /* Derivatives for Integrator: '<S3>/Filter' */
  _rtXdot->Filter_CSTATE = SimulinkProjet_B.FilterCoefficient;

  /* Derivatives for Integrator: '<S2>/Integrator' */
  _rtXdot->Integrator_CSTATE_j = SimulinkProjet_B.IntegralGain;

  /* Derivatives for Integrator: '<S2>/Filter' */
  _rtXdot->Filter_CSTATE_l = SimulinkProjet_B.FilterCoefficient_g;
}

/* Model initialize function */
void SimulinkProjet_initialize(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-6024E AD' (adnipcie) */
  {
    SimStruct *rts = SimulinkProjet_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-6024E DA' (danipcie) */
  {
    SimStruct *rts = SimulinkProjet_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Integrator: '<S3>/Integrator' */
  SimulinkProjet_X.Integrator_CSTATE = SimulinkProjet_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S3>/Filter' */
  SimulinkProjet_X.Filter_CSTATE = SimulinkProjet_P.Filter_IC;

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  SimulinkProjet_X.Integrator_CSTATE_j = SimulinkProjet_P.Integrator_IC_a;

  /* InitializeConditions for Integrator: '<S2>/Filter' */
  SimulinkProjet_X.Filter_CSTATE_l = SimulinkProjet_P.Filter_IC_a;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  SimulinkProjet_DW.UnitDelay_DSTATE =
    SimulinkProjet_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<Root>/SBPA' */
  /* InitializeConditions for Memory: '<S4>/Memory8' */
  SimulinkProjet_DW.Memory8_PreviousInput = SimulinkProjet_P.Memory8_X0;

  /* InitializeConditions for Memory: '<S4>/Memory4' */
  SimulinkProjet_DW.Memory4_PreviousInput = SimulinkProjet_P.Memory4_X0;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  SimulinkProjet_DW.Memory_PreviousInput = SimulinkProjet_P.Memory_X0;

  /* InitializeConditions for Memory: '<S4>/Memory1' */
  SimulinkProjet_DW.Memory1_PreviousInput = SimulinkProjet_P.Memory1_X0;

  /* InitializeConditions for Memory: '<S4>/Memory2' */
  SimulinkProjet_DW.Memory2_PreviousInput = SimulinkProjet_P.Memory2_X0;

  /* InitializeConditions for Memory: '<S4>/Memory3' */
  SimulinkProjet_DW.Memory3_PreviousInput = SimulinkProjet_P.Memory3_X0;

  /* InitializeConditions for Memory: '<S4>/Memory5' */
  SimulinkProjet_DW.Memory5_PreviousInput = SimulinkProjet_P.Memory5_X0;

  /* InitializeConditions for Memory: '<S4>/Memory6' */
  SimulinkProjet_DW.Memory6_PreviousInput = SimulinkProjet_P.Memory6_X0;

  /* InitializeConditions for Memory: '<S4>/Memory7' */
  SimulinkProjet_DW.Memory7_PreviousInput = SimulinkProjet_P.Memory7_X0;

  /* SystemInitialize for Outport: '<S4>/Out1' */
  SimulinkProjet_B.Sum_m = SimulinkProjet_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/SBPA' */

  /* Enable for Sin: '<Root>/Sine Wave' */
  SimulinkProjet_DW.systemEnable = 1;
}

/* Model terminate function */
void SimulinkProjet_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-6024E AD' (adnipcie) */
  {
    SimStruct *rts = SimulinkProjet_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-6024E DA' (danipcie) */
  {
    SimStruct *rts = SimulinkProjet_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  SimulinkProjet_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  SimulinkProjet_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  SimulinkProjet_initialize();
}

void MdlTerminate(void)
{
  SimulinkProjet_terminate();
}

/* Registration function */
RT_MODEL_SimulinkProjet_T *SimulinkProjet(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SimulinkProjet_M, 0,
                sizeof(RT_MODEL_SimulinkProjet_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SimulinkProjet_M->solverInfo,
                          &SimulinkProjet_M->Timing.simTimeStep);
    rtsiSetTPtr(&SimulinkProjet_M->solverInfo, &rtmGetTPtr(SimulinkProjet_M));
    rtsiSetStepSizePtr(&SimulinkProjet_M->solverInfo,
                       &SimulinkProjet_M->Timing.stepSize0);
    rtsiSetdXPtr(&SimulinkProjet_M->solverInfo,
                 &SimulinkProjet_M->ModelData.derivs);
    rtsiSetContStatesPtr(&SimulinkProjet_M->solverInfo, (real_T **)
                         &SimulinkProjet_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&SimulinkProjet_M->solverInfo,
      &SimulinkProjet_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&SimulinkProjet_M->solverInfo,
      &SimulinkProjet_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&SimulinkProjet_M->solverInfo,
      &SimulinkProjet_M->ModelData.periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&SimulinkProjet_M->solverInfo,
      &SimulinkProjet_M->ModelData.periodicContStateRanges);
    rtsiSetErrorStatusPtr(&SimulinkProjet_M->solverInfo, (&rtmGetErrorStatus
      (SimulinkProjet_M)));
    rtsiSetRTModelPtr(&SimulinkProjet_M->solverInfo, SimulinkProjet_M);
  }

  rtsiSetSimTimeStep(&SimulinkProjet_M->solverInfo, MAJOR_TIME_STEP);
  SimulinkProjet_M->ModelData.intgData.y = SimulinkProjet_M->ModelData.odeY;
  SimulinkProjet_M->ModelData.intgData.f[0] = SimulinkProjet_M->ModelData.odeF[0];
  SimulinkProjet_M->ModelData.intgData.f[1] = SimulinkProjet_M->ModelData.odeF[1];
  SimulinkProjet_M->ModelData.intgData.f[2] = SimulinkProjet_M->ModelData.odeF[2];
  SimulinkProjet_M->ModelData.contStates = ((real_T *) &SimulinkProjet_X);
  rtsiSetSolverData(&SimulinkProjet_M->solverInfo, (void *)
                    &SimulinkProjet_M->ModelData.intgData);
  rtsiSetSolverName(&SimulinkProjet_M->solverInfo,"ode3");
  SimulinkProjet_M->solverInfoPtr = (&SimulinkProjet_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = SimulinkProjet_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    SimulinkProjet_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SimulinkProjet_M->Timing.sampleTimes =
      (&SimulinkProjet_M->Timing.sampleTimesArray[0]);
    SimulinkProjet_M->Timing.offsetTimes =
      (&SimulinkProjet_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SimulinkProjet_M->Timing.sampleTimes[0] = (0.0);
    SimulinkProjet_M->Timing.sampleTimes[1] = (0.001);
    SimulinkProjet_M->Timing.sampleTimes[2] = (0.01);

    /* task offsets */
    SimulinkProjet_M->Timing.offsetTimes[0] = (0.0);
    SimulinkProjet_M->Timing.offsetTimes[1] = (0.0);
    SimulinkProjet_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(SimulinkProjet_M, &SimulinkProjet_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = SimulinkProjet_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    SimulinkProjet_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(SimulinkProjet_M, -1);
  SimulinkProjet_M->Timing.stepSize0 = 0.001;
  SimulinkProjet_M->Timing.stepSize1 = 0.001;
  SimulinkProjet_M->Timing.stepSize2 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    SimulinkProjet_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SimulinkProjet_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SimulinkProjet_M->rtwLogInfo, (NULL));
    rtliSetLogT(SimulinkProjet_M->rtwLogInfo, "tout");
    rtliSetLogX(SimulinkProjet_M->rtwLogInfo, "");
    rtliSetLogXFinal(SimulinkProjet_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SimulinkProjet_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SimulinkProjet_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(SimulinkProjet_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SimulinkProjet_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &SimulinkProjet_Y.Out1,
        &SimulinkProjet_Y.Out2,
        &SimulinkProjet_Y.Out3
      };

      rtliSetLogYSignalPtrs(SimulinkProjet_M->rtwLogInfo, ((LogSignalPtrsType)
        rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        1,
        1,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        1,
        1,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0,
        0
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "",
        "",
        "" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "SimulinkProjet/Out1",
        "SimulinkProjet/Out2",
        "SimulinkProjet/Out3" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          3,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(SimulinkProjet_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
      rt_LoggedCurrentSignalDimensions[2] = &rt_LoggedOutputWidths[2];
    }

    rtliSetLogY(SimulinkProjet_M->rtwLogInfo, "yout");
  }

  SimulinkProjet_M->solverInfoPtr = (&SimulinkProjet_M->solverInfo);
  SimulinkProjet_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&SimulinkProjet_M->solverInfo, 0.001);
  rtsiSetSolverMode(&SimulinkProjet_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  SimulinkProjet_M->ModelData.blockIO = ((void *) &SimulinkProjet_B);
  (void) memset(((void *) &SimulinkProjet_B), 0,
                sizeof(B_SimulinkProjet_T));

  /* parameters */
  SimulinkProjet_M->ModelData.defaultParam = ((real_T *)&SimulinkProjet_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &SimulinkProjet_X;
    SimulinkProjet_M->ModelData.contStates = (x);
    (void) memset((void *)&SimulinkProjet_X, 0,
                  sizeof(X_SimulinkProjet_T));
  }

  /* states (dwork) */
  SimulinkProjet_M->ModelData.dwork = ((void *) &SimulinkProjet_DW);
  (void) memset((void *)&SimulinkProjet_DW, 0,
                sizeof(DW_SimulinkProjet_T));

  /* external outputs */
  SimulinkProjet_M->ModelData.outputs = (&SimulinkProjet_Y);
  (void) memset((void *)&SimulinkProjet_Y, 0,
                sizeof(ExtY_SimulinkProjet_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  SimulinkProjet_InitializeDataMapInfo(SimulinkProjet_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &SimulinkProjet_M->NonInlinedSFcns.sfcnInfo;
    SimulinkProjet_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(SimulinkProjet_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &SimulinkProjet_M->Sizes.numSampTimes);
    SimulinkProjet_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (SimulinkProjet_M)[0]);
    SimulinkProjet_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (SimulinkProjet_M)[1]);
    SimulinkProjet_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (SimulinkProjet_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,SimulinkProjet_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(SimulinkProjet_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(SimulinkProjet_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (SimulinkProjet_M));
    rtssSetStepSizePtr(sfcnInfo, &SimulinkProjet_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(SimulinkProjet_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &SimulinkProjet_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &SimulinkProjet_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &SimulinkProjet_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &SimulinkProjet_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &SimulinkProjet_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &SimulinkProjet_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &SimulinkProjet_M->solverInfoPtr);
  }

  SimulinkProjet_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)&SimulinkProjet_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  2*sizeof(SimStruct));
    SimulinkProjet_M->childSfunctions =
      (&SimulinkProjet_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    SimulinkProjet_M->childSfunctions[0] =
      (&SimulinkProjet_M->NonInlinedSFcns.childSFunctions[0]);
    SimulinkProjet_M->childSfunctions[1] =
      (&SimulinkProjet_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: SimulinkProjet/<Root>/PCI-6024E AD (adnipcie) */
    {
      SimStruct *rts = SimulinkProjet_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = SimulinkProjet_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = SimulinkProjet_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = SimulinkProjet_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &SimulinkProjet_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, SimulinkProjet_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SimulinkProjet_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SimulinkProjet_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SimulinkProjet_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &SimulinkProjet_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &SimulinkProjet_B.PCI6024EAD_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &SimulinkProjet_B.PCI6024EAD_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6024E AD");
      ssSetPath(rts, "SimulinkProjet/PCI-6024E AD");
      ssSetRTModel(rts,SimulinkProjet_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SimulinkProjet_P.PCI6024EAD_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)SimulinkProjet_P.PCI6024EAD_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)SimulinkProjet_P.PCI6024EAD_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)SimulinkProjet_P.PCI6024EAD_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)SimulinkProjet_P.PCI6024EAD_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)SimulinkProjet_P.PCI6024EAD_P6_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &SimulinkProjet_DW.PCI6024EAD_RWORK[0]);
      ssSetIWork(rts, (int_T *) &SimulinkProjet_DW.PCI6024EAD_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 64);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SimulinkProjet_DW.PCI6024EAD_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 66);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &SimulinkProjet_DW.PCI6024EAD_IWORK[0]);
      }

      /* registration */
      adnipcie(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SimulinkProjet/<Root>/PCI-6024E DA (danipcie) */
    {
      SimStruct *rts = SimulinkProjet_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = SimulinkProjet_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = SimulinkProjet_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = SimulinkProjet_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &SimulinkProjet_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, SimulinkProjet_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SimulinkProjet_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SimulinkProjet_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SimulinkProjet_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &SimulinkProjet_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &SimulinkProjet_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &SimulinkProjet_B.Saturation;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6024E DA");
      ssSetPath(rts, "SimulinkProjet/PCI-6024E DA");
      ssSetRTModel(rts,SimulinkProjet_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SimulinkProjet_P.PCI6024EDA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)SimulinkProjet_P.PCI6024EDA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)SimulinkProjet_P.PCI6024EDA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)SimulinkProjet_P.PCI6024EDA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)SimulinkProjet_P.PCI6024EDA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)SimulinkProjet_P.PCI6024EDA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)SimulinkProjet_P.PCI6024EDA_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &SimulinkProjet_DW.PCI6024EDA_RWORK[0]);
      ssSetIWork(rts, (int_T *) &SimulinkProjet_DW.PCI6024EDA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SimulinkProjet_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SimulinkProjet_DW.PCI6024EDA_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &SimulinkProjet_DW.PCI6024EDA_IWORK[0]);
      }

      /* registration */
      danipcie(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  SimulinkProjet_M->Sizes.numContStates = (4);/* Number of continuous states */
  SimulinkProjet_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  SimulinkProjet_M->Sizes.numY = (3);  /* Number of model outputs */
  SimulinkProjet_M->Sizes.numU = (0);  /* Number of model inputs */
  SimulinkProjet_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  SimulinkProjet_M->Sizes.numSampTimes = (3);/* Number of sample times */
  SimulinkProjet_M->Sizes.numBlocks = (47);/* Number of blocks */
  SimulinkProjet_M->Sizes.numBlockIO = (39);/* Number of block outputs */
  SimulinkProjet_M->Sizes.numBlockPrms = (79);/* Sum of parameter "widths" */
  return SimulinkProjet_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
