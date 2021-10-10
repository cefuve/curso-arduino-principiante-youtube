int categoria = 0;
int menu = 0;
int submenu = 0;
int btn1 = A0;
int btn2 = A2;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int lectura1 = digitalRead(btn1);
  int lectura2 = digitalRead(btn2);

  if(lectura1 == 0){
    if(categoria == 0){
      if(menu == 3){
        menu = 0;
      }
      menu++;
      switch(menu){
        case 1: Serial.println("Placa"); break;
        case 2: Serial.println("Procesador"); break;
        case 3: Serial.println("Puerto"); break;
      }
    }
    if(categoria == 1){
      if(submenu == 4){
        submenu = 0;
      }
      submenu++;
      if(menu == 1){
        switch(submenu){
          case 1: Serial.println("Placa > UNO"); break;
          case 2: Serial.println("Placa > nano"); break;
          case 3: Serial.println("Placa > micro"); break;
          case 4: Serial.println("Placa > volver"); break;
        }
      }
      if(menu == 2){
        switch(submenu){
          case 1: Serial.println("Procesador > 328"); break;
          case 2: Serial.println("Procesador > 328(older)"); break;
          case 3: Serial.println("Procesador > 168"); break;
          case 4: Serial.println("Procesador > volver"); break;
        }
      }
      if(menu == 3){
        switch(submenu){
          case 1: Serial.println("Puerto > COM1"); break;
          case 2: Serial.println("Puerto > COM2"); break;
          case 3: Serial.println("Puerto > COM3"); break;
          case 4: Serial.println("Puerto > volver"); break;
        }
      }
    }
    
    while(!digitalRead(btn1));
  }

  if(lectura2 == 0){
	if(categoria == 0) categoria++;		//Nuevo metodo
    if(categoria == 1 && submenu == 4){	//Nuevo metodo
		submenu = 0;						//Nuevo metodo
		categoria = 0;					//Nuevo metodo
	}									//Nuevo metodo
    while(!digitalRead(btn2));
  }
}