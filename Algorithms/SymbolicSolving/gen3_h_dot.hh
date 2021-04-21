/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:22 GMT-05:00
 */

#ifndef GEN3_H_DOT_HH
#define GEN3_H_DOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void gen3_h_dot_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void gen3_h_dot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 3);
    assert_size_matrix(var2, 1, 3);
    assert_size_matrix(var3, 1, 3);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    gen3_h_dot_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GEN3_H_DOT_HH
