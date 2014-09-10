//Fourth commit
//Alyssa

// include LCD library
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
// ****numbers for our pins will have to be changed possibly
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  //function LCD_Init
LCD_Init();
}
void loop(){
 LCD_Clear(); // This function is finished.
 LCD_Display();
 // stop program
}



void LCD_Init(){
  // set up LCD's number of columns and rows
  // This was taken from the example. not sure if we need it.
  lcd.begin(16,2);
  
  //a. Whatever bus mode you selected in your design. 
  // ???
  
  //b. Display on.
  lcd.display(); 
  
  //c. Cursor off. 
  lcd.noCursor();
  
  //d. Blink off.
  lcd.noBlink();
  
  // e. Increment cursor. 
  lcd.setCursor(2,1);
  //f. No display shift.
  // do nothing? Won't know until we hook it up to see LCD's behavior.
  
 }
 
void LCD_Display(){
   //Print to LCD.
   // *****Still need to center it.
  lcd.print("      LSU" + /n + "  Go Tigers!");
  
  // create a delay.
  
  //Scroll the upper row to the right and the bottom row to the left until
  //the messages disappear at the end of the respective row
  // *****number of scrolls will need to be adjusted
  // ***** also, not sure how to scroll a specific row and not the entire display...
  // perhaps we will have to set the cursor?
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  lcd.scrollDisplayLeft();
  
  
  
  
  }
  // Finished.
void LCD_Clear(){
  lcd.clear();
  }



