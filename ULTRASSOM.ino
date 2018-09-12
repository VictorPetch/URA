#include "Ultrassom.h"
#include "Servo.h"
int pos = 0;
// Pin do trig e echo 
Ultrassom us(3,2); 
Servo myservo;
void setup() {
  Serial.begin(9600); 
  us.setup(); 
  myservo.attach(4);
}

void loop() {
  //70 = 90graus
  
  for (pos = 10; pos <= 130; pos += 20) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);
    Serial.println(us.dist());// tell servo to go to position in variable 'pos'
    delay(2000);                       // waits 15ms for the servo to reach the position
  }
     
    
    
}
