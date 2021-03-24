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
public:
    UGVCompass ();
    void setup();
    void setupSensor();
    void loop();
};

#endif
