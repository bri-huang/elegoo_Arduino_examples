// Variables

int ledPin =  13;     // the number of the LED pin
int ledState = LOW;   // ledState used to set the LED

unsigned long previousTime = 0;        // will store last time LED was updated
unsigned long currentTime;             // will store current millis() count

// constants won't change:
unsigned long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  pinMode(ledPin, OUTPUT);    // set the digital pin as output:
}

void loop() {
  currentTime = millis();

  if (currentTime - previousTime >= interval) 
  {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    ledState = !ledState;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
