/*
    Code by : Projects_learner
    Project name : Heart Semsor using Ardino UNO
    Modified Date : 02-06-2024
    Website : https:-/-/projectslearner.com/learn/arduino-uno-2-color-led-module
*/

// Define constants and variables
const int UpperThreshold = 512;   // Upper threshold value for detecting a beat
const int LowerThreshold = 100;   // Lower threshold value for ending a beat
unsigned long ThisTime;           // Current time in milliseconds
unsigned long LastTime;           // Last detected beat time in milliseconds
int BPM;                          // Beats per minute
bool BeatComplete = false;        // Flag to indicate if a beat is complete
bool BPMTiming = false;           // Flag to indicate if BPM timing is in progress

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  ThisTime = millis();           // Get the current time
  int value = analogRead(0);     // Read analog value from pin A0
  int b = 60 - (value / 16);     // Calculate a value for b (not used in the code)

  // Check if the analog value exceeds the upper threshold
  if (value > UpperThreshold) {
    // If a beat is complete, calculate BPM
    if (BeatComplete) {
      BPM = ThisTime - LastTime;        // Calculate time difference between beats
      BPM = int(60 / (float(BPM) / 1000)); // Convert time difference to BPM
      BPMTiming = false;                // Reset BPM timing flag
      BeatComplete = false;             // Reset beat complete flag
      tone(8, 1000, 250);               // Play a tone for 250ms on pin 8
    }
    // Start BPM timing if not already started
    if (BPMTiming == false) {
      LastTime = millis();              // Record the current time
      BPMTiming = true;                 // Set BPM timing flag
    }
  }

  // Check if the analog value is below the lower threshold and BPM timing is in progress
  if ((value < LowerThreshold) && (BPMTiming)) {
    BeatComplete = true;                // Set beat complete flag
  }

  // Print BPM value to the Serial Monitor
  Serial.println(BPM);

  delay(100); // Delay to avoid flooding the Serial Monitor with data
}
