/*The Music Player + Lyrics Player
 Made by Peien Liu, Dec 8,2019
 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * LED L1 pin to digital pin 10
 * LED L2 pin to digital pin 9
 * LED L3 pin to digital pin 7
 * LED L4 pin to digital pin 6
 * Base to 1kΩ then to digital pin 9
 * Emitter to ground
 * Collector to buzzer parallel with 1kΩ then to 5V
 */
//set up the lcd
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//set up the music
int buzzerPin = 8;    // Using digital pin 8
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_D6  1175
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_G6  1568
#define NOTE_A6  1760
#define NOTE_B6  1976
#define NOTE_C7  2093

//set up the light
int LED0  = 10;
int LED1  = 9;
int LED2  = 7;
int LED3  = 6;

void setup() {
  //start asking the user input
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.setCursor(0,0);
  lcd.print("Enter 1 or 2");
  lcd.setCursor(0,1);
  lcd.print("into the monitor");

  //set up the light
  pinMode(LED0, OUTPUT);  
  pinMode(LED1, OUTPUT);  
  pinMode(LED2, OUTPUT);  
  pinMode(LED3, OUTPUT);  
}

void loop() {
  //get user's input
  if (Serial.available()){
    delay(300);
    
    String n = Serial.readString();
    //choose music 1 or music 2
    if(n.toInt()== 1){
      lcd.clear();
      String lyrics1[8] = {"","Twinkle, twinkle, little star","How I wonder what you are","Up above the world so high","Like a diamond in the sky","Twinkle, twinkle, little star","How I wonder what you are"," "};
      digitalWrite(LED0, HIGH);
      delay(500);
      digitalWrite(LED0, LOW);
      delay(500);
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500); 
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
      delay(500); 
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      delay(500); 

      lcd.setCursor(0,0);
      lcd.print("");
      lcd.setCursor(0,1);
      lcd.print("Twinkle, twinkle, little star");
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print(" twinkle, little star");
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print(" little star");
      tone(buzzerPin, NOTE_A6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);       
      tone(buzzerPin, NOTE_A6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print(" star");  
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      delay(500); 
      
      lcd.setCursor(0,0);
      lcd.print(lyrics1[1]);
      lcd.setCursor(0,1);
      lcd.print(lyrics1[2]);
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[1]);
      lcd.setCursor(0,1);
      lcd.print(" I wonder what you are");
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[1]);
      lcd.setCursor(0,1);
      lcd.print(" wonder what you are");
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[1]);
      lcd.setCursor(0,1);
      lcd.print(" what you are");
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[1]);
      lcd.setCursor(0,1);
      lcd.print(" you are");
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[1]);
      lcd.setCursor(0,1);
      lcd.print(" are");
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED0, HIGH);
      delay(500);
      digitalWrite(LED0, LOW);
      delay(500);
      
      lcd.setCursor(0,0);
      lcd.print(lyrics1[2]);
      lcd.setCursor(0,1);
      lcd.print(lyrics1[3]);
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[2]);
      lcd.setCursor(0,1);
      lcd.print(" above the world so high");
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);;
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[2]);
      lcd.setCursor(0,1);
      lcd.print(" the world so high");
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[2]);
      lcd.setCursor(0,1);
      lcd.print(" world so high");
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[2]);
      lcd.setCursor(0,1);
      lcd.print(" so high");
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[2]);
      lcd.setCursor(0,1);
      lcd.print(" high");
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500);
      
      lcd.setCursor(0,0);
      lcd.print(lyrics1[3]);
      lcd.setCursor(0,1);
      lcd.print(lyrics1[4]);
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[3]);
      lcd.setCursor(0,1);
      lcd.print(" a diamond in the sky");
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[3]);
      lcd.setCursor(0,1);
      lcd.print(" diamond in the sky");
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[3]);
      lcd.setCursor(0,1);
      lcd.print(" in the sky");
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[3]);
      lcd.setCursor(0,1);
      lcd.print(" the sky");
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[3]);
      lcd.setCursor(0,1);
      lcd.print(" sky");
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500);
      
      lcd.setCursor(0,0);
      lcd.print(lyrics1[4]);
      lcd.setCursor(0,1);
      lcd.print(lyrics1[5]);
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[4]);
      lcd.setCursor(0,1);
      lcd.print(" twinkle, little star");
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[4]);
      lcd.setCursor(0,1);
      lcd.print(" little star");
      tone(buzzerPin, NOTE_A6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      tone(buzzerPin, NOTE_A6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[4]);
      lcd.setCursor(0,1);
      lcd.print(" star");
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      delay(500);
      
      lcd.setCursor(0,0);
      lcd.print(lyrics1[5]);
      lcd.setCursor(0,1);
      lcd.print(lyrics1[6]);
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[5]);
      lcd.setCursor(0,1);
      lcd.print(" I wonder what you are");
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[5]);
      lcd.setCursor(0,1);
      lcd.print(" wonder what you are");
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[5]);
      lcd.setCursor(0,1);
      lcd.print(" what you are");
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[5]);
      lcd.setCursor(0,1);
      lcd.print(" you are");
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[5]);
      lcd.setCursor(0,1);
      lcd.print(" are");
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED0, HIGH);
      delay(500);
      digitalWrite(LED0, LOW);
      delay(500);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(lyrics1[6]);
      lcd.setCursor(0,1);
      lcd.print(lyrics1[7]);
      delay(2000);
      lcd.clear();

      
    }else if(n.toInt()== 2){
      lcd.clear();
      digitalWrite(LED0, HIGH);
      delay(500);
      digitalWrite(LED0, LOW);
      delay(500);
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500); 
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
      delay(500); 
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      delay(500);
      lcd.setCursor(0,0);
      lcd.print("");
      lcd.setCursor(0,1);
      lcd.print("Happy birthday to you");
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("");
      lcd.setCursor(0,1);
      lcd.print(" birthday to you");
      tone(buzzerPin, NOTE_A5, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("");
      lcd.setCursor(0,1);
      lcd.print(" to you");
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("");
      lcd.setCursor(0,1);
      lcd.print(" you");
      tone(buzzerPin, NOTE_B5, 500);
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
      delay(500);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print("Happy birthday to you");  
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print(" birthday to you");   
      tone(buzzerPin, NOTE_A5, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print(" to you"); 
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print(" you");    
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      delay(500);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print("Happy birthday to you~");   
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_G5, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print(" birthday to you~ "); 
      tone(buzzerPin, NOTE_G6, 500);
      digitalWrite(LED0, HIGH);
      delay(250);
      digitalWrite(LED0, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print(" to you~ "); 
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you");
      lcd.setCursor(0,1);
      lcd.print(" you~ "); 
      tone(buzzerPin, NOTE_B5, 500);
      digitalWrite(LED2, HIGH);
      delay(125);
      digitalWrite(LED2, LOW);
      delay(125);   
      tone(buzzerPin, NOTE_A5, 500);
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you~ ");
      lcd.setCursor(0,1);
      lcd.print("Happy birthday to you-- ");  
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);
      tone(buzzerPin, NOTE_F6, 500);
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you~ ");
      lcd.setCursor(0,1);
      lcd.print(" birthday to you-- ");  
      tone(buzzerPin, NOTE_E6, 500);
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);      
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);     
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you~ ");
      lcd.setCursor(0,1);
      lcd.print(" to you-- ");   
      tone(buzzerPin, NOTE_D6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you~ ");
      lcd.setCursor(0,1);
      lcd.print(" you-- ");  
      tone(buzzerPin, NOTE_C6, 500);
      digitalWrite(LED3, HIGH);
      delay(250);
      digitalWrite(LED3, LOW);
      delay(250);      
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Happy birthday to you-- ");
      lcd.setCursor(0,1);
      lcd.print("");
      delay(2000);
      lcd.clear();
      
    }else {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("unknown input");
      lcd.setCursor(0,1);
      lcd.print("Please Enter 1 or 2");
    }
  }
}
