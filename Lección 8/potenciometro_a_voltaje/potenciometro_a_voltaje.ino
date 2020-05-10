float voltaje = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lectura = analogRead(A0);
  voltaje = (5.0 * lectura)/1023;
  Serial.println(voltaje);
  delay(50);
}
