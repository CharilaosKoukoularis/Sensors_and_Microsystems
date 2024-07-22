measurements = dlmread('hysteresis_loop_measurements.csv',';',[0,0,999,3])
vout_t = measurements([2001:3000]) 
time = measurements([1:1000])
iin_t = measurements([3001:4000]) 
vout_t = dlmread('hysteresis_loop_measurements.csv',';',[0,2,999,2])
time = dlmread('hysteresis_loop_measurements.csv',';',[0,0,999,0]) 


figure
plot(time,vout_t,'-')
title('V_{out}(t)')
xlabel('time (s)')
ylabel('V_{out} (V)')
grid on

figure
plot(time,iin_t,'-')
title('I_{in}(t)')
xlabel('time (s)')
ylabel('I_{in} (A)')
grid on

N_0 = 1000
A = pi*15*10^-8
int_vout = cumtrapz(time, vout_t)/(-N_0*A)

figure
plot(time,int_vout,'-')
xlabel('time (s)')
ylabel('B(t) (T)')
grid on

figure
plot(iin_t,int_vout,'-')
title('Hysteresis Loop')
xlabel('I_{in}(t) (A)')
ylabel('B(t) (T)')
grid on

b = int_vout-0.0212
new_b = b.*(b>0)+(b+0.01).*(b<0)
c = b.*(b<0)-b.*(b>0)

figure
plot(iin_t,c,'-')
title('Hysteresis Loop')
xlabel('I_{in}(t) (A)')
ylabel('B(t) (T)')
grid on