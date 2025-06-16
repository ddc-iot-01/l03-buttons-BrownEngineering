/* 
 * Project L03_03_twoButtonLED
 * Author: Benjamin Brown
 * Date: 06112025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
SYSTEM_MODE(SEMI_AUTOMATIC);
SYSTEM_THREAD(ENABLED);
const int GreenLED = D6;
const int YellowLED = D5;
int inputValueONE;
int inputValueTWO;
const int ButtonONE = D3;
const int ButtonTWO = D2;
bool ON =1;

void setup() {
 Serial.begin(9600);
 waitFor (Serial.isConnected, 10000);
 pinMode (ButtonONE, INPUT);
 pinMode (ButtonTWO, INPUT);
 pinMode (YellowLED, OUTPUT);
 pinMode (GreenLED, OUTPUT);
}
void loop() {
  inputValueONE = digitalRead(ButtonONE);
  inputValueTWO = digitalRead(ButtonTWO);
  if (inputValueONE == ON){
    digitalWrite (GreenLED, HIGH);
    Serial.printf("YAY, I'm Green\n");
  }
  else {
    digitalWrite (GreenLED, LOW);
    Serial.printf("It's dark....\n");
  }
  if (inputValueTWO == ON){
    digitalWrite (YellowLED, HIGH);
    Serial.printf("YAHOO, I'm YelloW!!!\n");
  }
  else{
    digitalWrite (YellowLED, LOW);
    Serial.printf ("It'still dark...\n");
  }
}

