/*
  Blink
  Turns on an LED on for one second, then off for one second.
  
  This example has been modified to turn off after 5 blinks.
 
 */

// Variable used to shut off blinking cycle.
boolean bDone;

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);     

  // Start with blinking enabled.
  bDone = false;
  
}

void loop() {

  if (!bDone)
    for (int x=0; x<5; x++) {
      digitalWrite(13, HIGH);   // set the LED on
      delay(500);              // wait for a second
      digitalWrite(13, LOW);    // set the LED off
      delay(500);              // wait for a second

      // stop blinking
      bDone = true;
      
    } // for x
  
}
