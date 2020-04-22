// in this sketch I want to use the PWM to simulate an analog signal
// coming from pin D3. Its values go from 0 to 255 (duty cycle 0-100)

int delta = 1;
int brightness = 0;

void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  analogWrite(3, brightness);
  brightness += delta;
  if (brightness <= 0 || brightness >= 255) delta = - delta;
  delay(5);
}

// it werks btw
