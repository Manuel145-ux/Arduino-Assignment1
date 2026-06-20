int ledPin = 13;
int startValue = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  
  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue; // Start the countdown at 5

  // This loop handles the countdown numbers (5 down to 1)
  while (count > 0) {
    Serial.print("Counter is: ");
    Serial.println(count);

    int flash = 0; // Reset the flash counter to 0 for each new number

    // This loop blinks the LED the exact number of times as 'count'
    while (flash < count) {
      digitalWrite(ledPin, HIGH);
      delay(200);
      digitalWrite(ledPin, LOW);
      delay(200);
      
      flash = flash + 1; // Add 1 to the flash counter
    }

    delay(1000);         // Wait 1 second before moving to the next number
    count = count - 1;   // To go down to the next countdown number
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Empty so the countdown only runs one time
}
