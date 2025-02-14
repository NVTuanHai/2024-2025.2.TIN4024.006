#include <Arduino.h>

int ledPin = 5; // chân gpio 2 (thường nối sẵn led trên board)

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Bật LED
  Serial.println("LED -> ON");
  delay(1000);
  digitalWrite(ledPin, LOW); //Tắt LED
  Serial.println("LED -> OFF");
  delay(1000);
}
