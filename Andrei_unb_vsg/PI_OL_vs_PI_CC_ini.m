clear all
clc
f = 50; %frequency Hz
omega = 2*pi*f; %frequency rad/s
V_l = 400; % phase-phase Voltage V
L_t = 1.25e-3; %Converter side Filter Inductance H
R_t = L_t*omega/10; %Converter side Filter resistance Ohms. Quality Factor of 10
L_s = 1.25e-3; %Grid Side Filter Inductance H
R_s = L_s*omega/10; %Grid side Filter resistance Ohms. Quality Factor of 10
R_d = 10; %Dmaping resistor
C = 4e-6; %Filter capacitance
tau_ctrl_1 = 1e-3; %Time constant of CTRL 1
Ts_Power=50e-6; %Sample time of power plant
Ts_Control=50e-6; %Sample time of controller
K_pi = 15.1; %Proportional gain of CTRL 1
K_ii = 0.1; %Integral gain of CTRL 1
v_dc=800; %DC voltage of VSC
K_p_pll = 1.8; %Proportional gain of PLL
K_i_pll = 1.8/0.00251; %Integral gain of PLL
K_pv = 0.1; %Proportional gain of CTRL 2
K_iv = 0.1; %Integral gain of CTRL 2

params_vc_cc=[R_t;L_t;R_s;L_s;K_pi;K_ii;C;K_pv;K_iv]; %parameters

%% CTRL 3 parameters
% omega = K_p*(epsilon_p + xi_p/T_p) + 1.0               
% phi.  = 2.0*pi()*50.0*(omega-fref)
% xi_p. = epsilon_p = p_m - p_s
% domega = K_p*(depsilon_p + (p_m - p_s)/T_p) = K_p/T_p*(p_m - p_s) + K_p * depsilon_p
% 2*H = T_p/K_p
% T_p = K_p*2*H
S_b = 20e3;  % converter base power
U_b = 400.0; % converter base voltage
Xv = 0.01; % virtual reactance
% Xv = 0.2;
Rv = 0.0;  % virtual resistance
Zbase = U_b^2/S_b;

H = 5.0; % desired virtual inertia 
%K_p = 0.0012*20e3/(2*pi*50); % active power proportinal gain. Original gain Fran paper
K_p = 0.00025*20e3/(2*pi*50); % active power proportinal gain. REtunin gain Fran paper
%K_p = 0.01;



T_p = K_p*2*H;  % active power integral time constant

K_q = 0.1; % reactive power proportinal gain
T_q = 0.1; % reactive power integral time constant

params_pi_vc = [S_b,U_b,K_p,T_p,K_q,T_q,Xv,Rv];


%%%PI_CC
L_t2 = 1.25e-3; %Converter side Filter Inductance H
R_t2 = L_t*omega/10; %Converter side Filter resistance Ohms. Quality Factor of 10
L_s2 = 1.25e-3; %Grid Side Filter Inductance H
R_s2 = L_s*omega/10; %Grid side Filter resistance Ohms. Quality Factor of 10
R_d2 = 10; %Dmaping resistor
C_2 = 4e-6; %Filter capacitance
L_n = L_t2 + L_s2;
R_n = L_n*omega/10;


tau_i = 1e-3;
Kp_i = 1*(L_t2 + L_s2)/tau_i;
Ki_i = 1*(R_t2 + R_s2)/tau_i;
Kr_i =2*(R_t2 + R_s2)/tau_i;
params_cc=[R_t2;L_t2;R_s2;L_s2;K_pi;Ki_i]; %parameters
Ia = 5;
Ib = 10;
Ic = 15;
phi_a = 0;
phi_b = -60*pi/180;
phi_c = 90*pi/180;


%% CTRL 3 parameters
H = 5.0; % desired virtual inertia 
K_p = 0.0012*20e3/(2*pi*50); % active power proportinal gain. Original gain Fran paper
%K_p = 0.00025*20e3/(2*pi*50); % active power proportinal gain. REtunin gain Fran paper
%H = T_p/K_p/2

T_p = K_p*2*H;  % active power integral time constant

K_q = 0.1; % reactive power proportinal gain
T_q = 0.1; % reactive power integral time constant

X = 0.5; % virtual reactance
R = 0.0;  % virtual resistance

S_b = 20e3;  % converter base power
U_b = 400.0; % converter base voltage
params_pi_cc = [S_b,U_b,K_p,T_p,K_q,T_q,X,R];

Length= 4; % 2 %4
X_line_12_13 = (0.06275)*Length;%Rama 12-13-14 red de MT
X_line_13_14 = (0.01575)*Length;
L_line_12_13 = X_line_12_13/(2*pi*50);
L_line_13_14 = X_line_13_14/(2*pi*50);
R_line_12_13 = (0.06)*Length;%Rama 12-13-14 red de MT
R_line_13_14 = (0.025)*Length;%Rama 12-13-14 red de MT