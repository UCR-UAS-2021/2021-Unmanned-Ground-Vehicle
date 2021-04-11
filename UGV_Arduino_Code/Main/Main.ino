//#include "altimeter.h"
//#include "compass.h"
#include "motor.h"

//UGVAltimeter ualt();
//UGVCompass ucomp();
UGVMotor umot(12, 11, 10, 7, 6, 5);  // pins ( enA, in1, in2, enB, in3, in4 */ )
// A, 1-2 = Right motor
// B, 3-4 = Left motor

void setup() {
  // put your setup code here, to run once:
  umot.setupMotors();
}

void loop() {
//  switch(state) {
//    case 0: // altimeter // flying
//    {
//      
//    }
//    case 1: // altimeter // dropping
//    {
//
//    }
//    case 2: // UGV active
//    {
      // motor movements, sensor, i.e. (AKA DO A BUNCH OF IF STATEMETNS, WE"LL FIGURE OUT THE ORIENTATION STUFF WHEN ELLIE FIXES THINGS)

      //MOVEMENT DEMO

      //move forwards for 5 sec
      umot.forward();
      delay(5000);  // change time as needed
//      umot.turnOff();
      umot.changeSpeeds(-1);

      //turn clockwise however many degrees
      umot.turnClockwise();
      delay(5000);  // change time as needed according to degree movement
//      umot.turnoff();
      umot.stopMoving();

      //move forwards for 5 sec
      umot.forward();
      delay(5000);
//      umot.turnOff();
      umot.changeSpeeds(-1);

      //turn counterclockwise however many degrees
      umot.turnCounterClockwise();
      delay(5000);  // change time as needed according to degree movement
      umot.stopMoving();

      //move forwards for 5 sec
      umot.forward();
      delay(5000);  // change time as needed
//      umot.turnOff();
      umot.changeSpeeds(-1);

      //turn clockwise however many degrees
      umot.turnClockwise();
      delay(5000);  // change time as needed according to degree movement
      umot.stopMoving();

      //reverse for 5 sec
      umot.reverse();
      delay(5000);  // change time as needed
      umot.stopMoving();

      //turn counterclockwise however many degrees
      umot.turnCounterClockwise();
      delay(5000);  // change time as needed according to degree movement
      umot.stopMoving();


      //"ERROR ADJUSTMENT"

      //move forwards for 5 sec
      umot.forward();
//      umot.turnOff();
      delay(5000);  // change time as needed
      umot.changeSpeeds(-1);

      //"error adjust" clockwise for 1 sec (idk how many degrees itll do)
      umot.errorAdjustClockwise();
      delay(1000);
      umot.stopMoving();

      //move forwards for 5 sec
      umot.forward();
//      umot.turnOff();
      delay(5000);  // change time as needed
      umot.changeSpeeds(-1);

//      break;
//    }
//  }
  //  switch(state){
  //   case 0:
  //   {
  //     //flying state
  //     isFlying = detectIfAboveAlt(MIN_FLIGHT_LEVEL);
      
  //     if(!isFlying)
  //     {
  //       Serial.println("\nState 1");
  //       state = 1;
  //     }
  //     Serial.println("\nStill state 0");
  //     delay(500);
  //     break;
  //   }
  //   case 1:
  //   {
  //     Serial.println("\nWe are here now");
  //     //dropping state
  //     if(isGrounded)
  //     {
  //       state = 2;
  //     }
  //     delay(500);
  //     break;
  //   }
  //  }
}

// void orientFix() {
  
// }
