/* 
 * Project L03_00_SerialMonitor
 * Author: Benjamin Brown
 * Date: 06112025
 */

#include "Particle.h"
SYSTEM_MODE(SEMI_AUTOMATIC);

int i;


void setup() {
  Serial.begin (9600);                  //Start the serial connection
  waitFor (Serial.isConnected , 10000); // Set the connection transfer rate (9600/don't change this for now)
  Serial.printf ("Hello World!\n");     //print statement with "" \n next line
  for (i=1; i<=12;i++){                 //for loop sets the increment condition of the following print statements
  Serial.printf ("%i,", i);             //prints the value of the above -for- loop. ("print", int)
  }
  Serial.printf ("13\nAll Done");       // prints and drops to a new line then prints again

}
void loop() {

}
