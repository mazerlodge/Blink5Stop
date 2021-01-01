/*
  Blink
  Turns on an LED on for one second, then off for one second.
  
  This example has been modified to turn off after 5 blinks.
 
 */

// Variable used to shut off blinking cycle.
boolean bDone;

// Pin 13 has an LED connected on most Arduino boards.
// Pin 0 on Feather board.
int LED_PIN = 13; 

void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);     

  // Start with blinking enabled.
  bDone = false;

}

void loop() {

  if (!bDone) {
    for (int x=0; x<5; x++) {
      digitalWrite(LED_PIN, HIGH);   // set the LED on
      delay(500);              // wait for a second
      digitalWrite(LED_PIN, LOW);    // set the LED off
      delay(500);              // wait for a second
    } // for x

    // stop blinking
    bDone = true;

      
  } // if !bDone
    
}
