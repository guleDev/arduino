#include <IRremote.h> //INCLUSÃO DE BIBLIOTECA

int RECV_PIN = 2; //PINO DIGITAL UTILIZADO PELO FOTORRECEPTOR KY-022

IRrecv irrecv(RECV_PIN); //PASSA O PARÂMETRO PARA A FUNÇÃO irrecv

const int led1 = 3; //PINO DIGITAL UTILIZADO PELO LED 1
const int led2 = 4;//PINO DIGITAL UTILIZADO PELO LED 2
const int led3 = 5; //PINO DIGITAL UTILIZADO PELO LED 3
const int led4 = 6; //PINO DIGITAL UTILIZADO PELO LED 4
const int led5 = 7; //PINO DIGITAL UTILIZADO PELO LED 5
const int led6 = 8; //PINO DIGITAL UTILIZADO PELO LED 6

long int codTecla1 = 0xFF6897; //CÓDIGO HEX DA TECLA 1
long int codTecla2 = 0xFF9867; //CÓDIGO HEX DA TECLA 2
long int codTecla3 = 0xFFB04F; //CÓDIGO HEX DA TECLA 3
long int codTecla4 = 0xFF30CF; //CÓDIGO HEX DA TECLA 4
long int codTecla5 = 0xFF18E7; //CÓDIGO HEX DA TECLA 5
long int codTecla6 = 0xFF7A85; //CÓDIGO HEX DA TECLA 6

int stLed1 = 0; //VARIÁVEL QUE CONTROLA O ESTADO DO LED 1 (LIGADO / DESLIGADO)
int stLed2 = 0; //VARIÁVEL QUE CONTROLA O ESTADO DO LED 2 (LIGADO / DESLIGADO)
int stLed3 = 0; //VARIÁVEL QUE CONTROLA O ESTADO DO LED 3 (LIGADO / DESLIGADO)
int stLed4 = 0; //VARIÁVEL QUE CONTROLA O ESTADO DO LED 4 (LIGADO / DESLIGADO)
int stLed5 = 0; //VARIÁVEL QUE CONTROLA O ESTADO DO LED 5 (LIGADO / DESLIGADO)
int stLed6 = 0; //VARIÁVEL QUE CONTROLA O ESTADO DO LED 6 (LIGADO / DESLIGADO)

decode_results results; //VARIÁVEL QUE ARMAZENA OS RESULTADOS (SINAL IR RECEBIDO)

