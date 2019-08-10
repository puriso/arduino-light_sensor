// LEDs
const int GREEN = 9;
const int BLUE = 6;
const int RED = 3;

const int ANA_VAL = 0;
const int PWR = 64;

int br = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  br = analogRead(ANA_VAL) / 4;
  Serial.println(br/4);

  if (br < 63){
    analogWrite(GREEN, LOW);
    analogWrite(BLUE, LOW);
    analogWrite(RED, PWR);
  } else if(br > 65 && br < 80){
    analogWrite(GREEN, LOW);
    analogWrite(BLUE, PWR);
    analogWrite(RED, LOW);
  }else{
    analogWrite(GREEN, PWR);
    analogWrite(BLUE, LOW);
    analogWrite(RED, LOW);
  }
  delay(10);                
}
