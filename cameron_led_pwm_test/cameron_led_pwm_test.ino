int LEDpin = 11;
int bright = 0;
int increm = 5;
int time = 25;

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  analogWrite(LEDpin, bright);
  delay(time);
  bright += increm;
  if (bright <= 0 || bright >= 255) increm = - increm;
}
