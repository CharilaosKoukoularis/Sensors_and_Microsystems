void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void writeSymbol(char s) {
  int duration;
  if (s == '.') {
    duration = 500;
  } else if (s == '-') {
    duration = 1500;
  } else {
    duration = 0;
  }
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duration);
  digitalWrite(LED_BUILTIN, LOW);
}

void writeLetter(char s) {
  if (s == 's' || s == 'S') {
    for (int i = 0; i < 3; i++) {
      writeSymbol('.');
      delay(500);
    }
  } else if (s == 'o' || s == 'O') {
    for (int i = 0; i < 3; i++) {
      writeSymbol('-');
      delay(500);
    }
  }
  delay(1000);
}

void loop() {
  writeLetter('S');
  writeLetter('O');
  writeLetter('S');
}