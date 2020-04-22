int tempPin = A0; // the sensor's signal is on A0
int min = 20; // we use this for the plotter
int max = 30; // and this
int reading;  // we define the reading from the sensor as an int
float temp;   // this is going to be the temperature

void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL); // this sets the ADC to 1.1V max
}

void loop() {
  reading = analogRead(tempPin);
  temp = (reading * 110)/1023; // converting reading to temp
  String axis = String(min) +" "+ String(temp) +" "+ String(max);
  Serial.println(axis);
  delay(100);
}
