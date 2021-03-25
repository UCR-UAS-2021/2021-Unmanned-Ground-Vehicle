#ifndef MOTOR_H
#define MOTOR_H

#include "Arduino.h"

class UGVMotor {
 private:

 public:
 UGVMotor();
 void turnOff();
 void forward();
 void reverse();
 void turnClockwise();
 void turnCounterClockwise();
 void changeSpeeds();
}