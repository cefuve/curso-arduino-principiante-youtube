void setup() {
  Serial.begin(9600);
  iniciar();
  randomSeed(analogRead(0));
  mostrar(random(10));
}

void loop() {
  int displayNum = obtenerNumero();
  Serial.println(displayNum);
  delay(100);
}
