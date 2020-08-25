/****************************************************************************************
 Datos Con LCD2004
 
  En este ejemplo mostramos en un LCD2004 variables, que pueden representar valores de sensores u otros datos. 
  Para simular los sensores se pueden usar potenciómetros conectados a los pines analógicos. 

 Conexiones:
  -------------------
  LCD1602/2004-> Arduino
  -------------------
  VSS (Pin 1) -> GND
  VDD (Pin 2) -> 5V
  VEE (Pin 3) -> Potenciómetro(**)
  RS (Pin 4)  -> D8
  RW (Pin 5)  -> GND
  EN (Pin 6)  -> D9
  D0 (Pin 7)  -> NC
  D1 (Pin 8)  -> NC
  D2 (Pin 9)  -> NC
  D3 (Pin 10) -> NC
  D4 (Pin 11) -> D4
  D5 (Pin 12) -> D5
  D6 (Pin 13) -> D6
  D7 (Pin 14) -> D7
  Led+(Pin 15)-> 5V
  Led-(Pin 16)-> GND
  ------------------
  Sensor1(pot1)->A0
  Sensor2(pot2)->A1 
  Sensor3(pot3)->A2  
  ------------------
  **El potenciómetro es para controlar la intensidad
  *Puede usar potenciómetros para simular sensores analógicos
  *Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines
  

 Ejemplo desarrollado por Naylamp Mechatronics bajo licencia MIT (puede copiar, modificar, integrar o redistribuir)
 
 Última modificación el 23/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/34_Tutorial-LCD-conectando-tu-arduino-a-un-LCD1.html
   -https://github.com/naylampmechatronics/Ejemplos_LCD1602

**************************************************************************************************/

#include <LiquidCrystal.h>

//Definición de pines
const int PinRS = 8;
const int PinEN = 9; 
const int PinD4 = 4;
const int PinD5 = 5;
const int PinD6 = 6;
const int PinD7 = 7;

//Crear el objeto LCD con los números correspondientes (rs, en, d4, d5, d6, d7)
LiquidCrystal lcd(PinRS,PinEN,PinD4,PinD5,PinD6,PinD7);

void setup() {
  // Inicializar el LCD con el número de  columnas y filas del LCD
  lcd.begin(20,4);
}

void loop() {
  int sen1=analogRead(A0);
  float sen2=analogRead(A1)*(5.0 / 1023.0);
  float sen3=analogRead(A2)*(100.0 / 1023.0);
  int tiempo=millis()/1000;
  // Cursor en la primera posición de la primera fila
  lcd.setCursor(0,0);
  lcd.print("ADC: ");
  lcd.print(sen1);
  lcd.print("   ");
  // Cursor en la 1° posición de la 2° fila
  lcd.setCursor(0,1);
  lcd.print("Voltaje: ");
  lcd.print(sen2);
  lcd.print(" V  ");
  // Cursor en la primera posición de la 3° fila
  lcd.setCursor(0,2);
  lcd.print("Temperatura:");
  lcd.print(sen3); //1 decimal
  lcd.print(" \337C  "); // "\337" -> "°"
  // Cursor en la 1° posición de la 4° fila
  lcd.setCursor(0,3);
  lcd.print("tiempo: ");
  lcd.print(tiempo);
  lcd.print(" s  ");
  
  delay(200);
  
}
