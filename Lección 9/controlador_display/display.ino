int A = A4;
int B = A5;
int C = 2;
int D = 3;
int E = 4;
int F = A3;
int G = A2;
long numero;

int obtenerNumero(){
  return numero;
}

void iniciar(){
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void mostrar(int num){
  switch(num){
    case 0: digitalWrite(A,1); digitalWrite(B,1);
            digitalWrite(C,1); digitalWrite(D,1);
            digitalWrite(E,1); digitalWrite(F,1);
            digitalWrite(G,0); numero=0; break;
    case 1: digitalWrite(A,0); digitalWrite(B,1);
            digitalWrite(C,1); digitalWrite(D,0);
            digitalWrite(E,0); digitalWrite(F,0);
            digitalWrite(G,0); numero=1; break;
    case 2: digitalWrite(A,1); digitalWrite(B,1);
            digitalWrite(C,0); digitalWrite(D,1);
            digitalWrite(E,1); digitalWrite(F,0);
            digitalWrite(G,1); numero=2; break;
    case 3: digitalWrite(A,1); digitalWrite(B,1);
            digitalWrite(C,1); digitalWrite(D,1);
            digitalWrite(E,0); digitalWrite(F,0);
            digitalWrite(G,1); numero=3; break;
    case 4: digitalWrite(A,0); digitalWrite(B,1);
            digitalWrite(C,1); digitalWrite(D,0);
            digitalWrite(E,0); digitalWrite(F,1);
            digitalWrite(G,1); numero=4; break;
    case 5: digitalWrite(A,1); digitalWrite(B,0);
            digitalWrite(C,1); digitalWrite(D,1);
            digitalWrite(E,0); digitalWrite(F,1);
            digitalWrite(G,1); numero=5; break;
    case 6: digitalWrite(A,0); digitalWrite(B,0);
            digitalWrite(C,1); digitalWrite(D,1);
            digitalWrite(E,1); digitalWrite(F,1);
            digitalWrite(G,1); numero=6; break;
    case 7: digitalWrite(A,1); digitalWrite(B,1);
            digitalWrite(C,1); digitalWrite(D,0);
            digitalWrite(E,0); digitalWrite(F,0);
            digitalWrite(G,0); numero=7; break;
    case 8: digitalWrite(A,1); digitalWrite(B,1);
            digitalWrite(C,1); digitalWrite(D,1);
            digitalWrite(E,1); digitalWrite(F,1);
            digitalWrite(G,1); numero=8; break;
    case 9: digitalWrite(A,1); digitalWrite(B,1);
            digitalWrite(C,1); digitalWrite(D,0);
            digitalWrite(E,0); digitalWrite(F,1);
            digitalWrite(G,1); numero=9; break;
  }
}
