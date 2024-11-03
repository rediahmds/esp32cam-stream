#include <Arduino.h>
#include "k3iot/WiFiSetup.h"

void setup()
{
  Serial.begin(115200);
  
  initWiFi();
}

void loop()
{
  Serial.println("Hehe");
  delay(5000);
}

