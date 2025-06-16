/* 
 * Project L03_01_Buttons
 * Author: Benjamin Brown
 * Date: 06112025
*/

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

const int BUTTON (D3); //definition of pin D3
int inputValue; // this data type is a storage location for the value output of (BUTTON)

void setup() {
  pinMode (BUTTON,INPUT); //Set pin (BUTTON)D3 to read an input
  Serial.begin (9600); // Start the serial display output
  waitFor (Serial.isConnected, 10000); // delays the serial display output for 10 seconds (10k milliseconds)
}

void loop() {
  inputValue = digitalRead(BUTTON); // associates the output value digitalRead to inputValue
  Serial.printf ("BUTTON STATE = %i\n", inputValue); // outputs the value of D3 to the serial display
}
