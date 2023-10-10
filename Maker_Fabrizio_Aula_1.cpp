int ch1 = 1;
int ch2 = 2;
int LED = 8;
boolean in1;
boolean in2;

void setup() {
  pinMode(ch1, INPUT_PULLUP);
  pinMode(ch2, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  in1 = digitalRead(ch1);
  in2 = digitalRead(ch2);
  delay(100);

  if (in1 == 0 && in2 == 0) {
    digitalWrite(LED, HIGH);
  } else if (in1 == 0 && in2 == 1) {
    piscarLed(6); // Piscar 6 vezes
  } else if (in1 == 1 && in2 == 0) {
    piscarLed(3); // Piscar 3 vezes
  } else if (in1 == 1 && in2 == 1) {
    digitalWrite(LED, LOW);
  }
}

void piscarLed(int n) {
  for (int i = 0; i < n; i++) {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
}
