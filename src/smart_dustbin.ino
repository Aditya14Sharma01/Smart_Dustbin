#include <Servo.h>

// Pin definitions
const int trigPin = 9;
const int echoPin = 10;
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(6); // Servo signal pin
  myServo.write(0);  // Start at 0°
  Serial.begin(9600);
  
  // Initialize serial communication
  Serial.println("=== Smart Dustbin System Started ===");
  Serial.println("System Initializing...");
  Serial.println("Ultrasonic Sensor: HC-SR04");
  Serial.println("Servo Motor: SG90");
  Serial.println("Distance Threshold: 10cm");
  Serial.println("Servo Position: Closed (0°)");
  Serial.println("Ready for operation!");
  Serial.println("=====================================");
}

void loop() {
  long duration;
  int distance;

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;  // Convert to cm

  // Enhanced serial output
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm | Duration: ");
  Serial.print(duration);
  Serial.print(" μs | ");

  // Control servo with detailed feedback
  if (distance > 0 && distance < 10) {
    Serial.println("Object detected! Opening lid...");
    myServo.write(180);  // Turn to 180°
    Serial.println("Lid opened (180°) - Waiting 2.5 seconds");
    delay(2500);
    Serial.println("Closing lid...");
    myServo.write(0);    // Return to 0°
    Serial.println("Lid closed (0°)");
  } else {
    Serial.println("No object detected - Lid remains closed");
    myServo.write(0);    // Stay at 0°
  }

  delay(200); // Small delay
}
