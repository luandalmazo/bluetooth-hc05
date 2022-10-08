#include <SoftwareSerial.h>
#include <Arduino.h>


SoftwareSerial bluetooth(0, 1); // RX | TX

// HC-05 PINOUT
// RX -> TX
// TX -> RX
// GND -> GND
// VCC -> 5V

void setup()
{
  Serial.begin(9600);
  Serial.println("Starting up...");
  bluetooth.begin(9600); // Set the same baud rate to hc-05
}

void loop()
{

  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (bluetooth.available())
    Serial.write(bluetooth.read());

}