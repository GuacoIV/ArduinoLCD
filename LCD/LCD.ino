// include LCD library
// send to hkamra1@tigers.lsu.edu
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
// ****numbers for our pins will have to be changed possibly
LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8);
//rs, rw, enable, d4-d7
int topPos = 7;
int bottomPos = 3;

void setup(){
  //function LCD_Init
LCD_Init();
}
void loop(){
 LCD_Clear(); // This function is finished.
 LCD_Display();
 // stop program
 exit(0);
}

void LCD_Init(){
  // set up LCD's number of columns and rows
  lcd.begin(16,2);
  
  //b. Display on.
  lcd.display(); 
  
  //c. Cursor off. 
  lcd.noCursor();
  
  //d. Blink off.
  lcd.noBlink();
  
  //f. No display shift.
 }
 
void LCD_Display(){
  //Print to LCD.
  // *****Still need to center it.
  lcd.setCursor(topPos,0);
  lcd.print("LSU");
  lcd.setCursor(bottomPos, 1);
  lcd.print("Go Tigers!");
  
  // create a delay.
  delay(500);
  
  //Scroll the upper row to the right and the bottom row to the left until
  //the messages disappear at the end of the respective row

  String geaux = "Geaux Tigers!";
  int j = 0;
  for (int i = 0; i < 16; i ++)
  {
    lcd.clear();
    lcd.setCursor(++topPos, 0);
    lcd.print("LSU");
    if (bottomPos - 1 >= 0)
    {
      lcd.setCursor(--bottomPos, 1);
      lcd.print(geaux);
    }
    else
    {
      lcd.setCursor(0, 1);
      lcd.print( geaux.substring(++j));
    }

     delay(150); 
  }
  
  
  
  }
  // Finished.
void LCD_Clear(){
  lcd.clear();
  }



