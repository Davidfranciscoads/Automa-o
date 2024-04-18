int botao=2;
bool au = 0;
bool auxbotao;


void setup()
{
  pinMode(botao,INPUT);
  Serial.begin(9600);
}

void loop(){
  
  auxbotao= digitalRead(botao);
  if(auxbotao ==1){
    delay(500);
  Serial.println( " Botao está Pressionado ");
    au=1;
  }
  
  if(au==1 && auxbotao == 0){
  Serial.println(" Botao nao está Pressionado ");
    au=0;
  }
  
  }