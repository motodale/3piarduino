
//declareing pins
int redPin = 1;
int greenPin = 7;


//telling the pins what they are about to do
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
//main loop that blinks the red LED for 1 second and then the green LED for .5 second and repeats
void loop() {
  digitalWrite(redPin, HIGH);
  delay(500);
  digitalWrite(redPin, LOW);
  delay(500);
  digitalWrite(greenPin, HIGH);
  delay(500);
  digitalWrite(greenPin, LOW);

}
