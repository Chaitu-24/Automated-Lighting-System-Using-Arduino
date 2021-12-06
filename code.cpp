int lightsensor=0;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);

}

void loop()
{
  lightsensor=analogRead(A0);
  Serial.println(lightsensor);
  if (lightsensor< 857)
  {
    if(digitalRead(2)==HIGH)
    {
      digitalWrite(4, HIGH);
      delay(10000);
    }
    else
    {
      digitalWrite(4, LOW);
      delay(1000);
    }
  }
  else
  {
    digitalWrite(4, LOW);
    delay(1000);
  }
}
