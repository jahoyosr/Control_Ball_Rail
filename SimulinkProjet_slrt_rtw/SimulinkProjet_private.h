/*
 * SimulinkProjet_private.h
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

#ifndef RTW_HEADER_SimulinkProjet_private_h_
#define RTW_HEADER_SimulinkProjet_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern void adnipcie(SimStruct *rts);
extern void danipcie(SimStruct *rts);

/* private model entry point functions */
extern void SimulinkProjet_derivatives(void);

#endif                                 /* RTW_HEADER_SimulinkProjet_private_h_ */
