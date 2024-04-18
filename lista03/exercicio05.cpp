//exercicio 5
//LED ledAmarelo OR
// LED ledVerde AND
// LED ledVermelho XOR


const int ledAmarelo = 10;
const int ledVerde = 9;
const int ledVermelho = 8;
int auxA;
int auxB;

const int teclaA = 7;
const int teclaB = 6;



void setup()
{
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(teclaA, INPUT);
  pinMode(teclaB, INPUT);
  Serial.begin(9600);
}

void loop()
{
   auxA = digitalRead(teclaA);
   auxB = digitalRead(teclaB);
   led10();
   led9();
   led8();

    
    }

//led amarelo OR
void led10(){
  if(auxA == 1 || auxB == 1){
   digitalWrite(10,1);
    }
  else{
       digitalWrite(10,0);
  }
}

//led verde AND    
void led9(){
  if(auxA==1 && auxB ==1){
      digitalWrite(9,1);
  }
  else{
  digitalWrite(9,0);
 }
}

//led vermelho XOR  
void led8(){
  if(auxA ==1 || auxB ==1){
      digitalWrite(8,1);
  }
  if (auxA ==1 && auxB == 1){
       digitalWrite(8,0);
 }
  else{
      digitalWrite(8,0);

  }   
}
