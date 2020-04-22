int rows[] = {
  9, 0, 8, 12, 1, 7, 2, 5
};

int columns[] = {
  13, 3, 4, 10, 6, 11, A0, A1
};

int totalDigitalPinCount = 13;

void setup() {
  // set all pins to be output
  for (int i = 0; i <= totalDigitalPinCount; i++) {
    pinMode(i, OUTPUT);
  }
  resetPins();
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int thisRowIndex = 0; thisRowIndex < 8; thisRowIndex++) {
    if (thisRowIndex == 0) {
      digitalWrite(rows[thisRowIndex], HIGH);
    } else {
      digitalWrite(rows[thisRowIndex - 1], LOW);
      digitalWrite(rows[thisRowIndex], HIGH);
    }
    delay(250);
    for (int thisColumnIndex = 0; thisColumnIndex < 8; thisColumnIndex++) {
      digitalWrite(columns[thisColumnIndex], LOW);
      delay(250);
    }
  }
  resetPins();
}

void resetPins() {
  // resetting rows
  for (int i = 0; 0 < 8; i++) {
    digitalWrite(rows[i], LOW);
  }

  // resetting columns
  for (int i = 0; 0 < 8; i++) {
    digitalWrite(columns[i], HIGH);
  }
}
