#ifndef MAIN_H
#define MAIN_H
#include "Arduino.h"
#include "pins.h"
#include "SPI.h"
#include <Wire.h>
#include "SparkFunLSM6DS3.h"

LSM6DS3 SensorTwo( SPI_MODE, PIN_LSM_CS );

void setup();
void loop();


#endif /* end of include guard: MAIN_H */
