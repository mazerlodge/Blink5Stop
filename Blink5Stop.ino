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
  // Pin 0 on Feather board.
  pinMode(0, OUTPUT);     

  // Start with blinking enabled.
  bDone = false;

  // Enable debug printing
  Serial.begin(115200);

  Serial.println("Setup complete.");
}

void loop() {

  if (!bDone) {
    for (int x=0; x<7; x++) {
      digitalWrite(0, LOW);   // set the LED on
      delay(500);              // wait for a second
      digitalWrite(0, HIGH);    // set the LED off
      delay(500);              // wait for a second

    } // for x

    // stop blinking
    bDone = true;
      
  } // if !bDone
    
}
