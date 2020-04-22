const int e_seg = 2;
const int d_seg = 3;
const int c_seg = 4;
const int dp = 5;
const int b_seg = 6;
const int a_seg = 7;
const int f_seg = 8;
const int g_seg = 9;
int stepDelay = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(e_seg, OUTPUT);
  pinMode(d_seg, OUTPUT);
  pinMode(c_seg, OUTPUT);
  pinMode(dp, OUTPUT);
  pinMode(b_seg, OUTPUT);
  pinMode(a_seg, OUTPUT);
  pinMode(f_seg, OUTPUT);
  pinMode(g_seg, OUTPUT);

  // turning off the display completely
  digitalWrite(e_seg, HIGH);
  digitalWrite(d_seg, HIGH);
  digitalWrite(dp, HIGH);
  digitalWrite(a_seg, LOW);
  digitalWrite(f_seg, HIGH);
  digitalWrite(g_seg, HIGH);
  digitalWrite(b_seg, HIGH);
  digitalWrite(c_seg, HIGH);
}

void loop() {
  switchLed(a_seg, b_seg);
  delay(stepDelay);
  switchLed(b_seg, c_seg);
  delay(stepDelay);
  switchLed(c_seg, d_seg);
  delay(stepDelay);
  switchLed(d_seg, e_seg);
  delay(stepDelay);
  switchLed(e_seg, f_seg);
  delay(stepDelay);
  switchLed(f_seg, a_seg);
  delay(stepDelay);
}

void switchLed(int to_turn_off, int to_turn_on){
  digitalWrite(to_turn_off, HIGH);
  digitalWrite(to_turn_on, LOW);
}
