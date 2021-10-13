const int buttonPin = 43;
int temp = 0;

void setup() {
  DDRF = 0xFF;
  PORTF = 0;
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    PORTF = 1;
    while (PORTF){
      delay(75);
      PORTF = PORTF << 1;
   }
 }
}
