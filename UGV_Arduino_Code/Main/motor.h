#ifndef MOTOR_H
#define MOTOR_H

#include "Arduino.h"

class UGVMotor {
 private:
    //Motor A
    int enA;
    int in1;
    int in2;

    //MotorB
    int enB;
    int in3;
    int in4;
 public:
 UGVMotor(int A, int i1, int i2, int B, int i3, int i4) 
            :   enA(A), in1(i1), in2(i2),
                enB(B), in3(i3), in4(i4) {}
 void turnOff();
 void forward();
 void reverse();
 void turnClockwise();
 void turnCounterClockwise();
 void changeSpeeds();
}