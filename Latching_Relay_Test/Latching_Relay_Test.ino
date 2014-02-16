/* Testing dsp1a-l2-dc5v Latching relay
 
 Turns the LED light on and off using the latching relay
 
 
 
 created 2014
 by Jimit Shah
 modified 16 Feb,2014
 by Jimit Shah  
 
 This example code is in the public domain.
 */

// constants won't change. Used here to 
// set pin numbers:
const int EnePin =  8;      // the pin to energize the relay
const int RstPin =  9;      // the pin to reset the relay

void setup() {
  // set the digital pin as output:
  pinMode(EnePin, OUTPUT);
  pinMode(RstPin, OUTPUT);  
}

void loop()
{
  digitalWrite(RstPin,LOW);
  digitalWrite(EnePin,HIGH);
  delay(2000);
  digitalWrite(EnePin,LOW);
  digitalWrite(RstPin,HIGH);
  delay(2000);
}

