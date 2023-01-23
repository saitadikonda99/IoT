const int ledPin = 5;
const int ldrPin = A0;
void setup()
{
  Serial.begin(3600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop()
{
  int ldrStatus = analogRead(ldrPin);
  Serial.println(ldrStatus);
  if (ldrStatus<=100)
  {
    digitalWrite(ledPin, HIGH);
     Serial.println(ldrStatus);
  }
  else
  {
    
  digitalWrite(ledPin,LOW);
    Serial.println(ldrStatus);
  }
}
