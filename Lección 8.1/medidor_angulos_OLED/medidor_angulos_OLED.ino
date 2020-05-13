#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

#define OLED_RESET     4
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

float angulo = 0.0;

void setup() {
  Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.display();
}

void loop() {
  int lectura = analogRead(A0);
  lectura = lectura - 149;
  angulo = (90.0 * lectura) / 346;
  Serial.print(lectura);
  Serial.print(" = ");
  Serial.print(angulo);
  Serial.println("°");

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println(F("cefuve.com"));

  display.setTextSize(3);
  display.setTextColor(SSD1306_WHITE);
  display.print(F(" "));
  display.print(angulo);

  display.display();
  delay(50);
}
