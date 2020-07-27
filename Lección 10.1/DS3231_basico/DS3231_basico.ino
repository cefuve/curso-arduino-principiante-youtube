#include <Wire.h>
#include <DS3231.h>

DS3231 clock;
RTCDateTime dt;

void setup(){
  Serial.begin(9600);
  clock.begin();

  // Establecer tiempo segun el compliador
  clock.setDateTime(__DATE__, __TIME__);
  
  // Establecer tiempo manual (Año, Mes, Dia, Hora, Minuto, Segundo)
  // clock.setDateTime(2020, 7, 21, 13, 30, 00);
}

void loop(){
  dt = clock.getDateTime();
  Serial.print(dt.day);
  Serial.print("/");
  Serial.print(dt.month);
  Serial.print("/");
  Serial.print(dt.year);
  Serial.print(" ");
  Serial.print(dt.hour);
  Serial.print(":");
  Serial.print(dt.minute);
  Serial.print(":");
  Serial.println(dt.second);

  delay(1000);
}
