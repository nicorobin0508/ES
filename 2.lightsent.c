int bulb = 7;
int ldr = A3;
void setup()
{
pinMode(bulb, OUTPUT);
pinMode(ldr, INPUT);
}
void loop()
{
if(analogRead(ldr) > 500)
digitalWrite(bulb,0);
else
digitalWrite(bulb,1);
}
