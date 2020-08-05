#ifndef F28069_PWM_H
#define F28069_PWM_H

#include "F2806x_Device.h"     // F2806x Headerfile Include File
#include "F2806x_Examples.h"
#include "clock.h"

#define MOTOR_HIGH_VALUE    ((CPU_FREQ/MOTOR_PWM_FREQ/2)+1)     // MOTOR PWM 30 kHz
#define MOTOR_HALF_PERIOD   CPU_FREQ/MOTOR_PWM_FREQ/2           // MOTOR half period 1500

#define GIMBAL_HIGH_VALUE   ((CPU_FREQ/GIMBAL_PWM_FREQ/2)+1)    // GIMBAL PWM 30 kHz
#define GIMBAL_HALF_PERIOD  CPU_FREQ/GIMBAL_PWM_FREQ/2          // GIMBAL half period 1500

#define SERVO_HALF_PERIOD   CPU_FREQ/SERVO_PWM_FREQ/2           // SERVO half period

#define EPWM1_TIMER_TBPRD   CPU_FREQ/PWM_FREQ/2      // Configure the period for the timer 30KHz
#define EPWM2_TIMER_TBPRD   37499                    // Configure the PWM period as 300Hz


#define PWM_HIGH_VALUE 3000

void Init_ePWMs(void);

void Init_ePWM1(void);

void Init_ePWM2(void);

void Init_ePWM4(void);

void Init_ePWM5(void);

void Init_ePWM6(void);



#endif // end of F28069_PWM_H definition


