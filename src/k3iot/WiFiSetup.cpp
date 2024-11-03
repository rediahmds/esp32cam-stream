#include <Arduino.h>
#include <WiFiManager.h>
#include "WiFiSetup.h"

void initWiFi() {
  WiFiManager wifiMan;
  Serial.println("[INFO] Initializing WiFi configuration...");
  const bool isConnected = wifiMan.autoConnect("ESP32-CAM Proyek SK K3", "halamadrid");

  if (!isConnected) {
    Serial.println("[ERROR] Failed to connect to a wifi :(");
    Serial.println("[INFO] Restarting the board now...");
    ESP.restart();
    return;
  }

  Serial.println("[SUCCESS] WiFi successfully configured 	※\\(^o^)/※");
}
