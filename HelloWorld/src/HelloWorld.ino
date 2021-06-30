/*
 * Project HelloWorld
 * Description: Flashing LED light using argon and breadboard
 * Author: Vikash Kaushik
 * Date: 6/29/21
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// initializes the led at D5 once as a output in the start
void setup() {
  // Put initialization like pinMode and begin functions here.
    pinMode(D5,OUTPUT);
}

// flashes the led by setting it on at high, delaying it for one sec and then turns it off and then delays it for another second
void loop() {
  
  digitalWrite(D5,HIGH); // turns it on 
  delay(1000); // delay of 1 second
  digitalWrite(D5,LOW); // turns the led off
  delay(1000); // delay of 1 second

}


