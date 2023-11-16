 //Receiver 
char serialinput  = ' '; //
byte LED = 2;
 
void setup()
{
   pinMode(LED, OUTPUT);
   Serial.begin(9600);
}
void loop()
{
   if(Serial.available()) // if transmitter is available 
   {
      char serialinput = Serial.read();
      if (serialinput =='0') { digitalWrite(LED, LOW); }
      if (serialinput =='1') { digitalWrite(LED, HIGH); }
      Serial.println(serialinput);
   }
}
