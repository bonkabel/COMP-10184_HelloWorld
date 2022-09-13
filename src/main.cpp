#include <Arduino.h>
// Author: Amy Abel, 000749165
unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  // start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nHello!");  

  Serial.println("\nName: Amy Abel");
  Serial.println("Student ID: 000749165");

  Serial.println("\nChip ID: " + String(ESP.getChipId()));
  Serial.println("Flash Chip ID: " + String(ESP.getFlashChipId()));

}

void loop() {
  myTime = millis();

  Serial.println("\nMilliseconds since the D1 Mini was started:");

  Serial.println(myTime);
  delay(2000);
}
