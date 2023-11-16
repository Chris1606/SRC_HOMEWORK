// Master arduino
char mystring [9] = "SnappyS05"; // String data to be sent
void setup(){
  Serial.begin (9600);
  
}

void loop(){
  Serial.write(mystring,15); //Write the serial data
  delay (1000); // write message to slave each 1 second
  
}
