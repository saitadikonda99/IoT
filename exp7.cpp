 // Define the analog input pin where the temperature sensor is connected
int tempSensorPin = A0;

void setup() {
  Serial.begin(9600); // Initialize the serial communication
}

void loop() {
  // Read the analog input value from the temperature sensor
  int sensorValue = analogRead(tempSensorPin);

  // Convert the analog value to temperature in degrees Celsius
  float temperatureC = (sensorValue / 1024.0) * 5.0; // Convert the analog value to 
voltage
  temperatureC = (temperatureC - 0.5) * 100.0; // Convert the voltage to temperature in 
degrees Celsius

  // Convert temperature from Celsius to Fahrenheit
  float temperatureF = (temperatureC * 1.8) + 32.0;

  // Print the temperature value to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureF);
  Serial.println(" degrees Fahrenheit");

  delay(1000); // Wait for 1 second before reading the temperature again
}

