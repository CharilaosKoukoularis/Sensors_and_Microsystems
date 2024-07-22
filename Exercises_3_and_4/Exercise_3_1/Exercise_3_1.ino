int ledPin[] = {9, 10, 11};
int offset[] = {125, 0, 0};
int n = 3;

void setup() {
  for (int i = 0; i < n; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
  randomSeed(analogRead(A0));
}

void loop() {
  for (int i = 0; i < n; i++) {
    analogWrite(ledPin[i], random(0, 130) + offset[i]);
  }
  delay(random(0, 120));
}