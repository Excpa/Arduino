const int lowestPin = 2;
const int highestPin = 9;

void setup()
{
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
  pinMode(thisPin, OUTPUT);
  }
}
void loop()
{
 for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
  digitalWrite(thisPin, HIGH);
  delay(100);
  }
  for (int thisPin = highestPin; thisPin >= lowestPin; thisPin--)
  {
  digitalWrite(thisPin, LOW);
  delay(100);
  }
  for (int thisPin = highestPin; thisPin >= lowestPin; thisPin--)
  {
  digitalWrite(thisPin, HIGH);
  delay(100);
  }
   for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
  digitalWrite(thisPin, LOW);
  delay(100);
  }
}
