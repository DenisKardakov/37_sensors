#include "DHT.h"
// For DHT 22 (pins numbered from left to right):
// pin 1 - 5V
// pin 2 - data
// pin 3 - 3.3 V (do not connect)
// pin 4 - GND 
#define DHTPIN 4 // data pin number 

// Choose sensor version below

// Sensor initialization
DHT dht(DHTPIN, DHT11);


void setup() {
   
  Serial.begin(9600);
  dht.begin();
}

void loop() {
   // 2 second delay between measurements
  delay(2000);
  
  //Get humidity
  
  float h = dht.readHumidity();
  
  // get temperature
  
  float t = dht.readTemperature();
  
  // Check if get is succesfull
  
    
  Serial.print("Humidity : ");
  Serial.println (h);
  Serial.print(" Temp: ");
  Serial.println(t);

}


