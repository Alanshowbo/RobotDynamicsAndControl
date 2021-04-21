/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:39 GMT-04:00
 */

#ifndef GEN3_SYS_V_HH
#define GEN3_SYS_V_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void gen3_Sys_V_raw(double *p_output1, const double *var1,const double *var2);

  inline void gen3_Sys_V(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 3);
    assert_size_matrix(var2, 1, 3);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    gen3_Sys_V_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GEN3_SYS_V_HH
