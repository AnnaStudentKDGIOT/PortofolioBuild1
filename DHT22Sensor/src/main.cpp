#include <Arduino.h>
#include <DHT_U.h>

#define DHT22Pin 12
#define DHTType DHT22
DHT dht(DHT22Pin, DHTType, DHT22);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();

}

void loop() {
 float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %, Temp: ");
    Serial.print(temperature);
    Serial.println(" Celsius");

    delay(1000);
}

