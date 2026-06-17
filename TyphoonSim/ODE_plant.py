#ODE of the plant
#Parameters
#Lt converter side inductor
#Rt converter side resitor
#Ls grid side inductor
#Rs grid side resitor
#C AC filter capacitor
#Rd damping resistor
# omega angular frequency

#Input
#vt_d terminal voltage d of the converer side
#vt_q terminal voltage q of the converer side
#vs_d grid voltage d
#vs_q grid voltage q

#State variables
#it_d converter side current d
#it_q converter side current q
#vc_d AC filter voltage d
#vc_q AC filter voltage q
#is_d grid current d
#is_q grid current q

#Derivative of the State variables
#dit_d
#dit_q
#dvc_d
#dvc_q
#dis_d
#dis_q

#Converter-side dynamic
#vt_d = Rt*it_d + Lt*dit_d - omega*Lt*it_q + vc_d + (it_d - is_d)*Rd
#vt_q = Rt*it_q + Lt*dit_q + omega*Lt*it_d + vc_q + (it_q - is_q)*Rd

#Mid point dynamic
#C*dvc_d -omega*C*vc_q = it_d - is_d
#C*dvc_q +omega*C*vc_d = it_q - is_q

#Grid-side dynamic
#vc_d + (it_d - is_d)*Rd = Rs*is_d + Ls*dis_d - omega*Ls*is_q + vs_d
#vc_q + (it_q - is_q)*Rd = Rs*is_q + Ls*dis_q + omega*Ls*is_d + vs_q

import sympy as sp
import json
import os

#Parameters
Lt, Rt, Ls, Rs, C, Rd = sp.symbols('Lt Rt Ls Rs C Rd', positive=True)
omega = sp.symbols('omega', real=True)

#State variables
it_d, it_q, vc_d, vc_q, is_d, is_q = sp.symbols('it_d it_q vc_d vc_q is_d is_q', real=True)

#Inputs
vt_d, vt_q, vs_d, vs_q = sp.symbols('vt_d vt_q vs_d vs_q', real=True)

#Derivatives of the state variables
dit_d, dit_q, dvc_d, dvc_q, dis_d, dis_q = sp.symbols(
    'dit_d dit_q dvc_d dvc_q dis_d dis_q', real=True)

state = sp.Matrix([it_d, it_q, vc_d, vc_q, is_d, is_q])
inputs = sp.Matrix([vt_d, vt_q, vs_d, vs_q])
derivatives = [dit_d, dit_q, dvc_d, dvc_q, dis_d, dis_q]

#Converter-side dynamic
eq1 = sp.Eq(vt_d, Rt*it_d + Lt*dit_d - omega*Lt*it_q + vc_d + (it_d - is_d)*Rd)
eq2 = sp.Eq(vt_q, Rt*it_q + Lt*dit_q + omega*Lt*it_d + vc_q + (it_q - is_q)*Rd)

#Mid point dynamic
eq3 = sp.Eq(C*dvc_d - omega*C*vc_q, it_d - is_d)
eq4 = sp.Eq(C*dvc_q + omega*C*vc_d, it_q - is_q)

#Grid-side dynamic
eq5 = sp.Eq(vc_d + (it_d - is_d)*Rd, Rs*is_d + Ls*dis_d - omega*Ls*is_q + vs_d)
eq6 = sp.Eq(vc_q + (it_q - is_q)*Rd, Rs*is_q + Ls*dis_q + omega*Ls*is_d + vs_q)

equations = [eq1, eq2, eq3, eq4, eq5, eq6]

#Solve the implicit equations for the state derivatives
sol = sp.solve(equations, derivatives, dict=True)[0]
dx = sp.Matrix([sp.simplify(sol[d]) for d in derivatives])

#dx = A*x + B*u
A = sp.simplify(dx.jacobian(state))
B = sp.simplify(dx.jacobian(inputs))

