//A e B = Semáforos (A e B)
//C = Carro
//P = Pedestre
int AC_verd = 0;   // A CARRO VERDE
int AC_amar = 1;   // A CARRO AMARELO
int AC_verm = 2;   // A CARRO VERMELHO

int AP_verd = 4;   // A PEDESTRE VERDE
int AP_verm = 5;   // A PEDESTRE VERMELHO


int BC_verd = 8;   // B CARRO VERDE
int BC_amar = 9;   // B CARRO AMARELO
int BC_verm = 10;  // B CARRO VERMELHO

int BP_verd = 12;  // B PEDESTRE VERDE
int BP_verm = 13;  // B PEDESTRE VERMELHO


const int botao1 = 6; //BOTAO 1
const int botao2 = 7; //BOTAO 2
int estado_do_botao1 = LOW;
int estado_do_botao2 = LOW;

int guarda_botao1 = LOW;
int guarda_botao2 = LOW;
  
void setup()
{
  pinMode(AC_verd, OUTPUT); //V Verde A
  pinMode(AC_amar, OUTPUT); //V Amarelo A
  pinMode(AC_verm, OUTPUT); //V Vermelho A
  
  pinMode(AP_verd, OUTPUT); //P Verde A
  pinMode(AP_verm, OUTPUT); //P Vermelho A
  
  
  pinMode(BC_verd, OUTPUT); //V Verde B
  pinMode(BC_amar, OUTPUT); //V Amarelo B
  pinMode(BC_verm, OUTPUT); //V Vermelho B
  
  pinMode(BP_verd, OUTPUT); // Verde B
  pinMode(BP_verm, OUTPUT); // Vermelho B
  
  
  pinMode(botao1, INPUT); // Botao 1
  pinMode(botao2, INPUT); //Botao 2
}

void loop()
{
digitalWrite(AP_verm, 1); //ascender pedestre vermelho A
digitalWrite(BP_verm, 1); //ascender pedestre vermelho B
 
estado_do_botao1 = digitalRead (botao1); //fazer leitura do bt
  
  if ( botao1 == guarda_botao1)
		{ guarda_botao1 = !guarda_botao1; }
    else{}
  
    if ( estado_do_botao1 == 1)
		{ guarda_botao1 = !guarda_botao1; }
    else{}
  
  
    if ( guarda_botao1 == 1)
      { digitalWrite(AP_verm, 0);
  			digitalWrite(AP_verd, 1);
  			delay(2000);
  			digitalWrite(AP_verd, 0);
        guarda_botao1 = !guarda_botao1;
        
        for (int i=1; i<=10; i++ )
        { digitalWrite(AP_verm, 0);
          delay(100);
          digitalWrite(AP_verm, 1);
          delay(100);}
        }
    
      
    else {
        for (int i=1; i<=3; i++ )
        { digitalWrite(AC_verm, 1);
          delay(200);
          digitalWrite(AC_verm, 0);
          delay(200);}
      }
}