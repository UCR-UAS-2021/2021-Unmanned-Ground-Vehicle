#include "motor.h"

// MOVE THIS
void UGVMotor::setupMotors() {
 //set control pins to output
 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);

 //initial state: motors off
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, LOW);

}

// CHANGE THIS
//void UGVMotor::loop() {
//  // put your main code here, to run repeatedly:
//
//  //testing functions every 5 seconds
//  forward();
//  delay(5000);
//  reverse();
//  delay(5000);
//  turnClockwise();
//  delay(5000);
//  turnCounterClockwise();
//  delay(5000);
//  changeSpeeds();
//  delay(5000);
//}

//turn motors off
void UGVMotor::turnOff() {
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, LOW);
}
void UGVMotor::stopMoving() {
 analogWrite(enA, 0);
 analogWrite(enB, 0);
}

//turns motors forward
void UGVMotor::forward() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn on motors forward
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);

// delay(5000);
}

//reverse motors
void UGVMotor::reverse() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn on motors reverse
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);

// delay(5000);
// turnOff();
}

void UGVMotor::turnClockwise() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn motor A reverse, turn motor B forward
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);

// delay(5000);
// turnOff();
}

void UGVMotor::turnCounterClockwise() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn motor A reverse, turn motor B forward
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);

// delay(5000);
// turnOff();
}

void UGVMotor::errorAdjustClockwise() {
  //set low speed
  analogWrite(enA, 50);
  analogWrite(enB, 50);

  //turn clockwise slightly
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

//  delay(1000);
//  turnOff();
}

void UGVMotor::changeSpeeds(int acc) {
 //turn on motors forwards
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);

 if (acc == 1) {
   for (int i = 0; i < 256; i++) {
     //accelerate from 0 to max
     analogWrite(enA, i);
     analogWrite(enB, i);
     delay(20);
   }
 }
 else {
   //decelerate from max to 0
   for (int i = 255; i >= 0; --i) {
     analogWrite(enA, i);
     analogWrite(enB, i);
     delay(20);
   }
 }

// turnOff();
}
