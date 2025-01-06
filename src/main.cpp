#include <Arduino.h>

void digitDisplay();

int led_a = 8;
int led_b = 9;
int led_c = 10;
int led_d = 11;
int led_e = 12;
int led_f = 13;
int led_g = 7;

int push_button_1 = 6;
int push_button_2 = 5;

bool estado_led = 0;

bool botao_acionado = false;

int contador_botao = 0;

void setup() {

  pinMode(push_button_1,INPUT_PULLUP);
  pinMode(push_button_2,INPUT_PULLUP);

  pinMode(led_a,OUTPUT);
  pinMode(led_b,OUTPUT);
  pinMode(led_c,OUTPUT);
  pinMode(led_d,OUTPUT);
  pinMode(led_e,OUTPUT);
  pinMode(led_f,OUTPUT);
  pinMode(led_g,OUTPUT);

  digitDisplay();

}

void loop() {

  bool leitura_botao_1 = digitalRead(push_button_1);
  bool leitura_botao_2 = digitalRead(push_button_2);



  if(leitura_botao_1 == LOW && !botao_acionado){

    botao_acionado = true;

    contador_botao++;

    digitDisplay();

    if(contador_botao > 9){
      contador_botao = 1;
    }

    digitDisplay();
    delay(200);
  }
  if(leitura_botao_2 == LOW && !botao_acionado){

    botao_acionado = true;

    contador_botao--;

    digitDisplay();

    if(contador_botao <= 0){

      contador_botao =9;
    }

    digitDisplay();
    delay(200);
  }

  if(leitura_botao_1 == HIGH && leitura_botao_2 == HIGH){

    botao_acionado = false;
  }

}

void digitDisplay(){

  digitalWrite(led_a,LOW);
  digitalWrite(led_b,LOW);
  digitalWrite(led_c,LOW);
  digitalWrite(led_d,LOW);
  digitalWrite(led_e,LOW);
  digitalWrite(led_f,LOW);
  digitalWrite(led_g,LOW);

  if(contador_botao == 1){

    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
  }

  if(contador_botao == 2 ){

    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_g,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_d,HIGH);
  }

  if(contador_botao == 3){

    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_g,HIGH);
  }
  if(contador_botao == 4){

    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_g,HIGH);
    digitalWrite(led_f,HIGH);
  }

  if(contador_botao == 5){

    digitalWrite(led_a,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);

  }

  if(contador_botao == 6){

    digitalWrite(led_a,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    
  }
  if(contador_botao == 7){

    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);

  }
  if(contador_botao == 8){

    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH);
    
  }
    if(contador_botao == 9){

    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH);
    
  }


}



