#include "otto.h"
Otto9 Otto;
#include <SerialCommand.h>//-- Library to manage serial commands
SoftwareSerial BTserial = SoftwareSerial(6,7); //  TX  RX of the Bluetooth
SerialCommand SCmd(BTserial);  //The SerialCommand object

#include <Servo.h>  //arduino library
#include <math.h>   //standard c library
