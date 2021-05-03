/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:00 GMT-04:00
 */

#ifndef GEN3_WO_WORLD_HH
#define GEN3_WO_WORLD_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void gen3_wO_World_raw(double *p_output1, const double *var1,const double *var2);

  inline void gen3_wO_World(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 3);
    assert_size_matrix(var2, 1, 3);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    gen3_wO_World_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GEN3_WO_WORLD_HH
