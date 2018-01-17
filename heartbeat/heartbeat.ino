void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(13, HIGH);
  int x = millis() / 1000;
  int y = millis();
  delay(500);
  digitalWrite(13, LOW);
  Serial.print(x);
  Serial.println(" sec have elapsed");
  Serial.print(y);
  Serial.println(" millisec have elapse");
}

