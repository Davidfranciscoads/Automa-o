// exercicio 03

// classificação dos led de acordo com os numeros dos pinos
const int ledYellow = 10;
const int ledGreen = 9;
const int ledRed = 8;


// string para indicar que a opção escolhida seja uma letra ou um numero 
String opcao;

//indicando o que cada pinMode é uma saida 
void setup()
{
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 Serial.begin(9600);
  
  
  } 
// void loop seria onde acontece o programa e se repete 
void loop()
  
{
   // comando para se comunicar com o monitor serial 
   // o numero 9600 indica que o programa esta recebendo 9600 bits por segundos 
  Serial.begin(9600);
 
   //o comando serial.available indica o numero de caracters que o arduino recebeu
   while(Serial.available()>= 0){ 
 
   // opção para escolher uma letrar de acordo com a cor 
   Serial.println("insira uma letra de acordo com a cor que deseja acender ");
 
    //Serial.readString faz a leitura da opção selecionada 
   opcao= Serial.readString();
   
    // o operador || indica qualquer um dos tamanhos de letra daria certo 
    if(opcao == "Y"||opcao == "y"){
 
    digitalWrite(ledYellow,1);
    digitalWrite(ledGreen,0);
    digitalWrite(ledRed,0);

    // informando menssagem da cor que esta acesa 
    Serial.println("led amarelo aceso ");
    
    delay(3000);
      
    }
    else if(opcao == "G"||opcao == "g"){
    
     digitalWrite(ledYellow,0);
     digitalWrite(ledGreen,1);
     digitalWrite(ledRed,0);
     Serial.println(" o led verde acende ");
  	
      delay(3000);
    }
    else if(opcao == "R"||opcao == "r"){
    digitalWrite(ledYellow,0);
    digitalWrite(ledGreen,0);
    digitalWrite(ledRed,1);

    Serial.println("o led vermelho acende ");
    delay(3000);
    
    }
  }
  
  // recebendo informação sobre a opção que foi escolhida 
  Serial.println(opcao);
}