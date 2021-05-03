/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:21 GMT-04:00
 */

#ifndef GEN3_JC_HH
#define GEN3_JC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void gen3_Jc_raw(double *p_output1, const double *var1);

  inline void gen3_Jc(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 3);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 15);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    gen3_Jc_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GEN3_JC_HH
