void setup() {
  Serial.begin(9600);
}

void loop() {
  int sum = 0;
  int readings = 10; // 平均10次
  for (int i = 0; i < readings; i++) {
    sum += analogRead(A0);
    delay(2); // 讀取間隔短一點
  }
  int val0 = sum / readings;

  Serial.println(val0);
  delay(10);
}
