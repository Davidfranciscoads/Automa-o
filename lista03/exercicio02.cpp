const int ledPino = 9; 

void setup() {
  pinMode(ledPino, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  for (int ledPin = 0; ledPin <= 255; ledPin++) {
    analogWrite(ledPino, ledPin);
    delay(25);
        Serial.println(ledPin);
  }

  for (int ledPi = 255; ledPi >= 0; ledPi--) {
    analogWrite(ledPino,ledPi );
    delay(25);
    Serial.println(ledPi);

  }
}
