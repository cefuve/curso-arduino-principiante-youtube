/*
catodo comun
Display
seg > display > arduino
a > pin4 > A0
b > pin5 > A1
c > pin7 > A2
d > pin9 > A3
e > pin10 > A4
f > pin2 > A5
g > pin1 > 13
pin3, pin8 comun
*/
int segA = A0;
int segB = A1;
int segC = A2;
int segD = A3;
int segE = A4;
int segF = A5;
int segG = 13;

int opto1 = 11;
int opto2 = 12;
int pulsador = 3;
int estado_anterior;

int count = 0;
int Decena = 0;
int Unidad = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(pulsador, INPUT);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}

void loop() {
  int lectura = digitalRead(pulsador);
  
  if(lectura == 0 && estado_anterior == 1){
    count++;
  }
  if(count >= 100){
    count = 0;
  }
  
  Decena = count/10;
  Unidad = count - Decena*10;
  
  mostrar(Decena, 1); //numero, display
  delay(5);
  mostrar(Unidad, 2);
  delay(5);
  
  estado_anterior = lectura;
}


void mostrar(int num, int disp){
  switch(disp){
    case 1: digitalWrite(11, HIGH);
            digitalWrite(12, LOW);
            break;
    case 2: digitalWrite(11, LOW);
            digitalWrite(12, HIGH);
            break;
  }
  switch(num){
    case 0: digitalWrite(segA, !0);
            digitalWrite(segB, !0);
            digitalWrite(segC, !0);
            digitalWrite(segD, !0);
            digitalWrite(segE, !0);
            digitalWrite(segF, !0);
            digitalWrite(segG, !1);
            break;
    case 1: digitalWrite(segA, !1);
            digitalWrite(segB, !0);
            digitalWrite(segC, !0);
            digitalWrite(segD, !1);
            digitalWrite(segE, !1);
            digitalWrite(segF, !1);
            digitalWrite(segG, !1);
            break;
    case 2: digitalWrite(segA, !0);
            digitalWrite(segB, !0);
            digitalWrite(segC, !1);
            digitalWrite(segD, !0);
            digitalWrite(segE, !0);
            digitalWrite(segF, !1);
            digitalWrite(segG, !0);
            break;
    case 3: digitalWrite(segA, !0);
            digitalWrite(segB, !0);
            digitalWrite(segC, !0);
            digitalWrite(segD, !0);
            digitalWrite(segE, !1);
            digitalWrite(segF, !1);
            digitalWrite(segG, !0);
            break;
    case 4: digitalWrite(segA, !1);
            digitalWrite(segB, !0);
            digitalWrite(segC, !0);
            digitalWrite(segD, !1);
            digitalWrite(segE, !1);
            digitalWrite(segF, !0);
            digitalWrite(segG, !0);
            break;
    case 5: digitalWrite(segA, !0);
            digitalWrite(segB, !1);
            digitalWrite(segC, !0);
            digitalWrite(segD, !0);
            digitalWrite(segE, !1);
            digitalWrite(segF, !0);
            digitalWrite(segG, !0);
            break;
    case 6: digitalWrite(segA, !1);
            digitalWrite(segB, !1);
            digitalWrite(segC, !0);
            digitalWrite(segD, !0);
            digitalWrite(segE, !0);
            digitalWrite(segF, !0);
            digitalWrite(segG, !0);
            break;
    case 7: digitalWrite(segA, !0);
            digitalWrite(segB, !0);
            digitalWrite(segC, !0);
            digitalWrite(segD, !1);
            digitalWrite(segE, !1);
            digitalWrite(segF, !1);
            digitalWrite(segG, !1);
            break;
    case 8: digitalWrite(segA, !0);
            digitalWrite(segB, !0);
            digitalWrite(segC, !0);
            digitalWrite(segD, !0);
            digitalWrite(segE, !0);
            digitalWrite(segF, !0);
            digitalWrite(segG, !0);
            break;
    case 9: digitalWrite(segA, !0);
            digitalWrite(segB, !0);
            digitalWrite(segC, !0);
            digitalWrite(segD, !1);
            digitalWrite(segE, !1);
            digitalWrite(segF, !0);
            digitalWrite(segG, !0);
            break;
  }
}
