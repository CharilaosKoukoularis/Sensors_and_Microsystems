int pinA = 5, pinB = 4, pinC = 3, pinD = 2, led[2] = {12, 13}, inputPin = 7, clkPin = 9;
int a, b, c, d, clkCount, led0, led1;
char mode;

void setup() {
  // pinMode(pinD, INPUT);
  // pinMode(pinC, INPUT);
  // pinMode(pinB, INPUT);
  // pinMode(pinA, INPUT);
  pinMode(inputPin, OUTPUT);
  pinMode(clkPin, OUTPUT);
  // for (int i = 0; i < 1; i++) {
  //   pinMode(led[i], INPUT);
  // }
  clkCount = digitalRead(led[0]) + 2 * digitalRead(led[1]);
  Serial.begin(9600); 

  // delay(200);
  // Serial.print("Clock Cycle ");
  // Serial.println(clkCount);
  // Serial.println("LEDs : 00");
  // Serial.println("DCBA");
  // Serial.print(d);
  // Serial.print(c);
  // Serial.print(b);
  // Serial.println(a);
  // Serial.println("----------");
}

void loop() {
  if (Serial.available()) {
    mode = Serial.read();
    if (mode == '1' || mode == '0') {
      if (mode == '1') {
        digitalWrite(inputPin, HIGH);
      } else {
        digitalWrite(inputPin, LOW);
      }
      
    } else if (mode == 'c') {

      digitalWrite(clkPin, HIGH);
      delay(100);
      digitalWrite(clkPin, LOW);

      // d = digitalRead(pinD);
      // c = digitalRead(pinC);
      // b = digitalRead(pinB);
      // a = digitalRead(pinA);
      // led0 = digitalRead(led[0]);
      // led1 = digitalRead(led[1]);

      // clkCount++;
      // Serial.print("Clock Cycle ");
      // Serial.println(clkCount);
      // Serial.print("LEDs : ");
      // Serial.print(led1);
      // Serial.println(led0);
      
      // Serial.print("Switch State : ");
      // Serial.println(digitalRead(inputPin));

      // if (clkCount % 4 == 0) {
      //   Serial.println("----------");
      //   Serial.println("DCBA");
      //   Serial.print(d);
      //   Serial.print(c);
      //   Serial.print(b);
      //   Serial.println(a);
      // }

      // Serial.println("----------");

    }
  }
  
}
