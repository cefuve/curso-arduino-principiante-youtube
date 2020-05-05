int menu = 0;
int btn1 = A0;
int btn2 = A2;
bool estadotv = true;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lectura1 = digitalRead(btn1);
  int lectura2 = digitalRead(btn2);

  if(lectura1 == 0){
    if(menu == 5){
      menu = 0;
    }
    menu++;

    switch(menu){
      case 1: Serial.println("Apagar");
              break;
      case 2: Serial.println("Subir volumen");
              break;
      case 3: Serial.println("Bajar volumen");
              break;
      case 4: Serial.println("Subir canal");
              break;
      case 5: Serial.println("Bajar canal");
              break;
    }
    while(!digitalRead(btn1));
  }

  if(lectura2 == 0){
    if(menu == 1){
      if(estadotv == true){
        Serial.println("-> Apagando televisor...");
        digitalWrite(2, HIGH);
        delay(500);
        digitalWrite(2, LOW);
        estadotv = false;
      }else{
        Serial.println("-> TV apagada.");
      }
    }
    if(menu == 2 && estadotv == true){
      Serial.println("-> Subiendo volumen...");
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
    }
    if(menu == 3 && estadotv == true){
      Serial.println("-> Bajando volumen...");
      digitalWrite(4, HIGH);
      delay(500);
      digitalWrite(4, LOW);
    }
    if(menu == 4 && estadotv == true){
      Serial.println("-> Subiendo canal...");
      digitalWrite(5, HIGH);
      delay(500);
      digitalWrite(5, LOW);
    }
    if(menu == 5 && estadotv == true){
      Serial.println("-> Bajando canal...");
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
    }

    while(!digitalRead(btn2));
  }
}
