#include <Arduino.h>

const int analogPin = A1; // Changed to A1

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Read the analog value from pin A1
  int analogValue = analogRead(analogPin);

  // Convert the analog value to voltage (assuming 3.3V reference)
  float voltage = analogValue * (3.3 / 4095.0); // Corrected for 3.3V

  // Display the voltage value
  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print(", Voltage: ");
  Serial.println(voltage, 3); // Prints voltage with 3 decimal places

  delay(1000);  // You can adjust the delay based on your needs
}
