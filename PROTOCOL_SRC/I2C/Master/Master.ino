#include <Wire.h>
int x =0 ; 
void setup(){
  Serial.begin(9600); 
  Wire.begin ();
}
void loop() {
  Wire.beginTransmission(1); // transmit to device #9
  Wire.write(x);              // sends x 
  Wire.endTransmission();    // stop transmitting
  x++; // Increment x
  if (x > 5) x = 0; // `reset x once it gets 6
  delay(1000);
}
