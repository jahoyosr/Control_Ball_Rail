/*
 * SimulinkProjet_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SimulinkProjet_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "SimulinkProjet.h"
#include "SimulinkProjet_capi.h"
#include "SimulinkProjet_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("PCI-6024E AD/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 2, 0, TARGET_STRING("PCI-6024E AD/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 3, 0, TARGET_STRING("Sine Wave"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 0, TARGET_STRING("Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 5, 0, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("Zero-Order Hold"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 8, 0, TARGET_STRING("Clock/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 9, 0, TARGET_STRING("Clock/Unit Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 10, 0, TARGET_STRING("PID Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("PID Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("PID Controller/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("PID Controller/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("PID Controller2/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 19, 0, TARGET_STRING("PID Controller2/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("PID Controller2/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 0, TARGET_STRING("PID Controller2/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("PID Controller2/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("PID Controller2/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("PID Controller2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("PID Controller2/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 1, TARGET_STRING("SBPA/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 27, 1, TARGET_STRING("SBPA/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 28, 1, TARGET_STRING("SBPA/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 29, 1, TARGET_STRING("SBPA/Memory"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 30, 1, TARGET_STRING("SBPA/Memory1"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 31, 1, TARGET_STRING("SBPA/Memory2"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 32, 1, TARGET_STRING("SBPA/Memory3"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 33, 1, TARGET_STRING("SBPA/Memory4"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 34, 1, TARGET_STRING("SBPA/Memory5"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 35, 1, TARGET_STRING("SBPA/Memory6"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 36, 1, TARGET_STRING("SBPA/Memory7"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 37, 1, TARGET_STRING("SBPA/Memory8"),
    TARGET_STRING(""), 0, 1, 0, 0, 2 },

  { 38, 1, TARGET_STRING("SBPA/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 39, TARGET_STRING("PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 40, TARGET_STRING("PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 41, TARGET_STRING("PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 42, TARGET_STRING("PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 43, TARGET_STRING("PID Controller2"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 44, TARGET_STRING("PID Controller2"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 45, TARGET_STRING("PID Controller2"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 46, TARGET_STRING("PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 47, TARGET_STRING("SBPA"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 48, TARGET_STRING("SBPA"),
    TARGET_STRING("Offset"), 0, 0, 0 },

  { 49, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 50, TARGET_STRING("Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 51, TARGET_STRING("Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 52, TARGET_STRING("Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 53, TARGET_STRING("PCI-6024E AD"),
    TARGET_STRING("P1"), 0, 1, 0 },

  { 54, TARGET_STRING("PCI-6024E AD"),
    TARGET_STRING("P2"), 0, 1, 0 },

  { 55, TARGET_STRING("PCI-6024E AD"),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 56, TARGET_STRING("PCI-6024E AD"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 57, TARGET_STRING("PCI-6024E AD"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 58, TARGET_STRING("PCI-6024E AD"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 59, TARGET_STRING("PCI-6024E DA"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 60, TARGET_STRING("PCI-6024E DA"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 61, TARGET_STRING("PCI-6024E DA"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 62, TARGET_STRING("PCI-6024E DA"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 63, TARGET_STRING("PCI-6024E DA"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 64, TARGET_STRING("PCI-6024E DA"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 65, TARGET_STRING("PCI-6024E DA"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 66, TARGET_STRING("Sine Wave"),
    TARGET_STRING("Amplitude"), 0, 0, 0 },

  { 67, TARGET_STRING("Sine Wave"),
    TARGET_STRING("Bias"), 0, 0, 0 },

  { 68, TARGET_STRING("Sine Wave"),
    TARGET_STRING("Frequency"), 0, 0, 0 },

  { 69, TARGET_STRING("Sine Wave"),
    TARGET_STRING("SinH"), 0, 0, 0 },

  { 70, TARGET_STRING("Sine Wave"),
    TARGET_STRING("CosH"), 0, 0, 0 },

  { 71, TARGET_STRING("Sine Wave"),
    TARGET_STRING("SinPhi"), 0, 0, 0 },

  { 72, TARGET_STRING("Sine Wave"),
    TARGET_STRING("CosPhi"), 0, 0, 0 },

  { 73, TARGET_STRING("Clock/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 74, TARGET_STRING("Clock/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 75, TARGET_STRING("PID Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 76, TARGET_STRING("PID Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 77, TARGET_STRING("PID Controller2/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 78, TARGET_STRING("PID Controller2/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 79, TARGET_STRING("SBPA/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 80, TARGET_STRING("SBPA/Memory"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 81, TARGET_STRING("SBPA/Memory1"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 82, TARGET_STRING("SBPA/Memory2"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 83, TARGET_STRING("SBPA/Memory3"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 84, TARGET_STRING("SBPA/Memory4"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 85, TARGET_STRING("SBPA/Memory5"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 86, TARGET_STRING("SBPA/Memory6"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 87, TARGET_STRING("SBPA/Memory7"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 88, TARGET_STRING("SBPA/Memory8"),
    TARGET_STRING("X0"), 1, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &SimulinkProjet_B.Saturation,        /* 0: Signal */
  &SimulinkProjet_B.PCI6024EAD_o1,     /* 1: Signal */
  &SimulinkProjet_B.PCI6024EAD_o2,     /* 2: Signal */
  &SimulinkProjet_B.SineWave,          /* 3: Signal */
  &SimulinkProjet_B.Sum_g,             /* 4: Signal */
  &SimulinkProjet_B.Sum1,              /* 5: Signal */
  &SimulinkProjet_B.Sum2,              /* 6: Signal */
  &SimulinkProjet_B.ZeroOrderHold,     /* 7: Signal */
  &SimulinkProjet_B.Sum_kb,            /* 8: Signal */
  &SimulinkProjet_B.UnitDelay,         /* 9: Signal */
  &SimulinkProjet_B.DerivativeGain_l,  /* 10: Signal */
  &SimulinkProjet_B.FilterCoefficient_g,/* 11: Signal */
  &SimulinkProjet_B.IntegralGain,      /* 12: Signal */
  &SimulinkProjet_B.ProportionalGain_b,/* 13: Signal */
  &SimulinkProjet_B.Filter_c,          /* 14: Signal */
  &SimulinkProjet_B.Integrator_k,      /* 15: Signal */
  &SimulinkProjet_B.Sum_k,             /* 16: Signal */
  &SimulinkProjet_B.SumD_m,            /* 17: Signal */
  &SimulinkProjet_B.DerivativeGain,    /* 18: Signal */
  &SimulinkProjet_B.FilterCoefficient, /* 19: Signal */
  &SimulinkProjet_B.IntegralGain_i,    /* 20: Signal */
  &SimulinkProjet_B.ProportionalGain,  /* 21: Signal */
  &SimulinkProjet_B.Filter,            /* 22: Signal */
  &SimulinkProjet_B.Integrator,        /* 23: Signal */
  &SimulinkProjet_B.Sum,               /* 24: Signal */
  &SimulinkProjet_B.SumD,              /* 25: Signal */
  &SimulinkProjet_B.DataTypeConversion,/* 26: Signal */
  &SimulinkProjet_B.Gain1,             /* 27: Signal */
  &SimulinkProjet_B.LogicalOperator,   /* 28: Signal */
  &SimulinkProjet_B.Memory,            /* 29: Signal */
  &SimulinkProjet_B.Memory1,           /* 30: Signal */
  &SimulinkProjet_B.Memory2,           /* 31: Signal */
  &SimulinkProjet_B.Memory3,           /* 32: Signal */
  &SimulinkProjet_B.Memory4,           /* 33: Signal */
  &SimulinkProjet_B.Memory5,           /* 34: Signal */
  &SimulinkProjet_B.Memory6,           /* 35: Signal */
  &SimulinkProjet_B.Memory7,           /* 36: Signal */
  &SimulinkProjet_B.Memory8,           /* 37: Signal */
  &SimulinkProjet_B.Sum_m,             /* 38: Signal */
  &SimulinkProjet_P.PIDController_P,   /* 39: Mask Parameter */
  &SimulinkProjet_P.PIDController_I,   /* 40: Mask Parameter */
  &SimulinkProjet_P.PIDController_D,   /* 41: Mask Parameter */
  &SimulinkProjet_P.PIDController_N,   /* 42: Mask Parameter */
  &SimulinkProjet_P.PIDController2_P,  /* 43: Mask Parameter */
  &SimulinkProjet_P.PIDController2_I,  /* 44: Mask Parameter */
  &SimulinkProjet_P.PIDController2_D,  /* 45: Mask Parameter */
  &SimulinkProjet_P.PIDController2_N,  /* 46: Mask Parameter */
  &SimulinkProjet_P.SBPA_A,            /* 47: Mask Parameter */
  &SimulinkProjet_P.SBPA_Offset,       /* 48: Mask Parameter */
  &SimulinkProjet_P.Constant_Value_m,  /* 49: Block Parameter */
  &SimulinkProjet_P.Constant1_Value,   /* 50: Block Parameter */
  &SimulinkProjet_P.Saturation_UpperSat,/* 51: Block Parameter */
  &SimulinkProjet_P.Saturation_LowerSat,/* 52: Block Parameter */
  &SimulinkProjet_P.PCI6024EAD_P1[0],  /* 53: Block Parameter */
  &SimulinkProjet_P.PCI6024EAD_P2[0],  /* 54: Block Parameter */
  &SimulinkProjet_P.PCI6024EAD_P3[0],  /* 55: Block Parameter */
  &SimulinkProjet_P.PCI6024EAD_P4,     /* 56: Block Parameter */
  &SimulinkProjet_P.PCI6024EAD_P5,     /* 57: Block Parameter */
  &SimulinkProjet_P.PCI6024EAD_P6,     /* 58: Block Parameter */
  &SimulinkProjet_P.PCI6024EDA_P1,     /* 59: Block Parameter */
  &SimulinkProjet_P.PCI6024EDA_P2,     /* 60: Block Parameter */
  &SimulinkProjet_P.PCI6024EDA_P3,     /* 61: Block Parameter */
  &SimulinkProjet_P.PCI6024EDA_P4,     /* 62: Block Parameter */
  &SimulinkProjet_P.PCI6024EDA_P5,     /* 63: Block Parameter */
  &SimulinkProjet_P.PCI6024EDA_P6,     /* 64: Block Parameter */
  &SimulinkProjet_P.PCI6024EDA_P7,     /* 65: Block Parameter */
  &SimulinkProjet_P.SineWave_Amp,      /* 66: Block Parameter */
  &SimulinkProjet_P.SineWave_Bias,     /* 67: Block Parameter */
  &SimulinkProjet_P.SineWave_Freq,     /* 68: Block Parameter */
  &SimulinkProjet_P.SineWave_Hsin,     /* 69: Block Parameter */
  &SimulinkProjet_P.SineWave_HCos,     /* 70: Block Parameter */
  &SimulinkProjet_P.SineWave_PSin,     /* 71: Block Parameter */
  &SimulinkProjet_P.SineWave_PCos,     /* 72: Block Parameter */
  &SimulinkProjet_P.Constant_Value,    /* 73: Block Parameter */
  &SimulinkProjet_P.UnitDelay_InitialCondition,/* 74: Block Parameter */
  &SimulinkProjet_P.Filter_IC_a,       /* 75: Block Parameter */
  &SimulinkProjet_P.Integrator_IC_a,   /* 76: Block Parameter */
  &SimulinkProjet_P.Filter_IC,         /* 77: Block Parameter */
  &SimulinkProjet_P.Integrator_IC,     /* 78: Block Parameter */
  &SimulinkProjet_P.Out1_Y0,           /* 79: Block Parameter */
  &SimulinkProjet_P.Memory_X0,         /* 80: Block Parameter */
  &SimulinkProjet_P.Memory1_X0,        /* 81: Block Parameter */
  &SimulinkProjet_P.Memory2_X0,        /* 82: Block Parameter */
  &SimulinkProjet_P.Memory3_X0,        /* 83: Block Parameter */
  &SimulinkProjet_P.Memory4_X0,        /* 84: Block Parameter */
  &SimulinkProjet_P.Memory5_X0,        /* 85: Block Parameter */
  &SimulinkProjet_P.Memory6_X0,        /* 86: Block Parameter */
  &SimulinkProjet_P.Memory7_X0,        /* 87: Block Parameter */
  &SimulinkProjet_P.Memory8_X0,        /* 88: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  2                                    /* 3 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.001, 0.01
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[0],
    2, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 39,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 50,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1959569813U,
    1168625426U,
    1504630395U,
    2189488317U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  SimulinkProjet_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void SimulinkProjet_InitializeDataMapInfo(RT_MODEL_SimulinkProjet_T *const
  SimulinkProjet_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(SimulinkProjet_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(SimulinkProjet_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(SimulinkProjet_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(SimulinkProjet_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(SimulinkProjet_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  SimulinkProjet_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (SimulinkProjet_M);
  SimulinkProjet_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_SimulinkProjet_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(SimulinkProjet_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(SimulinkProjet_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(SimulinkProjet_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void SimulinkProjet_host_InitializeDataMapInfo
    (SimulinkProjet_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: SimulinkProjet_capi.c */
