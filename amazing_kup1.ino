int counter;

int counter2;

int counter3;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 3; ++counter) {
    digitalWrite(13, HIGH);
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(13, LOW);
    delay(100); // Wait for 100 millisecond(s)
  }
  digitalWrite(13, LOW);
  delay(300); // Wait for 300 millisecond(s)
  for (counter2 = 0; counter2 < 3; ++counter2) {
    digitalWrite(13, HIGH);
    delay(600); // Wait for 600 millisecond(s)
    digitalWrite(13, LOW);
    delay(100); // Wait for 100 millisecond(s)
  }
  digitalWrite(13, LOW);
  delay(300); // Wait for 300 millisecond(s)
  for (counter3 = 0; counter3 < 10; ++counter3) {
    digitalWrite(13, HIGH);
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(13, LOW);
    delay(100); // Wait for 100 millisecond(s)
  }
  digitalWrite(13, LOW);
  delay(2000); // Wait for 2000 millisecond(s)

  digitalWrite(0, HIGH);
}