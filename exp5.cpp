// Define the input pin where the PIR sensor is connected
int pirPin = 2;

void setup() {
  pinMode(pirPin, INPUT);  // Set the PIR pin as an input
  Serial.begin(9600);      // Initialize the serial communication
}

void loop() {
  int pirValue = digitalRead(pirPin);  // Read the PIR sensor value

  if (pirValue == HIGH) {  // If motion is detected
    Serial.println("Motion detected!");
    delay(1000);           // Wait for 1 second before checking again
  }
}

