#include <Arduino.h>

// teste github change 1

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  
}

void loop() {
  int sensor = digitalRead(4);

  Serial.println(sensor);
  if (sensor == HIGH)
  {
    digitalWrite(13, LOW);
  } else
  {
    digitalWrite(13, HIGH);
  }
  
  
  
}