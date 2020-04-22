const int e_seg = 2;
const int d_seg = 3;
const int c_seg = 4;
const int dp = 5;
const int b_seg = 6;
const int a_seg = 7;
const int f_seg = 8;
const int g_seg = 9;
int stepDelay = 1000;

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
  zero();
  delay(stepDelay);
  one();
  delay(stepDelay);
  two();
  delay(stepDelay);
  three();
  delay(stepDelay);
  four();
  delay(stepDelay);
  five();
  delay(stepDelay);
  six();
  delay(stepDelay);
  seven();
  delay(stepDelay);
  eight();
  delay(stepDelay);
  nine();
  delay(stepDelay);
}

void one(){
  digitalWrite(e_seg, HIGH);
  digitalWrite(d_seg, HIGH);
  digitalWrite(dp, HIGH);
  digitalWrite(a_seg, HIGH);
  digitalWrite(f_seg, HIGH);
  digitalWrite(g_seg, HIGH);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, LOW);
}

void two(){
  digitalWrite(e_seg, LOW);
  digitalWrite(d_seg, LOW);
  digitalWrite(dp, HIGH);
  digitalWrite(a_seg, LOW);
  digitalWrite(f_seg, HIGH);
  digitalWrite(g_seg, LOW);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, HIGH);
}

void three(){
  digitalWrite(e_seg, HIGH);
  digitalWrite(d_seg, LOW);
  digitalWrite(dp, HIGH);
  digitalWrite(a_seg, LOW);
  digitalWrite(f_seg, HIGH);
  digitalWrite(g_seg, LOW);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, LOW);
}

void four(){
  digitalWrite(a_seg, HIGH);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, LOW);
  digitalWrite(d_seg, HIGH);
  digitalWrite(e_seg, HIGH);
  digitalWrite(f_seg, LOW);
  digitalWrite(g_seg, LOW);
  digitalWrite(dp, HIGH);
}

void five(){
  digitalWrite(a_seg, LOW);
  digitalWrite(b_seg, HIGH);
  digitalWrite(c_seg, LOW);
  digitalWrite(d_seg, LOW);
  digitalWrite(e_seg, HIGH);
  digitalWrite(f_seg, LOW);
  digitalWrite(g_seg, LOW);
  digitalWrite(dp, HIGH);
}

void six(){
  digitalWrite(a_seg, LOW);
  digitalWrite(b_seg, HIGH);
  digitalWrite(c_seg, LOW);
  digitalWrite(d_seg, LOW);
  digitalWrite(e_seg, LOW);
  digitalWrite(f_seg, LOW);
  digitalWrite(g_seg, LOW);
  digitalWrite(dp, HIGH);
}

void seven(){
  digitalWrite(a_seg, LOW);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, LOW);
  digitalWrite(d_seg, HIGH);
  digitalWrite(e_seg, HIGH);
  digitalWrite(f_seg, HIGH);
  digitalWrite(g_seg, HIGH);
  digitalWrite(dp, HIGH);
}

void eight(){
  digitalWrite(a_seg, LOW);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, LOW);
  digitalWrite(d_seg, LOW);
  digitalWrite(e_seg, LOW);
  digitalWrite(f_seg, LOW);
  digitalWrite(g_seg, LOW);
  digitalWrite(dp, HIGH);
}

void nine(){
  digitalWrite(a_seg, LOW);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, LOW);
  digitalWrite(d_seg, LOW);
  digitalWrite(e_seg, HIGH);
  digitalWrite(f_seg, LOW);
  digitalWrite(g_seg, LOW);
  digitalWrite(dp, HIGH);
}

void zero(){
  digitalWrite(a_seg, LOW);
  digitalWrite(b_seg, LOW);
  digitalWrite(c_seg, LOW);
  digitalWrite(d_seg, LOW);
  digitalWrite(e_seg, LOW);
  digitalWrite(f_seg, LOW);
  digitalWrite(g_seg, HIGH);
  digitalWrite(dp, HIGH);
}
