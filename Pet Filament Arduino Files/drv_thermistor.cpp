#include "drv_thermistor.h"

int Vo; // Holds the ADC Value
float R2, tKelvin, tCelsius, tFahrenheit,ave_tCelsius;
const float Beta     = 3974.0;
const float roomTemp = 298.15;   // room temperature in Kelvin
const float Ro = 100000.0; // Resistance of the thermistor at roomTemp
const float R1 = 4700;  // Resistnce of the known resistor

//Get temprature value of C°
float get_thermistor_value (int thermistor_pin) {
 // ave_tCelsius = 0;
 // for(int i=0;i<100;i++){
  Vo = analogRead(thermistor_pin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0); // Resistance of the Thermistor
  tKelvin = (Beta * roomTemp) / (Beta + (roomTemp * log(R2 / Ro)));
  tCelsius = tKelvin - 273.15;
 // ave_tCelsius+=tCelsius;
  //delay(1);
 // }
 // ave_tCelsius=(ave_tCelsius/100);
  return tCelsius;

}
