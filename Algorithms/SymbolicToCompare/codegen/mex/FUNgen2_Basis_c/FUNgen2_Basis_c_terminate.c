/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FUNgen2_Basis_c_terminate.c
 *
 * Code generation for function 'FUNgen2_Basis_c_terminate'
 *
 */

/* Include files */
#include "FUNgen2_Basis_c_terminate.h"
#include "FUNgen2_Basis_c.h"
#include "FUNgen2_Basis_c_data.h"
#include "_coder_FUNgen2_Basis_c_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FUNgen2_Basis_c_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void FUNgen2_Basis_c_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (FUNgen2_Basis_c_terminate.c) */
