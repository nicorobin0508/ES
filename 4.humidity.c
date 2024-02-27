const int analogIn=A1;
int humiditySensorOutput=0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
humiditySensorOutput=analogRead(analogIn);
int humidityPercentage = map(humiditySensorOutput, 0, 1023, 10, 70);
Serial.print("\nhumidity:");
Serial.print(humiditySensorOutput);
Serial.print("%");
delay(5000);
}
