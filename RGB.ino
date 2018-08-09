const int RED = 11;
const int GREEN =10;
const int BLUE =9;


void setup() {
  pinMode (RED, OUTPUT);
  pinMode (GREEN, OUTPUT);
  pinMode(BLUE,OUTPUT);
}

void loop() {


  // clear LED with white
  analogWrite(RED, 1);
  analogWrite(GREEN, 1);
  analogWrite(BLUE, 1);
  delay (100);
  
  analogWrite(RED, 255);
  analogWrite(GREEN,0);
  analogWrite(BLUE,255);
  delay (1000);

  // clear with white

  // clear LED with white
  analogWrite(RED, 1);
  analogWrite(GREEN, 100);
  analogWrite(BLUE, 0);
  delay (10);

  // RED
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
  delay (1000);


    // rewrite with white
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay (10);
  
  // blue
  analogWrite(RED,0 );
  analogWrite(GREEN, 3);
  analogWrite(BLUE, 255);
  delay (1000);

  // rewrite with white
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay (10);


}
