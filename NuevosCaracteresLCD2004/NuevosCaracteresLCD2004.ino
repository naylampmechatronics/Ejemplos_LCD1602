/****************************************************************************************
 Nuevos Caracteres LCD2004
 
  En este ejemplo agregaremos caracteres personalizados en nuestro LCD200
  Para un LCD1602 se hace de la misma forma, teniendo en cuenta que solo tienen 2 filas

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


//---Nuevos caracteres------------------
byte N[8] = {
B11111,
B10001,
B10001,
B10001,
B10001,
B10001,
B10001,
B00000,
};
byte A[8] = {
B11111,
B10001,
B10001,
B10001,
B10001,
B11111,
B10001,
B00000,
};
byte Y[8] = {
B10001,
B10001,
B10001,
B10001,
B11111,
B00100,
B00100,
B00000,
};
byte L[8] = {
B10000,
B10000,
B10000,
B10000,
B10000,
B10000,
B11111,
B00000,
};
byte M[8] = {
B11111,
B10101,
B10101,
B10101,
B10101,
B10101,
B10101,
B00000,
};
byte P[8] = {
B11111,
B10001,
B10001,
B10001,
B11111,
B10000,
B10000,
B00000,
};
byte cara[8] = {
B00000,
B10001,
B00000,
B00000,
B10001,
B01110,
B00000,
};
byte cuerpo[8] = {
B01110,
B01110,
B00100,
B11111,
B00100,
B01010,
B10001,
B00000,
};
//---------------------------

void setup () {
  lcd.createChar (0,N);
  lcd.createChar (1,A);
  lcd.createChar (2,Y);
  lcd.createChar (3,L);
  lcd.createChar (4,M);
  lcd.createChar (5,P);
  lcd.createChar (6,cara);
  lcd.createChar (7,cuerpo);
  // Inicializar el LCD con el número de  columnas y filas del LCD
  lcd.begin (20, 4); 
  //lcd.begin (16, 2); 
  
  // Escribimos el texto en el LCD
  lcd.print("Nuevos Caracteres");
  lcd.setCursor(0, 1);
  lcd.print("------");
  lcd.write (byte (0));
  lcd.write (byte (1));
  lcd.write (byte (2));
  lcd.write (byte (3));
  lcd.write (byte (1));
  lcd.write (byte (4));
  lcd.write (byte (5));
  lcd.print("-------");
  
  lcd.setCursor(0, 2);
  for(int i=0;i<10;i++)
  {
    lcd.write (byte (6));
    lcd.write (' ');
  }
  lcd.setCursor(0, 3);
  for(int i=0;i<20;i++)
    lcd.write (byte (7));
  
}

void loop () {}
