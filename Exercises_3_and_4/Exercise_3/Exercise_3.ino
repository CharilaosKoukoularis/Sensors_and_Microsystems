int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  randomSeed(analogRead(A0));
}
void loop() {
  analogWrite(ledPin1, random(0, 130) + 125);
  analogWrite(ledPin2, random(0, 130));
  analogWrite(ledPin3, random(0, 130));
  delay(random(0, 120));
}
