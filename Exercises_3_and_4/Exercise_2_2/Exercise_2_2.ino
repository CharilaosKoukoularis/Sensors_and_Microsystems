const int ledPin = 13;
int incomingByte;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.write(incomingByte);
    if ((incomingByte == 'H') || (incomingByte == 'h')) {
      digitalWrite(ledPin, HIGH);
    } else if ((incomingByte == 'L') || (incomingByte == 'l')) {
      digitalWrite(ledPin, LOW);
    } else {
      Serial.write("error\n");
    }
  }
}
