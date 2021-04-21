# RobotDynamicsAndControl
Robot models, featherstone Dynamics, WBC optimization

General functions to take in Robot model files of a certain form, create an equation of motion from the model using Featherstone-based dynamics algorithms, and then set up the multi-objective QP problem with constraints.

There are 3 different ways of calculating the dynamics functions
1. Featherstone-based algorithms
2. Newton-Euler 3D algorithms
3. Symbolic variables calculating equations of motion with Lagrange. Can efficiently run using FROST and its mathematica symbolic engine for Matlab.