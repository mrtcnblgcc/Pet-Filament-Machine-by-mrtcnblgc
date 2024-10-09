#include "drv_step_motor.h"
#include <Arduino.h>

const int stepPin = 11; // Step pinini tanımlayın
const int dirPin = 10;  // Direction pinini tanımlayın
const int enPin= 12;  // Enable pinini tanımlayın


void drv_step_motor_init() {
  //Serial.begin(9600);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  
  digitalWrite(dirPin, HIGH);
  digitalWrite(enPin, HIGH);

}

void drv_step_motor_write (int speed) {

  if( speed == 0) {
    digitalWrite(enPin, HIGH);

  }

  else if ( 0<speed<100 ) {
  digitalWrite(enPin, LOW);
  TCCR2A |= (1<<WGM20)  | (1<<COM2A0) | (1<<COM2B0) ;
  TCCR2B |= (1<<WGM22) |  /*(1<<CS20) |   (1<<CS21)  |*/  (1<<CS22) ;

  speed=map(speed,0,100,0,255);
  OCR2A = 255 - speed;
  }
  else if (speed == 100) {
    speed=99;
  }

}
