int pin = A0;
int vcc = 5000;
int offset = 29;
int led = 11;

int value;
int voltage;
int field;
int brightness;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  value = analogRead(pin);
  voltage = value * (vcc / 1024.0);
  field = map(voltage, 1000, 4000, -100, 100) + offset;
  brightness = map(voltage, 1000, 4000, LOW, HIGH);
  analogWrite(led, brightness);

  Serial.print("Value: ");
  Serial.print(value);
  Serial.print("\t");
  Serial.print(voltage);
  Serial.println(" mV");
  Serial.print("Magnetic Field: ");
  Serial.print(field);
  Serial.println(" mT");
  Serial.println("==========================");
  delay(100);
}