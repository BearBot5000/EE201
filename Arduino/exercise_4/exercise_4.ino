# include <SegmentDisplay.h>;

void setup() {
  SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9);
  //segmentDisplay.testDisplay();
  segmentDisplay.displayHex(9, false);
  delay (1500);
  segmentDisplay.displayHex(8, false);
  delay (1500);
  segmentDisplay.displayHex(7, false);
  delay (1500);
  segmentDisplay.displayHex(6, false);
  delay (1500);
  segmentDisplay.displayHex(5, false);
  delay (1500);
  segmentDisplay.displayHex(4, false);
  delay (1500);
  segmentDisplay.displayHex(3, false);
  delay (1500);
  segmentDisplay.displayHex(2, false);
  delay (1500);
  segmentDisplay.displayHex(1, false);
  delay (1500);
  segmentDisplay.displayHex(0, false);
  delay (1500);
}

void loop() {
  
}
