//1-7 es Lun-Dom
//8 es semana (Lun-Vie)
//9 es fin de semana (Sab-Dom)
//10 es toda la semana (Lun-Dom)

//##### ALARMA 1 #############
int Alarma1_dias = 10;
int Alarma1_hora = 22;
int Alarma1_minuto = 28;
bool Alarma1 = true;
//############################

//##### ALARMA 2 #############
int Alarma2_dias = 8;
int Alarma2_hora = 13;
int Alarma2_minuto = 53;
bool Alarma2 = false;
//############################

//##### ALARMA 3 #############
int Alarma3_dias = 8;
int Alarma3_hora = 13;
int Alarma3_minuto = 53;
bool Alarma3 = false;
//############################




#include "note.h"

//Descomenta el sonido que quieras
//#include "harry_potter.h"
//#include "pacman.h"
//#include "pinkpanther.h"
//#include "mariobros.h"
//#include "tetris.h"
//#include "nokia.h"
//#include "takeonme.h"
//#include "starwars.h"
//#include "starwars2.h"
//#include "siren.h"
//#include "siren2.h"
#include "siren3.h"






//Librería https://github.com/jarzebski/Arduino-DS3231
#include <LiquidCrystal.h>
#include <Wire.h>
#include <DS3231.h>


LiquidCrystal lcd(/*RS*/12, /*E*/11, /*D4*/5, /*D5*/4, /*D6*/3, /*D7*/2);
DS3231 clock;
RTCDateTime dt;
int pinBuzzer = 6;


void setup(){
  //ActivarBuzzer();
  Serial.begin(9600);
  clock.begin();
  lcd.begin(16, 2);
  pinMode(pinBuzzer, OUTPUT);
  clock.setDateTime(__DATE__, __TIME__);
  
  lcd.setCursor(0, 0);
  lcd.print("  developed by");
  lcd.setCursor(0, 1);
  lcd.print("   cefuve.com");
  delay(2000);
}


void loop(){
  dt = clock.getDateTime();
  // Imprimir en monitor serial
  Serial.print(dt.hour);
  Serial.print(":");
  Serial.print(dt.minute);
  Serial.print(":");
  Serial.println(dt.second);

  // Imprimir en el LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  switch(dt.dayOfWeek){
    case 1: lcd.print("   Lunes "); break;
    case 2: lcd.print("   Martes "); break;
    case 3: lcd.print(" Miercoles "); break;
    case 4: lcd.print("   Jueves "); break;
    case 5: lcd.print("  Viernes "); break;
    case 6: lcd.print("   Sabado "); break;
    case 7: lcd.print("  Domingo ");
  }
  int temperatura = clock.readTemperature();
  lcd.print(temperatura);
  lcd.print((char)223);
  lcd.print("C");
  
  lcd.setCursor(0, 1);
  lcd.print("    ");
  lcd.print(dt.hour);
  lcd.print(":");
  if(dt.minute < 10) lcd.print("0");
  lcd.print(dt.minute);
  lcd.print(":");
  if(dt.second < 10) lcd.print("0");
  lcd.print(dt.second);
  
  
  // Lógica de las alarmas
  // ALARMA 1
  if(Alarma1){
    if(Alarma1_dias == dt.dayOfWeek && Alarma1_hora == dt.hour && Alarma1_minuto == dt.minute){
      ActivarBuzzer();
    }
    if(Alarma1_dias == 8 && Alarma1_hora == dt.hour && Alarma1_minuto == dt.minute){
      if(dt.dayOfWeek >= 1 && dt.dayOfWeek <= 5){
        ActivarBuzzer();
      }
    }
    if(Alarma1_dias == 9 && Alarma1_hora == dt.hour && Alarma1_minuto == dt.minute){
      if(dt.dayOfWeek >= 6 && dt.dayOfWeek <= 7){
        ActivarBuzzer();
      }
    }
    if(Alarma1_dias == 10 && Alarma1_hora == dt.hour && Alarma1_minuto == dt.minute){
      ActivarBuzzer();
    }
  }

  //ALARMA 2
  if(Alarma2){
    if(Alarma2_dias == dt.dayOfWeek && Alarma2_hora == dt.hour && Alarma2_minuto == dt.minute){
      ActivarBuzzer();
    }
    if(Alarma2_dias == 8 && Alarma2_hora == dt.hour && Alarma2_minuto == dt.minute){
      if(dt.dayOfWeek >= 1 && dt.dayOfWeek <= 5){
        ActivarBuzzer();
      }
    }
    if(Alarma2_dias == 9 && Alarma2_hora == dt.hour && Alarma2_minuto == dt.minute){
      if(dt.dayOfWeek >= 6 && dt.dayOfWeek <= 7){
        ActivarBuzzer();
      }
    }
    if(Alarma2_dias == 10 && Alarma2_hora == dt.hour && Alarma2_minuto == dt.minute){
      ActivarBuzzer();
    }
  }

  //ALARMA 3
  if(Alarma3){
    if(Alarma3_dias == dt.dayOfWeek && Alarma3_hora == dt.hour && Alarma3_minuto == dt.minute){
      ActivarBuzzer();
    }
    if(Alarma3_dias == 8 && Alarma3_hora == dt.hour && Alarma3_minuto == dt.minute){
      if(dt.dayOfWeek >= 1 && dt.dayOfWeek <= 5){
        ActivarBuzzer();
      }
    }
    if(Alarma3_dias == 9 && Alarma3_hora == dt.hour && Alarma3_minuto == dt.minute){
      if(dt.dayOfWeek >= 6 && dt.dayOfWeek <= 7){
        ActivarBuzzer();
      }
    }
    if(Alarma3_dias == 10 && Alarma3_hora == dt.hour && Alarma3_minuto == dt.minute){
      ActivarBuzzer();
    }
  }

  
  delay(1000);
}


void ActivarBuzzer(){
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider = melody[thisNote + 1];
    if (divider > 0) {
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;
    }

    tone(pinBuzzer, melody[thisNote], noteDuration*0.9);
    delay(noteDuration);
    noTone(pinBuzzer);
  }
}
