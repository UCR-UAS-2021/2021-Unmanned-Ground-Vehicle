#ifndef _COMPASS_H_
#define _COMPASS_H_

#include "Arduino.h"
#include <math.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_LSM9DS1.h>
#include <Adafruit_Sensor.h>  // not used in this demo but required!

class UGVCompass {
private:
    const int LSM9DS1_SCK; //A5  //SCL on  Teensy
    const int LSM9DS1_MISO; //12
    const int LSM9DS1_MOSI; //A4  //SDA on Teensy
    const int LSM9DS1_XGCS; //6
    const int LSM9DS1_MCS; //5
public:
    UGVCompass ();
    void setup();
    void setupSensor();
    void loop();
};

#endif
