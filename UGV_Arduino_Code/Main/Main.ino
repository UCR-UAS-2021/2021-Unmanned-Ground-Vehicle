#include "altimeter.h"
#include "compass.h"
#include "motor.h"

UGVAltimeter ualt();
UGVCompass ucomp();
UGVMotor umot();
int state = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  switch(state) {
    case 0: // altimeter // flying
    {
      
    }
    case 1: // altimeter // dropping
    {

    }
    case 2: // UGV active
    {
      // motor movements, sensor, i.e. (AKA DO A BUNCH OF IF STATEMETNS, WE"LL FIGURE OUT THE ORIENTATION STUFF WHEN ELLIE FIXES THINGS)

      //MOVEMENT DEMO

      //move forwards for 5 sec
      umot().forward();
      umot().turnOff();

      //turn clockwise however many degrees
      umot().turnClockwise();

      //move forwards for 5 sec
      umot().forward();
      umot().turnOff();

      //turn counterclockwise however many degrees
      umot().turnCounterClockwise();

      //move forwards for 5 sec
      umot().forward();
      umot().turnOff();

      //turn clockwise however many degrees
      umot().turnClockwise();

      //reverse for 5 sec
      umot().reverse();

      //turn counterclockwise however many degrees
      umot().turnCounterClockwise();


      //"ERROR ADJUSTMENT"

      //move forwards for 5 sec
      umot().forward();
      umot().turnOff();

      //"error adjust" clockwise for 1 sec (idk how many degrees itll do)
      umot().errorAdjustClockwise();

      //move forwards for 5 sec
      umot().forward();
      umot().turnOff();

      break;
    }
  }
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
