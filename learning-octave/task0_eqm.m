pkg load symbolic      # Load the octave symbolic library
syms x1 x2             # Define symbolic variables x1 and x1

x1_dot = -x1 + 2*x1^3 + x2;       # Write the expressions for x1_dot and x2_dot
x2_dot = -x1 - x2;

x1_dot == 0;
x2_dot == 0;

eqm_points = solve(x1_dot, x2_dot, x1, x2);
disp(eqm_points)