if __name__ == '__main__':
    print('A =')
    sp.pprint(A)
    print('B =')
    sp.pprint(B)

    #Individual equations of dx = A*x + B*u
    rhs = A*state + B*inputs
    for d, expr in zip(derivatives, rhs):
        sp.pprint(sp.Eq(d, sp.expand(expr)))

    #Save A and B matrices to a JSON file
    out_dir = os.path.dirname(os.path.abspath(__file__))
    ab_data = {
        'state': [str(s) for s in state],
        'inputs': [str(u) for u in inputs],
        'A': [[str(A[i, j]) for j in range(A.cols)] for i in range(A.rows)],
        'B': [[str(B[i, j]) for j in range(B.cols)] for i in range(B.rows)],
    }
    with open(os.path.join(out_dir, 'ODE_AB_matrices.json'), 'w') as f:
        json.dump(ab_data, f, indent=2)

    #Save the individual state-derivative equations to a JSON file
    eq_data = {str(d): str(sp.expand(expr)) for d, expr in zip(derivatives, rhs)}
    with open(os.path.join(out_dir, 'ODE_equations.json'), 'w') as f:
        json.dump(eq_data, f, indent=2)

    #Equilibrium point: dx = 0 => 0 = A*x_eq + B*u => x_eq = -A^-1*B*u
    x_eq = sp.simplify(-A.inv() * B * inputs)
    print('Equilibrium point x_eq =')
    for s, expr in zip(state, x_eq):
        sp.pprint(sp.Eq(s, expr))

    #Save the equilibrium point to a JSON file
    eq_point_data = {str(s): str(expr) for s, expr in zip(state, x_eq)}
    with open(os.path.join(out_dir, 'ODE_equilibrium.json'), 'w') as f:
        json.dump(eq_point_data, f, indent=2)

    #Numeric parameter values (inputs left symbolic)
    param_values = {
        Lt: 2.5e-3,
        Rt: 0.1,
        Ls: 2.5e-3,
        Rs: 0.1,
        Rd: 27,
        C: 1e-6,
        omega: 2*sp.pi*50,
    }

    A_num = sp.simplify(A.subs(param_values))
    B_num = sp.simplify(B.subs(param_values))
    x_eq_num = sp.simplify(x_eq.subs(param_values))

    print('A (numeric parameters) =')
    sp.pprint(A_num)
    print('B (numeric parameters) =')
    sp.pprint(B_num)
    print('Equilibrium point x_eq (numeric parameters) =')
    for s, expr in zip(state, x_eq_num):
        sp.pprint(sp.Eq(s, expr))

    #Save the numeric-parameter A, B and equilibrium point to a JSON file
    num_data = {
        'param_values': {str(k): str(v) for k, v in param_values.items()},
        'state': [str(s) for s in state],
        'inputs': [str(u) for u in inputs],
        'A': [[str(A_num[i, j]) for j in range(A_num.cols)] for i in range(A_num.rows)],
        'B': [[str(B_num[i, j]) for j in range(B_num.cols)] for i in range(B_num.rows)],
        'x_eq': {str(s): str(expr) for s, expr in zip(state, x_eq_num)},
    }
    with open(os.path.join(out_dir, 'ODE_AB_equilibrium_numeric.json'), 'w') as f:
        json.dump(num_data, f, indent=2)

    #Fully numeric equilibrium point with the given operating point
    input_values = {
        vt_d: 300,
        vt_q: 0,
        vs_d: 300,
        vs_q: 0,
    }
    x_eq_value = x_eq_num.subs(input_values).evalf()
    print('Equilibrium point x_eq (fully numeric) =')
    for s, val in zip(state, x_eq_value):
        print(f'{s} = {val}')

    #Save the fully numeric equilibrium point to a JSON file
    x_eq_value_data = {
        'param_values': {str(k): str(v) for k, v in param_values.items()},
        'input_values': {str(k): v for k, v in input_values.items()},
        'x_eq': {str(s): float(val) for s, val in zip(state, x_eq_value)},
    }
    with open(os.path.join(out_dir, 'ODE_equilibrium_value.json'), 'w') as f:
        json.dump(x_eq_value_data, f, indent=2)