/*
En mi caso la mediciones fueron:
90° = 346
45° = 172
0° = 0

Por regla de 3:
  346   = 90
lectura = X

Obtenemos la fórmula:
X =  90 * lectura
   **************
        346
*/

float angulo = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lectura = analogRead(A0);
  lectura = lectura - 149;
  angulo = (90.0 * lectura) / 346;
  Serial.print(lectura);
  Serial.print(" = ");
  Serial.print(angulo);
  Serial.println("°");
  delay(50);
}
