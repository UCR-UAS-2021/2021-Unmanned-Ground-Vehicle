#ifndef _ALTIMETER_H_
#define _ALTIMETER_H_

#include "Arduino.h"
#include <Adafruit_SPIDevice.h>
#include <Adafruit_BMP3XX.h>
#include <bmp3.h>
#include <bmp3_defs.h>
#include <Adafruit_Sensor.h>
#include <SPI.h>
#include <Wire.h>

class UGVAltimeter {
private:
    int cs_pin; // chip (slave) select
    int sdo_pin;    // MISO
    int sdi_pin;    // MOSI
    int sck_pin;    // SPI Clock Pin
    const double sealvl;    // UCR = 1013.25 mbar (101.325 kPa; 29.921 inHg; 760.00 mmHg)
public:
    UGVAltimeter (int csp, int sdop, int sdip, int sckp, const double sealvl = 1022.0) // Maryland = 1022
                :   cs_pin(csp),
                    sdo_pin(sdop),
                    sdi_pin(sdip),
                    sck_pin(sckp),
                    sealvl(sealvl) {}
    void setup();
};

#endif