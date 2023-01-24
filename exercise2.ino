#define LED1 13 // digital pin for the first LED
#define LED2 12 // digital pin for the second LED

void setup() {
  pinMode(LED1, OUTPUT); // set the first LED pin as an output
  pinMode(LED2, OUTPUT); // set the second LED pin as an output
}

void loop() {
  digitalWrite(LED1, HIGH); // turn on the first LED
  digitalWrite(LED2, LOW); // turn off the second LED
  //delay(100); // delay for 1/10 a second
  delay(500); // delay for half a second
  //delay(1000); // delay for a second
  
  digitalWrite(LED1, LOW); // turn off the first LED
  digitalWrite(LED2, HIGH); // turn on the second LED
  //delay(100); // delay for 1/10 a second
  delay(500); // delay for half a second
  //delay(1000); // delay for a second
}
