
#include <UTFT.h>


extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];



UTFT myGLCD(ILI9486,38,39,40,41);

void setup()
{
  myGLCD.InitLCD();

  myGLCD.clrScr();
  void drawHomeScreen();
    screenpoes();
}






void screenpoes()
{
  myGLCD.setColor(255, 255,255 );
  myGLCD.setBackColor(VGA_BLACK);

  myGLCD.setFont(SmallFont);
  myGLCD.print(" .................................................................", CENTER, 0);
  delay(500);
  myGLCD.print(".............................................................", CENTER, 16);
  delay(500);
  myGLCD.print("...........................................................", CENTER, 32);
  delay(500);
   myGLCD.setFont(BigFont);
  myGLCD.print("         WELCOME", CENTER, 48);
  delay(500);
  myGLCD.print("          TO", CENTER, 64);
  delay(500);
  myGLCD.print("         GEEKONICS", CENTER, 80);
   myGLCD.setFont(SmallFont);
  delay(500);
  myGLCD.print(" ..............................................................", CENTER, 110);
  delay(500);
 
  myGLCD.print(" ...................................................................", CENTER, 120);
  delay(500);
   myGLCD.setColor(255, 255,0 );
  myGLCD.setBackColor(VGA_BLACK);
  myGLCD.setFont(BigFont);
  myGLCD.print("         www.geekonics.tk", CENTER, 144);
    delay(500);
    myGLCD.setColor(255, 255,255 );
  myGLCD.setBackColor(VGA_BLACK);
   myGLCD.setFont(SmallFont);
  myGLCD.print("`............................ ", CENTER,160);
  delay(500);
  myGLCD.setFont(SmallFont);
  myGLCD.print("........... .      LIKE           COMMENT           SHARE", CENTER, 190);

  while(9) {};
}
