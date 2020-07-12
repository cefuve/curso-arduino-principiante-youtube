int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  if(Serial.available() > 0){
    char lectura = Serial.read();
    Serial.print(lectura);
    
    if(lectura == 49){
      digitalWrite(LED1, HIGH);
    }
    if(lectura == '2'){
      digitalWrite(LED2, HIGH);
    }
    if(lectura == '3'){
      digitalWrite(LED3, HIGH);
    }
    if(lectura == '4'){
      digitalWrite(LED4, HIGH);
    }
  }
}
