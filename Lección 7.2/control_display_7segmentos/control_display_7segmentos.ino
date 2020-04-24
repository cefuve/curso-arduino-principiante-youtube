int count = 0;
int segA = A4;
int segB = A5;
int segC = 2;
int segD = 3;
int segE = 4;
int segF = A2;
int segG = A3;

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(A1, INPUT);
  digitalWrite(segA, 1);
  digitalWrite(segB, 1);
  digitalWrite(segC, 1);
  digitalWrite(segD, 1);
  digitalWrite(segE, 1);
  digitalWrite(segF, 1);
  digitalWrite(segG, 1);

  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(A1);

  if(state == 0){
    count++;
    if(count == 10){
      count = 0;
    }
    Serial.println(count);
    while(!digitalRead(A1));
  }


  switch(count){
    case 0: digitalWrite(segA, 0);
            digitalWrite(segB, 0);
            digitalWrite(segC, 0);
            digitalWrite(segD, 0);
            digitalWrite(segE, 0);
            digitalWrite(segF, 0);
            digitalWrite(segG, 1);
            break;
    case 1: digitalWrite(segA, 1);
            digitalWrite(segB, 0);
            digitalWrite(segC, 0);
            digitalWrite(segD, 1);
            digitalWrite(segE, 1);
            digitalWrite(segF, 1);
            digitalWrite(segG, 1);
            break;
    case 2: digitalWrite(segA, 0);
            digitalWrite(segB, 0);
            digitalWrite(segC, 1);
            digitalWrite(segD, 0);
            digitalWrite(segE, 0);
            digitalWrite(segF, 1);
            digitalWrite(segG, 0);
            break;
    case 3: digitalWrite(segA, 0);
            digitalWrite(segB, 0);
            digitalWrite(segC, 0);
            digitalWrite(segD, 0);
            digitalWrite(segE, 1);
            digitalWrite(segF, 1);
            digitalWrite(segG, 0);
            break;
    case 4: digitalWrite(segA, 1);
            digitalWrite(segB, 0);
            digitalWrite(segC, 0);
            digitalWrite(segD, 1);
            digitalWrite(segE, 1);
            digitalWrite(segF, 0);
            digitalWrite(segG, 0);
            break;
    case 5: digitalWrite(segA, 0);
            digitalWrite(segB, 1);
            digitalWrite(segC, 0);
            digitalWrite(segD, 0);
            digitalWrite(segE, 1);
            digitalWrite(segF, 0);
            digitalWrite(segG, 0);
            break;
    case 6: digitalWrite(segA, 1);
            digitalWrite(segB, 1);
            digitalWrite(segC, 0);
            digitalWrite(segD, 0);
            digitalWrite(segE, 0);
            digitalWrite(segF, 0);
            digitalWrite(segG, 0);
            break;
    case 7: digitalWrite(segA, 0);
            digitalWrite(segB, 0);
            digitalWrite(segC, 0);
            digitalWrite(segD, 1);
            digitalWrite(segE, 1);
            digitalWrite(segF, 1);
            digitalWrite(segG, 1);
            break;
    case 8: digitalWrite(segA, 0);
            digitalWrite(segB, 0);
            digitalWrite(segC, 0);
            digitalWrite(segD, 0);
            digitalWrite(segE, 0);
            digitalWrite(segF, 0);
            digitalWrite(segG, 0);
            break;
    case 9: digitalWrite(segA, 0);
            digitalWrite(segB, 0);
            digitalWrite(segC, 0);
            digitalWrite(segD, 1);
            digitalWrite(segE, 1);
            digitalWrite(segF, 0);
            digitalWrite(segG, 0);
            break;
  }
}
