#include <LiquidCrystal.h>
#include <Wire.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int c =0;
int d =0;
float e;
float f;


void setup() 
{
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
  lcd.begin(16, 2);
        lcd.print("Digital output");
}

void loop() 
{
  Wire.requestFrom(8, 2);    // request 2 bytes from slave device #8
    
  while (Wire.available()) 
  {
       
      Serial.println("Human Presence detected");
      lcd.setCursor(0,1);
      float e = (c/204.8);
      lcd.print(e);
   
  }
  
  Wire.requestFrom(7, 2);    // request 2 bytes from slave device #8
    
  while (Wire.available()) 
  {
    
    
      lcd.print("Human Presence detected");
    
  }

  delay(500);
}