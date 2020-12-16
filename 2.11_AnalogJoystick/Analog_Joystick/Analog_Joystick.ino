//www.elegoo.com
//2016.12.09
//modified 2020.12.15 - b.huang

// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin A0 connected to X output
const int Y_pin = A1; // analog pin A1 connected to Y output

int swState;
int xValue;
int yValue;

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  swState = digitialRead(SW_pin);
  xValue = analogRead(xValue);
  yValue = analogRead(yValue);
  
  Serial.print("Switch:  ");
  Serial.print(swState);
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(xValue);
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(yValue);
  Serial.print("\n\n");
  delay(1000);
}
