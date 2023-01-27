#define Voltmeter 10 // digital to sence if there is voltage or not
#define Switch 9 //digital pin used to simulate a switch
void setup() {
  pinMode(Voltmeter, INPUT); // set the pin as an input
  pinMode(Switch, OUTPUT);
  Serial.begin(9600); // start the serial communication
}

void loop(){
  loop1();
  loop2();
  delay(1000);
}


void loop1() {
  int switchState = digitalRead(Voltmeter); // read the state of the switch
  if (switchState == HIGH) {
    digitalWrite(Switch, LOW);
  } else {
    digitalWrite(Switch, HIGH);;
  }
 
}

void loop2() {
  int switchState = digitalRead(Voltmeter); // read the state of the switch
  if (switchState == HIGH) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023.");
  }
}
