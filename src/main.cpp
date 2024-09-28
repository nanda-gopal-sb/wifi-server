#include <WiFi.h>

const char *ssid = "IT-B";          /*Set Your SSID*/
const char *password = "123456789"; /*Set Your Password*/

WiFiServer server(80); /* Instance of WiFiServer with port number 80 */
WiFiClient client;

IPAddress Ip(192, 168, 1, 1);
IPAddress NMask(255, 255, 255, 0);

void setup()
{
  Serial.begin(115200);
  Serial.println("ESP32 Access Point Mode");
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
  delay(100);
  WiFi.softAPConfig(Ip, Ip, NMask);
  Serial.print("Connect to IP address: ");
  Serial.println(WiFi.softAPIP());
  server.begin();
}

void loop() // not writring anything in loop cuz Im a chad
{
}