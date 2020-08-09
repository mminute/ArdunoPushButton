// Blinking LED

const int LED = 13; // LED connected to digital pin 13
const int BUTTON = 7;  // Input pin for the momentary switch

int val = 0; // val is used to store the state of the input pin
int old_val = 0;  // the previous value of `val`
int state = 0;  // 0 = LED off, 1 = LED on

void setup() {
  pinMode(LED, OUTPUT);  // Set the digital pin as output
  pinMode(BUTTON, INPUT);  // Set the digital pin 7 as an input
}

void loop() {
  val = digitalRead(BUTTON);  // Read the value of BUTTON and assign it to val

  if ((val == HIGH) && (old_val == LOW)) {
    state = 1 - state;
    delay(10);
  }

  old_val = val;
  
  if (state == HIGH) {
    digitalWrite(LED, HIGH);  // Turn the LED on
  } else {
    digitalWrite(LED, LOW);
  }
}
