# Ejemplos_LCD1602
Ejemplos para pantallas LCD1602, LCD2004 y similares

![Display Alfanumérico LCD 1602](https://naylampmechatronics.com/403-large_default/display-lcd1602-azul-backlight.jpg)

Información detallada de los ejemplos en: [Tutorial LCD1602 y LCD2004](https://naylampmechatronics.com/blog/34_Tutorial-LCD-conectando-tu-arduino-a-un-LCD1.html)

## Contenido
* **HolaMundo:** Programa para testear el funcionamiento de un LCD1602 o LCD2004.
* **Desplazamiento:** Permite desplazar el texto del LCD a la derecha o izquierda..
* **DatosConLCD1602:** Para mostrar variables en un LCD1602, que pueden representar valores de sensores u otros datos.
* **DatosConLCD2004:** Para mostrar variables en un LCD2004, que pueden representar valores de sensores u otros datos.
* **NuevosCaracteresLCD2004:** En este ejemplo agregaremos caracteres personalizados en nuestro LCD200. Para un LCD1602 se hace de la misma forma, teniendo en cuenta que solo tienen 2 filas  
 
## Requerimientos
 **Software**
  * IDE Arduino
  * Librería  [LiquidCrystal](https://www.arduino.cc/en/Reference/LiquidCrystal) (Ya viene instalada en Arduino)
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * [LCD1602](https://naylampmechatronics.com/displays/110-display-lcd1602-azul-backlight.html) o [LCD2004](https://naylampmechatronics.com/displays/158-display-lcd-2004-azul-backlight.html)
  * Potenciómetro  10K
  
## Conexiones
  
  |LCD1602/2004|Arduino|
  |---------|----------|
  |VSS (Pin 1) | GND
  |VDD (Pin 2) | 5V
  |VEE (Pin 3) | Potenciómetro
  |RS (Pin 4)  | D8
  |RW (Pin 5)  | GND
  |EN (Pin 6)  | D9
  |D0 (Pin 7)  | NC
  |D1 (Pin 8)  | NC
  |D2 (Pin 9)  | NC
  |D3 (Pin 10) | NC
  |D4 (Pin 11) | D4
  |D5 (Pin 12) | D5
  |D6 (Pin 13) | D6
  |D7 (Pin 14) | D7
  |Led+(Pin 15)| 5V
  |Led-(Pin 16)| GND
    
Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines

El potenciómetro es para controlar la intensidad

## Licencia
Los ejemplos son Open Source, desarrollados por el equipo de Naylamp Mechatronics bajo [licencia MIT](LICENSE)
 
## Links 
 * [Tutorial LCD1602 y LCD2004](https://naylampmechatronics.com/blog/11_Tutorial-de-Uso-del-M%C3%B3dulo-L298N.html)
 * [Display Alfanumérico LCD 1602](https://naylampmechatronics.com/displays/110-display-lcd1602-azul-backlight.html)
 * [Display Alfanumérico LCD 2004](https://naylampmechatronics.com/displays/158-display-lcd-2004-azul-backlight.html)
 * [LiquidCrystal Library](https://www.arduino.cc/en/Reference/LiquidCrystal)
