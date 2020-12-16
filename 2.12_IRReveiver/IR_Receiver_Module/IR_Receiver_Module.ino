//IR Remote with Program State Variable example 
//2020.7.31
#include <IRremote.h>
#define RECEIVER 11

#define KEY_POWER (0xFFA25D)
IRrecv irrecv(RECEIVER);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'
int LEDstate = -1;           // ledstate variable -1 => off and 1 => on.

void setup() {
  Serial.begin(9600);
  Serial.println("Program State Variable");
  irrecv.enableIRIn();
  pinMode(13, OUTPUT);
}

void loop()
{
  // check receiver for input
  if (irrecv.decode(&results)) //did you receive an IR signal?
  {
    if (results.value == KEY_POWER)
    {
      LEDstate = LEDstate * -1; //multiplying by -1 is an easy way to toggle a state.
    }
  }
  
  // do something based on programState
  if (LEDstate == -1){
    digitalWrite(13, LOW);
  }
  else if (LEDstate == 1){
    digitalWrite(13, HIGH);
  }
}
