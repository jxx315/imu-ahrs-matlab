/*
 * mpower.h
 *
 * Code generation for function 'mpower'
 *
 */

#ifndef MPOWER_H
#define MPOWER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "ekf_6dof_types.h"

/* Function Declarations */
extern real32_T mpower(real32_T a);

#ifdef __WATCOMC__

#pragma aux mpower value [8087];

#endif
#endif

/* End of code generation (mpower.h) */
