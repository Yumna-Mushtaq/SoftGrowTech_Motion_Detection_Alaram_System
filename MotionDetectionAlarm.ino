// Task 2: Project 3 - Motion Detection Alarm

int pirPin = 2;    
int alarmPin = 13; 
int motionState = 0; 
int lastMotionState = LOW; 

void setup() {
  pinMode(pirPin, INPUT);   
  pinMode(alarmPin, OUTPUT); 
  Serial.begin(9600);        
  Serial.println("System Initializing...");
  delay(2000); 
  Serial.println("Motion System Active!");
}

void loop() {
  motionState = digitalRead(pirPin); 

  if (motionState == HIGH) { 
    digitalWrite(alarmPin, HIGH); 
    
    if (lastMotionState == LOW) {
      Serial.println("ALERT! Motion Detected!");
      lastMotionState = HIGH;
    }
  } 
  else {
    digitalWrite(alarmPin, LOW);  
    
    if (lastMotionState == HIGH) {
      Serial.println("Scanning... No Motion.");
      lastMotionState = LOW;
    }
  }
  
  delay(50); // delay for simulation stability
}