void setup() {
  // inisialisasi pin 2 - 10 sebagai output
  for(int i=2; i<=10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
// LED nyala dari kiri
  for(int i=2; i<=10; i++) {
    digitalWrite(i, 1);
    delay(200);
    digitalWrite(i, 0);
  }

// LED nyala dari kanan
  for(int i=10; i>=2; i--) {
    digitalWrite(i, 1);
    delay(200);
    digitalWrite(i, 0);
  }
}
