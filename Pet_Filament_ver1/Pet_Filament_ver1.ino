#include "drv_pid.h"
#include "drv_thermistor.h"
#include "drv_menu.h"
#include "drv_step_motor.h"


//#define setpoint_in_c 150
const float kp = 25;
const float ki = 0.5;
const float kd = 0.001;

const int thermistor_pin = A0;
int output_pin = 6;
double output=0;

float real_temp=0;
double error;

int get_temp_value=0;
int get_motor_velo=0;


void setup() {
  Serial.begin(9600);
  drv_step_motor_init();
  drv_menu_init();
  delay(2500);
}

void loop() {

  get_temp_value = drv_menu_get_temp();
  real_temp = get_thermistor_value(thermistor_pin);

  drv_menu_update(real_temp);

  error= (get_temp_value) - (real_temp) ;
  output=pid(kp, ki, kd, error);
  analogWrite(output_pin, output);

  //drv_step_motor_write (get_motor_velo);
  get_motor_velo = drv_menu_get_velo();
  drv_step_motor_write(get_motor_velo);


  // Monitoring values 
  
  Serial.print("Setpoint: "); Serial.print(get_temp_value);
  Serial.print(" *** ");
  Serial.print("Real Temparute: "); Serial.print(real_temp);
  Serial.print(" *** ");
  Serial.print("Output: "); Serial.print(output);
  Serial.print(" *** ");
  Serial.print("Motor Value: "); Serial.print(get_motor_velo);
  Serial.println(" *** ");
  
  
  //Serial.print("Error:  "); Serial.println(error);
  //Serial.print("Output: "); Serial.println(output);
  //Serial.println("");
  //delay(1000);

}
