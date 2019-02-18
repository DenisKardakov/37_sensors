
int sensorPin = A0; // select the input pin for the LDR
int sensorValue = 0; // variable to store the value coming from the sensor

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Getting data");
  sensorValue = analogRead(sensorPin); // получаем аналоговый сигнал
  Serial.println(sensorValue);
    if (sensorValue < 100)
      {
        Serial.println("Fire Detected");
        delay(1000);
      }
  delay(sensorValue);

}
