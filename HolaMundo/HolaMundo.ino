/****************************************************************************************
 Hola Mundo
 
  Programa para testear el funcionamiento de un LCD1602 o LCD2004  

 Conexiones:
  -------------------
  LCD1602/2004-> Arduino
  -------------------
  VSS (Pin 1) -> GND
  VDD (Pin 2) -> 5V
  VEE (Pin 3) -> Potenciómetro
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
  *Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines
  *El potenciómetro es para controlar la intensidad

 Programa basado en el ejemplo HelloWord de la librería LiquidCrystal
 
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
  lcd.begin(16, 2); //LCD1604
  //lcd.begin(20,4); //para Un LCD2004
  
  // Escribimos el Mensaje en el LCD.
  lcd.print("Hola Mundo");

  /*//Para un LCD2004
  lcd.setCursor(0,2);
  lcd.print("NAYLAMP MECHATRONICS");
  lcd.setCursor(0,3);
  lcd.print("       PERU  ");
  */
}

void loop() {
   // Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
  lcd.setCursor(0, 1);
   // Escribimos el número de segundos trascurridos
  lcd.print(millis()/1000);
  lcd.print(" Segundos");
  delay(100);
}
