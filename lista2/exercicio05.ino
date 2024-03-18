
int vermelho1 = 3;
int amarelo1 = 4;
int verde1 = 5;
double tempo = 5000;


void setup() {
    for(int i=3; i<=5; i++){
        pinMode(i, OUTPUT);
        
    }
  Serial.begin(9600);
}


void loop(){
    farolDasRuas(verde1, tempo);
    farolDasRuas(amarelo1, tempo);
    farolDasRuas(vermelho1, tempo);
}

void farolDasRuas(int cor, double tempo){
    digitalWrite(cor, 1);
    Serial.print("tempo: ");
    Serial.println(String(tempo));
    tempo = tempo - tempo*0.20;
    Serial.print("tempo alterado: ");
    Serial.println(String(tempo));
    delay(tempo);
    digitalWrite(cor, 0);
}