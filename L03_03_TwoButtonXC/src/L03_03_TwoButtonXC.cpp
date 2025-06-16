/* 
 * Project L03_03_twoButtonLEDXC
 * Author: Benjamin Brown
 * Date: 06142025
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
 pinMode (ButtonONE, INPUT_PULLDOWN);
 pinMode (ButtonTWO, INPUT_PULLDOWN);
 pinMode (YellowLED, OUTPUT);
 pinMode (GreenLED, OUTPUT);
}
void loop() {
  inputValueONE = digitalRead(ButtonONE);
  inputValueTWO = digitalRead(ButtonTWO);
  
  while (inputValueONE == ON && inputValueTWO == ON)
    digitalWrite (YellowLED, LOW);

  if (inputValueONE == ON || inputValueTWO == ON){
    digitalWrite (YellowLED, HIGH);
    Serial.printf("YAY LIGHT\n");
  }
  else {
    digitalWrite (YellowLED, LOW);
    Serial.printf("It's dark....\n");
  }
  
  if ((inputValueONE == ON) && (inputValueTWO == ON)){
    digitalWrite (GreenLED, HIGH);
    Serial.printf("WOW TWO BUTTONS!!\n");
  }
  else{
    digitalWrite (GreenLED, LOW);
    Serial.printf ("Where am I\n");
  }
}
