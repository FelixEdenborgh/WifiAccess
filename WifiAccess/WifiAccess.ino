#include <ESP8266WiFi.h>
#include "Functions.h"
static char *ssid = "IoT";
static char *pass = "IoT2018!";




void setup() {
  Serial.printf("Connecting to SSID: %s.\r\n", ssid);
  Serial.begin(115200);
  initWifi(ssid, pass);
  
}

void loop() {

}
