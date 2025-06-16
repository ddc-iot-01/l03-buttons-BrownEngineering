/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
SYSTEM_MODE(AUTOMATIC);
SYSTEM_THREAD(ENABLED);
const int GreenLED = D6;
int inputValue;
const int Button = D3;
bool ON =1;

void setup() {
 Serial.begin(9600);
 waitFor (Serial.isConnected, 10000);
 pinMode (Button, INPUT);
 pinMode (GreenLED, OUTPUT);
}
void loop() {
  inputValue = digitalRead(Button);
  if (inputValue == ON){
    digitalWrite (GreenLED, HIGH);
    Serial.printf("Button IS pressed\n");
  }
  else {
    digitalWrite (GreenLED, LOW);
    Serial.printf("Button realeased!\n");
  }
}
