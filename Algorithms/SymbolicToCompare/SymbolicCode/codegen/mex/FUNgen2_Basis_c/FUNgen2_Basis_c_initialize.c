/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FUNgen2_Basis_c_initialize.c
 *
 * Code generation for function 'FUNgen2_Basis_c_initialize'
 *
 */

/* Include files */
#include "FUNgen2_Basis_c_initialize.h"
#include "FUNgen2_Basis_c.h"
#include "FUNgen2_Basis_c_data.h"
#include "_coder_FUNgen2_Basis_c_mex.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

/* Function Definitions */
void FUNgen2_Basis_c_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (FUNgen2_Basis_c_initialize.c) */
