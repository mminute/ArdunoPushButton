// Blinking LED

const int LED = 13; // LED connected to digital pin 13
const int BUTTON = 7;  // Input pin for the momentary switch

int val = 0; // val is used to store the state of the input pin

void setup() {
  pinMode(LED, OUTPUT);  // Set the digital pin as output
  pinMode(BUTTON, INPUT);  // Set the digital pin 7 as an input
}

void loop() {
  val = digitalRead(BUTTON);  // Read the value of BUTTON and assign it to val
  if (val == HIGH) {
    digitalWrite(LED, HIGH);  // Turn the LED on
  } else {
    digitalWrite(LED, LOW);
  }
}
