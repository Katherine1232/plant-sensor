int thresh = 30;
int sensorValue;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() {
  sensorValue = analogRead(A2);
  if (sensorValue < thresh) {
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
  }
  else {
    digitalWrite(2, LOW);
  }
  delay(50);
}
