
#define buzz 9
#define led_R 13
#define pinSensor 5
 
void setup() {
  pinMode(buzz, OUTPUT);  //definir pin como salida
  pinMode(pinSensor, INPUT);
  pinMode(led_R, OUTPUT);
}
 
void loop(){
  int value = digitalRead(pinSensor);
    if (value == LOW) {
    digitalWrite(led_R, LOW);
    digitalWrite(buzz, LOW);
    
    
  } else {
    digitalWrite(led_R, HIGH);
    digitalWrite(buzz, HIGH);
  }
 
  delay(1000);

  
}

