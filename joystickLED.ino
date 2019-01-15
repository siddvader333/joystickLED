//led

//bottom
const int bottomLED = 5;
//right 
const int rightLED = 6;
//left
const int leftLED = 9;
//top 
const int topLED = 11;

//x
const int x = 5;

//y
const int y = 4;

//key

void setup() {
  // put your setup code here, to run once:
  pinMode(topLED, OUTPUT);
  pinMode(rightLED, OUTPUT);
  pinMode(leftLED, OUTPUT);
  pinMode(bottomLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //turn on top led
  if(analogRead(y) > 1000){
      digitalWrite(topLED, HIGH);
      digitalWrite(rightLED, LOW);
      digitalWrite(leftLED, LOW);
      digitalWrite(bottomLED, LOW);
      delay(200);
      
    }
    
else if(analogRead(y) <100 ){
      digitalWrite(topLED, LOW);
      digitalWrite(rightLED, LOW);
      digitalWrite(leftLED, LOW);
      digitalWrite(bottomLED, HIGH);
      delay(200);
}

  //turn on right led
  else if(analogRead(x) > 1000 ){
      digitalWrite(topLED, LOW);
      digitalWrite(rightLED, LOW);
      digitalWrite(leftLED, HIGH);
      digitalWrite(bottomLED, LOW);
      delay(200);
}



  //turn on left led
  else if(analogRead(x) <100){
      digitalWrite(topLED, LOW);
      digitalWrite(rightLED, HIGH);
      digitalWrite(leftLED, LOW);
      digitalWrite(bottomLED, LOW);
      delay(200);
}




}
