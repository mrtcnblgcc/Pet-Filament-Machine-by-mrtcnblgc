#include "drv_pid.h"

double now, dt, last_time;
double previous = 0;
double proportional,integral,derivative;
//double output;


//Run pid controller, return output value between 0 to 255
double pid (float kp, float ki, float kd, double error){
  now = millis();                
  dt = (now - last_time)/1000.00;       
  last_time = now;   

  proportional = error;
  integral += error * dt;
  derivative = (error - previous) / dt;
  previous = error;
  double output = (kp * proportional) + (ki * integral) + (kd * derivative);
  if(output<0) {
    output=0;
  }
  else if(output>255) {
    output=255;
  }
  else {
    output=output;
  }
  return output;

}

