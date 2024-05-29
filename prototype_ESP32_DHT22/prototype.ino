#include <WiFi.h>
#include <WiFiClientSecure.h>
#include "DHT.h"

#define DHTTYPE DHT22
const int DHTPin = 23;
DHT dht(DHTPin, DHTTYPE);

#define LED_PIN 2 // Pino do LED interno no ESP32

const char *ssid = "...";
const char *password = "...";

const char *host = "script.google.com";
const int httpsPort = 443;

WiFiClientSecure client;
String GAS_ID = "...";

unsigned long previousMillis = 0;
const long interval = 60000*15; // Intervalo de envio em milissegundos (60 segundos)
bool connected = false;

void setup() {
  Serial.begin(115200);
  delay(500);

  dht.begin();

  WiFi.begin(ssid, password);
  Serial.println("");

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // Desliga o LED interno

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    digitalWrite(LED_PIN, LOW); // Faz o LED interno piscar durante a conexão
    delay(250);
    digitalWrite(LED_PIN, HIGH);
    delay(250);
  }

  digitalWrite(LED_PIN, LOW); // Desliga o LED interno quando está conectado ao roteador Wi-Fi
  Serial.println("");
  Serial.print("Successfully connected to : ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("");

  client.setInsecure();
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    float h = dht.readHumidity();
    float t = dht.readTemperature();

    if (isnan(h) || isnan(t)) {
      Serial.println("Failed to read from DHT sensor !");
      return;
    }

    Serial.println("==========");
    String Temp = "Temperature : " + String(t) + " °C";
    String Humi = "Humidity : " + String(h) + " %";
    Serial.println(Temp);
    Serial.println(Humi);

    sendData(t, h);
  }
}

void sendData(float tem, float hum) {
  Serial.println("Sending data...");
  if (!client.connect(host, httpsPort)) {
    Serial.println("Connection to server failed");
    return;
  }

  String string_temperature = String(tem);
  String string_humidity = String(hum);
  String url = "/macros/s/" + GAS_ID + "/exec?temperature=" + string_temperature + "&humidity=" + string_humidity;
  Serial.print("Requesting URL: ");
  Serial.println(url);

  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" +
               "User-Agent: BuildFailureDetectorESP8266\r\n" +
               "Connection: close\r\n\r\n");

  Serial.println("Request sent");

  while (client.connected()) {
    String line = client.readStringUntil('\n');
    if (line == "\r") {
      Serial.println("Headers received");
      break;
    }
  }

  String line = client.readStringUntil('\n');
  if (line.startsWith("24d")) {
    Serial.println("Record created successfully!");
    
    // Faz o LED interno piscar quando a inscrição é bem-sucedida
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  } else {
    Serial.println("Failed to create record");
  }
  
  Serial.print("Reply was: ");
  Serial.println(line);
  Serial.println("Closing connection");
  Serial.println("==========");
  Serial.println();
  client.stop();
}
