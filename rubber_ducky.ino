#include "Keyboard.h" 

void setup() {
  Keyboard.begin(); 
  delay(1000); 
  Keyboard.write(KEY_LEFT_GUI); 
  delay(1000); 
  Keyboard.print("terminal"); 
  Keyboard.write(KEY_RETURN); 
  delay(2000); 
  Keyboard.print("mkdir Peliculas"); 
  Keyboard.write(KEY_RETURN);


}

void loop() {
  
  }