void setup(){
  Serial.begin(9600); //INICIALIZA O MONITOR SERIAL
  irrecv.enableIRIn(); //INICIALIZA A RECEPÇÃO DE SINAIS IR
  pinMode(led1, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(led2, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(led3, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(led4, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(led5, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(led6, OUTPUT); //DEFINE O PINO COMO SAÍDA
}

void loop() {
  //LED 1
  //CAPTURA O SINAL IR
  if (irrecv.decode(&results)) {
    if((results.value == codTecla1) && (stLed1 == 0)){ //SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla1 E A
    //VARIÁVEL stLed1 FOR IGUAL A 0, FAZ
        Serial.println("Porta 3 esta sendo utilizada!");
        Serial.println("Led 1 (porta 3) habilitado!");
        Serial.println("Led 1 (porta 3) aceso!");
        Serial.println("Sala de estar esta com a luz acesa!\n");
        digitalWrite(led1, HIGH); //LIGA O LED 1
        stLed1 = 1; //VARIÁVEL RECEBE O VALOR 1
    }else{//SENÃO, FAZ
      if((results.value == codTecla1) && (stLed1 == 1)){ ///SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla1 E A
    //VARIÁVEL stLed1 FOR IGUAL A 1, FAZ
            Serial.println("Porta 3 nao esta sendo utilizada!");
            Serial.println("Led 1 (porta 3) desabilitado!");
            Serial.println("Led 1 (porta 3) apagado!");
            Serial.println("Sala de estar esta com a luz apagada!\n");
            digitalWrite(led1, LOW); //DESLIGA O LED 1
            stLed1 = 0; //VARIÁVEL RECEBE O VALOR 0
      }
    }

    //LED 2
    if((results.value == codTecla2) && (stLed2 == 0)){ //SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla2 E A
    //VARIÁVEL stLed2 FOR IGUAL A 0, FAZ
        Serial.println("Porta 4 esta sendo utilizada!");
        Serial.println("Led 2 (porta 4) habilitado!");
        Serial.println("Led 2 (porta 4) aceso!");
        Serial.println("Cozinha esta com a luz acesa!\n");
        digitalWrite(led2, HIGH); //LIGA O LED 2
        stLed2 = 1; //VARIÁVEL RECEBE O VALOR 2
    }else{//SENÃO, FAZ
      if((results.value == codTecla2) && (stLed2 == 1)){ ///SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla2 E A
    //VARIÁVEL stLed2 FOR IGUAL A 1, FAZ
            Serial.println("Porta 4 nao esta sendo utilizada!");
            Serial.println("Led 2 (porta 4) desabilitado!");
            Serial.println("Led 2 (porta 4) apagado!");
            Serial.println("Cozinha esta com a luz apagada!\n");
            digitalWrite(led2, LOW); //DESLIGA O LED 2
            stLed2 = 0; //VARIÁVEL RECEBE O VALOR 0
      }
    }

    //LED 3
    if((results.value == codTecla3) && (stLed3 == 0)){ //SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla3 E A
    //VARIÁVEL stLed3 FOR IGUAL A 0, FAZ
        Serial.println("Porta 5 esta sendo utilizada!");
        Serial.println("Led 3 (porta 5) habilitado!");
        Serial.println("Led 3 (porta 5) aceso!");
        Serial.println("Quarto esta com a luz acesa!\n");
        digitalWrite(led3, HIGH); //LIGA O LED 3
        stLed3 = 1; //VARIÁVEL RECEBE O VALOR 3
    }else{//SENÃO, FAZ
      if((results.value == codTecla3) && (stLed3 == 1)){ ///SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla3 E A
    //VARIÁVEL stLed3 FOR IGUAL A 1, FAZ
            Serial.println("Porta 5 nao esta sendo utilizada!");
            Serial.println("Led 3 (porta 5) desabilitado!");
            Serial.println("Led 3 (porta 5) apagado!");
            Serial.println("Quarto esta com a luz apagada!\n");
            digitalWrite(led3, LOW); //DESLIGA O LED 3
            stLed3 = 0; //VARIÁVEL RECEBE O VALOR 0
      }
    }

    //LED 4
      if((results.value == codTecla4) && (stLed4 == 0)){ //SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla4 E A
      //VARIÁVEL stLed4 FOR IGUAL A 0, FAZ
        Serial.println("Porta 6 esta sendo utilizada!");
        Serial.println("Led 4 (porta 6) habilitado!");
        Serial.println("Led 4 (porta 6) aceso!");
        Serial.println("Banheiro esta com a luz acesa!\n");
          digitalWrite(led4, HIGH); //LIGA O LED 4
          stLed4 = 1; //VARIÁVEL RECEBE O VALOR 4
      }else{//SENÃO, FAZ
        if((results.value == codTecla4) && (stLed4 == 1)){ ///SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla4 E A
      //VARIÁVEL stLed4 FOR IGUAL A 1, FAZ
            Serial.println("Porta 6 nao esta sendo utilizada!");
            Serial.println("Led 4 (porta 6) desabilitado!");
            Serial.println("Led 4 (porta 6) apagado!");
            Serial.println("Banheiro esta com a luz apagada!\n");
              digitalWrite(led4, LOW); //DESLIGA O LED 4
              stLed4 = 0; //VARIÁVEL RECEBE O VALOR 0
        }
      }

      //LED 5
      if((results.value == codTecla5) && (stLed5 == 0)){ //SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla5 E A
      //VARIÁVEL stLed5 FOR IGUAL A 0, FAZ
        Serial.println("Porta 7 esta sendo utilizada!");
        Serial.println("Led 5 (porta 7) habilitado!");
        Serial.println("Led 5 (porta 7) aceso!");
        Serial.println("Escritorio esta com a luz acesa!\n");
          digitalWrite(led5, HIGH); //LIGA O LED 5
          stLed5 = 1; //VARIÁVEL RECEBE O VALOR 5
      }else{//SENÃO, FAZ
        if((results.value == codTecla5) && (stLed5 == 1)){ ///SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla5 E A
      //VARIÁVEL stLed5 FOR IGUAL A 1, FAZ
            Serial.println("Porta 7 nao esta sendo utilizada!");
            Serial.println("Led 5 (porta 7) desabilitado!");
            Serial.println("Led 5 (porta 7) apagado!");
            Serial.println("Escritorio esta com a luz apagada!\n");
              digitalWrite(led5, LOW); //DESLIGA O LED 5
              stLed5 = 0; //VARIÁVEL RECEBE O VALOR 0
        }
      }

      //LED 6
      if((results.value == codTecla6) && (stLed6 == 0)){ //SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla6 E A
      //VARIÁVEL stLed6 FOR IGUAL A 0, FAZ
        Serial.println("Porta 8 esta sendo utilizada!");
        Serial.println("Led 6 (porta 8) habilitado!");
        Serial.println("Led 6 (porta 8) aceso!");
        Serial.println("Lavanderia esta com a luz acesa!\n");
          digitalWrite(led6, HIGH); //LIGA O LED 6
          stLed6 = 1; //VARIÁVEL RECEBE O VALOR 6
      }else{//SENÃO, FAZ
        if((results.value == codTecla6) && (stLed6 == 1)){ ///SE O CÓDIGO IR CAPTURADO FOR IGUAL A codTecla6 E A
      //VARIÁVEL stLed6 FOR IGUAL A 1, FAZ
            Serial.println("Porta 8 nao esta sendo utilizada!");
            Serial.println("Led 6 (porta 8) desabilitado!");
            Serial.println("Led 6 (porta 8) apagado!");
            Serial.println("Lavanderia esta com a luz apagada!\n");
              digitalWrite(led6, LOW); //DESLIGA O LED 6
              stLed6 = 0; //VARIÁVEL RECEBE O VALOR 0
        }
      }
  
    irrecv.resume(); //AGUARDA O RECEBIMENTO DE UM NOVO SINAL IR
  }
  delay(10); //INTERVALO DE 10 MILISSEGUNDOS
}