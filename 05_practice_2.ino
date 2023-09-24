#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT); 
}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  
  for (int i = 0; i < 5; i++) {
    delay(100);
    digitalWrite(PIN_LED, LOW); 
    delay(100); 
    digitalWrite(PIN_LED, HIGH); 
  }

  digitalWrite(PIN_LED, LOW);

  while (1) {}
}
