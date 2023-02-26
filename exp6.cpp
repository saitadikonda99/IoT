int trigger = 12, echo = 13, led = 7, spk = 6, cm, inch, duration = 0;

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(spk, OUTPUT);
}

void loop() {
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH);
  cm = duration * 0.034 / 2;
  inch = duration * 0.0133 / 2;
  if (inch < 100) {
    digitalWrite(led, HIGH);
    digitalWrite(spk, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(spk, LOW);
  }
  delay(500);
}

