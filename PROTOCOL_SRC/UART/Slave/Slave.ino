//Slave arduino 
char mystring [15]; // initialize space to store receive 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.readBytes(mystring,9); // read serial data
  Serial.println(mystring); // print data on serial monitor 
  Serial.println("Slave");
  delay (1000);

}
