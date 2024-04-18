// exercicio 01
// quando se usa o const int voce economiza memoria do progra e
// faz com que nao de pra fazer alteração no valor da int declarada 
const int ledPin = 13;

void setup() {
  
  // comando para trabalhar usando o monitor serial
  Serial.begin(9600);
  
  //indicando que o ledpin seria uma saida 
  pinMode(ledPin, OUTPUT);
}
// em void loop seria onde as ações se repetem 
void loop() {
  
  // comando para printar menssagem no monitor serial
  Serial.println();
  
  //o numero 1 ou a palavra true ou high indica que o led esta ligado 
  digitalWrite(ledPin, 1);
  
  // aqui ele vai printar o que for escrito entre aspas
  Serial.println("o led do pino 13 esta ligado"); 
  delay(2000);
  

 // nesse trecho indica que o led esta desligando 
  digitalWrite(ledPin, 0);
    Serial.println("o led do 13 esta desligado"); 

  delay(2000); 
  
  
}