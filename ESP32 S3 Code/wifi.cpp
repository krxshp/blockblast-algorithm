#include "wifi.h"
#include <WiFi.h>
#include <ArduinoOTA.h>

const char* WIFI_SSID = "WIFI_NAME";
const char* WIFI_PW = "WIFI_PASSWORD";

void wifiBegin(){

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PW);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
  }
}

void otaUpload(){

  ArduinoOTA.setHostname("blockblast-esp32");
  ArduinoOTA.begin();
}

void otaRecurring(){

  ArduinoOTA.handle();
}