 int ledPin = 13; // Define LED pin
int buttonPin = 2; // Define button pin
int buttonState = 0; // Define button state

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  pinMode(buttonPin, INPUT); // Set button pin as input
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the button
  if (buttonState == HIGH) { // If button is pressed
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else { // If button is not pressed
    digitalWrite(ledPin, LOW); // Turn off the LED
  }
}

