const int inPin = 3;


void setup()
{
  pinMode(inPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print( digitalRead(inPin));
  delay(1000);
}