int LED =A1;
const int gas =0;
int MQ2pin = A0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
float sensorValue,MQ2pin;
sensorValue =analogRead(MQ2pin);
if(sensorValue<=170){
digitalWrite(LED,LOW);
Serial.print(sensorValue);
Serial.println("SENSOR VALUE" );
}
else
{
digitalWrite(LED,HIGH);
Serial.println("SMOKE DETECTED");
Serial.println(sensorValue);
}
delay(1000);
}
float getsensorValue(int pin)
{
return(analogRead(pin));
}
