//01 - Criar um contador crescente que vai do zero ao nove com um clique do botão.

//Declarar Variáveis
// composto por 10 linhas e 7 colunas 
int displaySeteSeg[10][7] = { 
//o numero 1 vai representar a quantidade de leds acendido no contador.
// na ultima linha nao precisa de virgula
 { 1,1,1,1,1,1,0 }, 
 { 0,1,1,0,0,0,0 },  
 { 1,1,0,1,1,0,1 }, 
 { 1,1,1,1,0,0,1 },  
 { 0,1,1,0,0,1,1 },  
 { 1,0,1,1,0,1,1 },  
 { 1,0,1,1,1,1,1 },  
 { 1,1,1,0,0,0,0 },  
 { 1,1,1,1,1,1,1 },  
 { 1,1,1,1,0,1,1 }   
 
};

int contador = 0;


int botao = 2;
bool botaoPressionado = false;


int a = 3;
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8;
int g = 9;

void setup(){
    pinMode(botao, INPUT);

    for(int i = 0; i <=9 ; i++){
        pinMode(i, OUTPUT);
    }

    Serial.begin(100);

}

void loop(){
    bool estadoBotao = digitalRead(botao);
  
    if(digitalRead(botao) == HIGH || botaoPressionado == true){
        delay(1000);
      	botaoPressionado = true;
      	contador++;
      
      if (contador == 10) {
      	contador = 0;
        ligaLeds(contador);
      } else {
        ligaLeds(contador);
      }
    }
}

void ligaLeds(int numero){
	int pino = 3;
   
  for (int contadorSegmentos = 0; contadorSegmentos < 7; ++contadorSegmentos){ 
    digitalWrite(pino, displaySeteSeg[numero][contadorSegmentos]);
    ++pino; 
  }
}