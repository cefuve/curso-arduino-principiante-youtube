int count = 0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(10);

  if(state == 0){
    count++;
    if(count == 10){
      count = 0;
    }
    Serial.println(count);
    while(!digitalRead(10));
  }

  switch(count){
    case 0: digitalWrite(2, LOW); digitalWrite(3, LOW);
            digitalWrite(4, LOW); digitalWrite(5, LOW);
            break;
    case 1: digitalWrite(2, LOW); digitalWrite(3, LOW);
            digitalWrite(4, LOW); digitalWrite(5, HIGH);
            break;
    case 2: digitalWrite(2, LOW); digitalWrite(3, LOW);
            digitalWrite(4, HIGH); digitalWrite(5, LOW);
            break;
    case 3: digitalWrite(2, LOW); digitalWrite(3, LOW);
            digitalWrite(4, HIGH); digitalWrite(5, HIGH);
            break;
    case 4: digitalWrite(2, LOW); digitalWrite(3, HIGH);
            digitalWrite(4, LOW); digitalWrite(5, LOW);
            break;
    case 5: digitalWrite(2, LOW); digitalWrite(3, HIGH);
            digitalWrite(4, LOW); digitalWrite(5, HIGH);
            break;
    case 6: digitalWrite(2, LOW); digitalWrite(3, HIGH);
            digitalWrite(4, HIGH); digitalWrite(5, LOW);
            break;
    case 7: digitalWrite(2, LOW); digitalWrite(3, HIGH);
            digitalWrite(4, HIGH); digitalWrite(5, HIGH);
            break;
    case 8: digitalWrite(2, HIGH); digitalWrite(3, LOW);
            digitalWrite(4, LOW); digitalWrite(5, LOW);
            break;
    case 9: digitalWrite(2, HIGH); digitalWrite(3, LOW);
            digitalWrite(4, LOW); digitalWrite(5, HIGH);
            break;
  }
}
