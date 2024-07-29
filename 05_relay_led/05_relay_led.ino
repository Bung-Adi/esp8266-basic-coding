#define RELAY1 D1

void setup() {
  Serial.begin(115200);
  pinMode(RELAY1, OUTPUT);
}

void loop() {
  digitalWrite(RELAY1, HIGH);
  Serial.println("\n Relay OFF");
  delay(2000);
  digitalWrite(RELAY1, LOW);
  Serial.println("\n Rellay ON");
  delay(2000);
}
