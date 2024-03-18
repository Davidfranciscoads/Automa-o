
int botao = 6;
int led = 4;

void setup () {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop () {
	bool estadoBotao = false;
    estadoBotao = digitalRead(botao);
  
  if (estadoBotao == true) {
    digitalWrite(led, 1);
    return;
  }
  delay(2000);
  digitalWrite(led, 0);

}