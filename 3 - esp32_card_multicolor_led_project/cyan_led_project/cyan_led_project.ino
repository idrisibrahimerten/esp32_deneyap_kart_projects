// Cyan Led

void setup() {
  pinMode(D3, OUTPUT);          // Red led set as output
  pinMode(D2, OUTPUT);          // Green led set as output
  pinMode(D10, OUTPUT);         // Blue led set as output
}

void loop() {
  digitalWrite(D3, LOW);      
  digitalWrite(D2, LOW);      
  digitalWrite(D10, LOW);
  delay(1000);
}
