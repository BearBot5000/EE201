
int DELAY = 1500;

byte nums[10] = {64, 121, 36, 48, 25, 18, 2, 120, 0, 16};
int start_pin = 2;
int num_disp = 9;

void setup() {
  Serial.begin(9600);
  for(int i = start_pin; i < 7 + start_pin; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  lightSevenSeg(nums[ num_disp ]);
   num_disp --;
  if( num_disp  < 0) {
     num_disp  = 9;
  }
  delay(DELAY);
}

void lightSevenSeg(byte values) {
    byte values_temp = values;
    for(int i = 0; i < 7; i++) {
        if(values_temp % 2 == 0) {
            digitalWrite(start_pin + i, LOW);
        } else {
            digitalWrite(start_pin + i, HIGH);
        }
        values_temp = values_temp >> 1;
    }
}
