void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(13, HIGH);
  int x = millis() / 1000;
  delay(500);
  digitalWrite(13, LOW);
  Serial.print(x);
  Serial.println(" sec have elapsed");
}


