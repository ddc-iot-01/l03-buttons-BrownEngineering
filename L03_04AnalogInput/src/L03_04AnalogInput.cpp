/* 
 * Project L03_04__AnalogInput
 * Author: Benjamin Brown
 * Date: 0616/2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */


#include "Particle.h"

SYSTEM_MODE(AUTOMATIC);
SYSTEM_THREAD(ENABLED);
const int ADCPIN = A0;
const int delaytime = 900 ;
float Volts;
int potvalue; 

//Function Declaration
float intoVolts (int bits);

void setup() {
Serial.begin (9600);
waitFor (Serial.isConnected, 10000);
}

void loop() {
  potvalue = analogRead(ADCPIN);
  Volts = intoVolts  (potvalue);
  Serial.printf ("Analog Potentiometer Read = %i\n Voltage Value = %0.1f", potvalue,Volts);
  delay (delaytime);


}
// Converts bits to Volts
float intoVolts(int bits){
  float result;

  result = (3.3/4095.0)*bits;
  return result;

}
