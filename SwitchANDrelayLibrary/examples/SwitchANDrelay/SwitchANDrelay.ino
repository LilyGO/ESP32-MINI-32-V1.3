#include "Switch.h"

const byte buttonPin = 17;
const byte RelayPin = 22;
const byte LEDPin = 2;
int i;

Switch button = Switch(buttonPin);  // Switch between a digital pin and GND

void setup() {
  Serial.begin(9600);
  Serial.println("Examples using Switch library");
  pinMode(RelayPin, OUTPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  button.poll();
  
  if (button.switched()) {
    Serial.print("switched ");
    digitalWrite(RelayPin, LOW);
    digitalWrite(LEDPin, HIGH);
    delay(200);
    digitalWrite(LEDPin, LOW);
  }

  if (button.pushed()) {
    Serial.print("pushed ");
    Serial.print(++i);
    Serial.print(" ");
    digitalWrite(RelayPin, LOW);
    digitalWrite(LEDPin, HIGH);
    delay(200);
    digitalWrite(LEDPin, LOW);
  }

  if (button.longPress()) {
    Serial.print(" longPress AND relay on  ");
    digitalWrite(LEDPin, HIGH);
    digitalWrite(RelayPin,HIGH);
  }

  if (button.doubleClick()) {
    Serial.print("doubleClick ");
    digitalWrite(RelayPin, LOW);
    digitalWrite(LEDPin, HIGH);
    delay(200);
    digitalWrite(LEDPin, LOW);
  }

  if (button.released()) {
    Serial.print("released\n");
    digitalWrite(RelayPin, LOW);
    digitalWrite(LEDPin, HIGH);
    delay(200);
    digitalWrite(LEDPin, LOW);
  }
}
