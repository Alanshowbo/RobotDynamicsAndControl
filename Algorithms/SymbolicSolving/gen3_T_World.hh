/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:03 GMT-05:00
 */

#ifndef GEN3_T_WORLD_HH
#define GEN3_T_WORLD_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void gen3_T_World_raw(double *p_output1, const double *var1);

  inline void gen3_T_World(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 3);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 12);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    gen3_T_World_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GEN3_T_WORLD_HH
