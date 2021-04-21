/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FUNgen2_Basis_c.h
 *
 * Code generation for function 'FUNgen2_Basis_c'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "FUNgen2_Basis_c_types.h"

/* Function Declarations */
void FUNgen2_Basis_c(const emlrtStack *sp, real_T fc, const real_T in2[3],
                     real_T Basis_c[12]);

/* End of code generation (FUNgen2_Basis_c.h) */
