
#include "Switch.h"

const byte buttonPin = 17;
const byte LEDPin = 2;
int i;

Switch button = Switch(buttonPin);  // Switch between a digital pin and GND

void setup() {
  Serial.begin(9600);
  Serial.println("Examples using Switch library");
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  button.poll();
  
  if (button.switched()) {
    Serial.print("switched ");
  }

  if (button.pushed()) {
    Serial.print("pushed ");
    Serial.print(++i);
    Serial.print(" ");

  }

  if (button.longPress()) {
    Serial.print(" longPress  ");
  }

  if (button.doubleClick()) {
    Serial.print("doubleClick ");
  }

  if (button.released()) {
    Serial.print("released\n");

  }
}
