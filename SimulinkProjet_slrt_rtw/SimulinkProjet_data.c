/*
 * SimulinkProjet_data.c
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

#include "SimulinkProjet.h"
#include "SimulinkProjet_private.h"

/* Block parameters (auto storage) */
P_SimulinkProjet_T SimulinkProjet_P = {
  14.0,                                /* Mask Parameter: SBPA_A
                                        * Referenced by: '<S4>/Gain1'
                                        */
  0.8008,                              /* Mask Parameter: PIDController2_D
                                        * Referenced by: '<S3>/Derivative Gain'
                                        */
  0.0,                                 /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S2>/Derivative Gain'
                                        */
  -5.0,                                /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S2>/Integral Gain'
                                        */
  0.0507,                              /* Mask Parameter: PIDController2_I
                                        * Referenced by: '<S3>/Integral Gain'
                                        */
  5.0,                                 /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S3>/Filter Coefficient'
                                        */
  100.0,                               /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S2>/Filter Coefficient'
                                        */
  -6.0,                                /* Mask Parameter: SBPA_Offset
                                        * Referenced by: '<S4>/Constant'
                                        */
  0.8514,                              /* Mask Parameter: PIDController2_P
                                        * Referenced by: '<S3>/Proportional Gain'
                                        */
  -2.5,                                /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S2>/Proportional Gain'
                                        */
  0.0,                                 /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S4>/Out1'
                                        */

  /*  Computed Parameter: PCI6024EAD_P1_Size
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 1.0, 2.0 },

  /*  Expression: channel
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: PCI6024EAD_P2_Size
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 1.0, 2.0 },

  /*  Expression: range
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { -10.0, -10.0 },

  /*  Computed Parameter: PCI6024EAD_P3_Size
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 1.0, 2.0 },

  /*  Expression: coupling
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6024EAD_P4_Size
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-6024E AD'
                                        */

  /*  Computed Parameter: PCI6024EAD_P5_Size
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-6024E AD'
                                        */

  /*  Computed Parameter: PCI6024EAD_P6_Size
   * Referenced by: '<Root>/PCI-6024E AD'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-6024E AD'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S3>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S3>/Filter'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S2>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S2>/Filter'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<Root>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<Root>/Saturation'
                                        */

  /*  Computed Parameter: PCI6024EDA_P1_Size
   * Referenced by: '<Root>/PCI-6024E DA'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-6024E DA'
                                        */

  /*  Computed Parameter: PCI6024EDA_P2_Size
   * Referenced by: '<Root>/PCI-6024E DA'
   */
  { 1.0, 1.0 },
  -10.0,                               /* Expression: range
                                        * Referenced by: '<Root>/PCI-6024E DA'
                                        */

  /*  Computed Parameter: PCI6024EDA_P3_Size
   * Referenced by: '<Root>/PCI-6024E DA'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-6024E DA'
                                        */

  /*  Computed Parameter: PCI6024EDA_P4_Size
   * Referenced by: '<Root>/PCI-6024E DA'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-6024E DA'
                                        */

  /*  Computed Parameter: PCI6024EDA_P5_Size
   * Referenced by: '<Root>/PCI-6024E DA'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-6024E DA'
                                        */

  /*  Computed Parameter: PCI6024EDA_P6_Size
   * Referenced by: '<Root>/PCI-6024E DA'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-6024E DA'
                                        */

  /*  Computed Parameter: PCI6024EDA_P7_Size
   * Referenced by: '<Root>/PCI-6024E DA'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-6024E DA'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  9.0,                                 /* Expression: 9
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  18.849555921538759,                  /* Expression: 6*pi
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  0.018848439715408175,                /* Computed Parameter: SineWave_Hsin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWave_HCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  -0.018848439715408175,               /* Computed Parameter: SineWave_PSin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWave_PCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  0,                                   /* Computed Parameter: Memory8_X0
                                        * Referenced by: '<S4>/Memory8'
                                        */
  0,                                   /* Computed Parameter: Memory4_X0
                                        * Referenced by: '<S4>/Memory4'
                                        */
  1,                                   /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S4>/Memory'
                                        */
  0,                                   /* Computed Parameter: Memory1_X0
                                        * Referenced by: '<S4>/Memory1'
                                        */
  0,                                   /* Computed Parameter: Memory2_X0
                                        * Referenced by: '<S4>/Memory2'
                                        */
  0,                                   /* Computed Parameter: Memory3_X0
                                        * Referenced by: '<S4>/Memory3'
                                        */
  0,                                   /* Computed Parameter: Memory5_X0
                                        * Referenced by: '<S4>/Memory5'
                                        */
  0,                                   /* Computed Parameter: Memory6_X0
                                        * Referenced by: '<S4>/Memory6'
                                        */
  0                                    /* Computed Parameter: Memory7_X0
                                        * Referenced by: '<S4>/Memory7'
                                        */
};
