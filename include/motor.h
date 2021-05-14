
#ifndef BRIDGEH_MOTOR_H
#define BRIDGEH_MOTOR_H

// front motors pins
#define AIN1 PC14
#define AIN2 PC15
#define AIN3 PA0
#define AIN4 PA1
#define AENA PB0
#define AENB PB1

// front motors pins
#define BIN1 PB3
#define BIN2 PA15
#define BIN3 PA12
#define BIN4 PA11
#define BENA PB5
#define BENB PB4

// Front LeftMotor
#define frontLeftMotorEn BENB
#define frontLeftMotorForward BIN4
#define frontLeftMotorBackward BIN3

// Front RightMotor
#define frontRightMotorEn AENB
#define frontRightMotorForward AIN4
#define frontRightMotorBackward AIN3

// Rear LeftMotor
#define rearLeftMotorEn BENA
#define rearLeftMotorForward BIN1
#define rearLeftMotorBackward BIN2

// Rear RightMotor
#define rearRightMotorEn AENA
#define rearRightMotorForward AIN1
#define rearRightMotorBackward AIN2

/*
#define frontLeftMotorEn AENA
#define frontLeftMotorForward AIN1
#define frontLeftMotorBackward AIN2

#define rearRightMotorEn BENB
#define rearRightMotorForward BIN4
#define rearRightMotorBackward BIN3
*/

void bodyMotorsControl( int frontLeftMotorPwmOut, int frontRightMotorPwmOut, int rearLeftMotorPwmOut, int rearRightMotorPwmOut);

void setBodyMotorFrontLeftForward(void);

void setBodyMotorFrontLeftBackward(void);

void setBodyMotorFrontRightForward(void);

void setBodyMotorFrontRightBackward(void);

void setBodyMotorFrontLeftStop(void);

void setBodyMotorFrontRightStop(void);

void setBodyMotorFrontLeftBrake(void);

void setBodyMotorFrontRightBrake(void);


void setBodyMotorRearLeftForward(void);

void setBodyMotorRearLeftBackward(void);

void setBodyMotorRearRightForward(void);

void setBodyMotorRearRightBackward(void);

void setBodyMotorRearLeftStop(void);

void setBodyMotorRearRightStop(void);

void setBodyMotorRearLeftBrake(void);

void setBodyMotorRearRightBrake(void);

#endif