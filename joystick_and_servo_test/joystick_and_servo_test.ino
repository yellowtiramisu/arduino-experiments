#include <Servo.h>
Servo myservo;

const int SW_pin = 2;
const int X_pin = A0;
const int Y_pin = A1;
int angle = 0;
int SW_state = 0;
int X_state = 0;
int delta = 3;
bool clockwise = true;
int step_delay = 5;

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(angle);
}

void loop() {
  // Plotter stuff
  Serial.print("X: ");
  Serial.print(analogRead(X_pin));
  Serial.print(" Y: ");
  Serial.print(analogRead(Y_pin));
  Serial.print(" Z: ");
  Serial.println(digitalRead(SW_pin));
  delay(step_delay);

  SW_state = digitalRead(SW_pin);
  X_state = analogRead(X_pin);

  if (X_state >= 1000) {
    if (clockwise) {
      if (angle < 180) {
        angle += delta;
        myservo.write(angle);
        delay(step_delay);
      } else {
        clockwise = false;
      }
    } else {
      if (angle > 0) {
        angle -= delta;
        myservo.write(angle);
        delay(step_delay);
      } else {
        clockwise = true;
      }
    }
  }
  
}
