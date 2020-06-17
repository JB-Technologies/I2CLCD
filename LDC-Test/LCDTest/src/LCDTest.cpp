/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/IoT_Board/V4/Software/LDC-Test/LCDTest/src/LCDTest.ino"
// This #include statement was automatically added by the Particle IDE.
#include "../lib/I2C_LCD-master/I2C_LCD.h"

void setup();
void loop();
#line 4 "c:/IoT_Board/V4/Software/LDC-Test/LCDTest/src/LCDTest.ino"
I2C_LCD LCD;
uint8_t I2C_LCD_ADDRESS = 0x51; //Device address configuration, the default value is 0x51.

void setup()
{
    Wire.begin();         //I2C controller initialization.
    
}

void loop()
{
    LCD.CleanAll(WHITE);    //Clean the screen with black or white.
    delay(1000);            //Delay for 1s.


    //8*16 font size��auto new line��black character on white back ground.
    LCD.FontModeConf(Font_6x8, FM_ANL_AAA, BLACK_BAC); 
    LCD.DispStringAt("Hello World!", 0, 10);    //Display "Hello World!" on coordinate of (0, 10).

    while(1){
      Particle.process();
    } //Wait for ever. 
}