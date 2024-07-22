void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void writeSymbol(char symbol) {
  int duration;
  if (symbol == '.') {
    duration = 500;
  } else if (symbol == '-') {
    duration = 1500;
  } else {
    duration = 0;
  }
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duration);
  digitalWrite(LED_BUILTIN, LOW);
}

void writeLetter(char letter) {
  if (letter == 's' || letter == 'S') {
    for (int i = 0; i < 3; i++) {
      writeSymbol('.');
      delay(500);
    }
  } else if (letter == 'o' || letter == 'O') {
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