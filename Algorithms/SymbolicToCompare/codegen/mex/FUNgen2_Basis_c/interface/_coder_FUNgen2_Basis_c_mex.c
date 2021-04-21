/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FUNgen2_Basis_c_mex.c
 *
 * Code generation for function '_coder_FUNgen2_Basis_c_mex'
 *
 */

/* Include files */
#include "_coder_FUNgen2_Basis_c_mex.h"
#include "FUNgen2_Basis_c.h"
#include "FUNgen2_Basis_c_data.h"
#include "FUNgen2_Basis_c_initialize.h"
#include "FUNgen2_Basis_c_terminate.h"
#include "_coder_FUNgen2_Basis_c_api.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void FUNgen2_Basis_c_mexFunction(int32_T nlhs, mxArray *
  plhs[1], int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */
void FUNgen2_Basis_c_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        15, "FUNgen2_Basis_c");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "FUNgen2_Basis_c");
  }

  /* Call the function. */
  FUNgen2_Basis_c_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(FUNgen2_Basis_c_atexit);

  /* Module initialization. */
  FUNgen2_Basis_c_initialize();

  /* Dispatch the entry-point. */
  FUNgen2_Basis_c_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  FUNgen2_Basis_c_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_FUNgen2_Basis_c_mex.c) */
