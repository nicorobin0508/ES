int ledPin = 8;
void setup()
{
pinMode(ledPin, OUTPUT);
}
void loop()
{
digitalWrite(ledPin, HIGH); // On
delay(1000); // 1000 secs delay
digitalWrite(ledPin, LOW); // Off
delay(1000); // 1000 secs delay
}

