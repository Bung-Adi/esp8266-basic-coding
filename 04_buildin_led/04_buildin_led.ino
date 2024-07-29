void setup() {
  Serial.begin(115200);
  pinMode(BUILTIN_LED,OUTPUT);
}

void loop() {
  digitalWrite(BUILTIN_LED,HIGH);
  Serial.println("\n LED OFF");
  delay(2000);
  digitalWrite(BUILTIN_LED,LOW);
  Serial.println("\n LED ON");
  delay(2000);
}
