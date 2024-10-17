// Oitava 0
const float do0 = 16.3516;
const float reB0 = 17.3239;
const float re0 = 18.3540;
const float miB0 = 19.4454;
const float mi0 = 20.6017;
const float fa0 = 21.8268;
const float solB0 = 23.1247;
const float sol0 = 24.4997;
const float laB0 = 25.9565;
const float la0 = 27.5000;
const float siB0 = 29.1352;
const float si0 = 30.8677;

// Oitava 1
const float do1 = 32.7032;
const float reB1 = 34.6478;
const float re1 = 36.7081;
const float miB1 = 38.8909;
const float mi1 = 41.2034;
const float fa1 = 43.6535;
const float solB1 = 46.2493;
const float sol1 = 48.9994;
const float laB1 = 51.9131;
const float la1 = 55.0000;
const float siB1 = 58.2705;
const float si1 = 61.7354;

// Oitava 2
const float do2 = 65.4064;
const float reB2 = 69.2957;
const float re2 = 73.4162;
const float miB2 = 77.7817;
const float mi2 = 82.4069;
const float fa2 = 87.3071;
const float solB2 = 92.4986;
const float sol2 = 97.9989;
const float laB2 = 103.826;
const float la2 = 110.000;
const float siB2 = 116.541;
const float si2 = 123.471;

// Oitava 3
const float do3 = 130.813;
const float reB3 = 138.591;
const float re3 = 146.832;
const float miB3 = 155.563;
const float mi3 = 164.814;
const float fa3 = 174.614;
const float solB3 = 184.997;
const float sol3 = 195.998;
const float laB3 = 207.652;
const float la3 = 220.000;
const float siB3 = 233.082;
const float si3 = 246.942;

// Oitava 4
const float do4 = 261.626;
const float reB4 = 277.183;
const float re4 = 293.665;
const float miB4 = 311.127;
const float mi4 = 329.628;
const float fa4 = 349.228;
const float solB4 = 369.994;
const float sol4 = 391.995;
const float laB4 = 415.305;
const float la4 = 440.000;
const float siB4 = 466.164;
const float si4 = 493.883;

// Oitava 5
const float do5 = 523.251;
const float reB5 = 554.365;
const float re5 = 587.330;
const float miB5 = 622.254;
const float mi5 = 659.255;
const float fa5 = 698.456;
const float solB5 = 739.989;
const float sol5 = 783.991;
const float laB5 = 830.609;
const float la5 = 880.000;
const float siB5 = 932.328;
const float si5 = 987.767;

// Oitava 6
const float do6 = 1046.50;
const float reB6 = 1108.73;
const float re6 = 1174.66;
const float miB6 = 1244.51;
const float mi6 = 1318.51;
const float fa6 = 1396.91;
const float solB6 = 1479.98;
const float sol6 = 1567.98;
const float laB6 = 1661.22;
const float la6 = 1760.00;
const float siB6 = 1864.66;
const float si6 = 1975.53;

// Oitava 7
const float do7 = 2093.00;
const float reB7 = 2217.46;
const float re7 = 2349.32;
const float miB7 = 2489.02;
const float mi7 = 2637.02;
const float fa7 = 2793.83;
const float solB7 = 2959.96;
const float sol7 = 3135.96;
const float laB7 = 3322.44;
const float la7 = 3520.00;
const float siB7 = 3729.31;
const float si7 = 3951.07;

// Oitava 8
const float do8 = 4186.01;
const float reB8 = 4434.92;
const float re8 = 4698.64;
const float miB8 = 4978.03;
const float mi8 = 5274.04;
const float fa8 = 5587.65;
const float solB8 = 5919.91;
const float sol8 = 6271.93;
const float laB8 = 6644.88;
const float la8 = 7040.00;
const float siB8 = 7458.62;
const float si8 = 7902.13;

const int pinoBuzzer = ; //Pino do buzzer

  int contador = 0; //VARIÁVEL DO TIPO INTEIRA
 
  void setup(){
    pinMode(pinoBuzzer, OUTPUT); //DEFINE O PINO COMO SAÍDA
  }
   
  void loop(){ 
    primeraSecao(); //CHAMADA DE SONS DA PRIMEIRA SEÇÃO
   
    segundaSecao(); //CHAMADA DE SONS DA SEGUNDA SEÇÃO
   
    //VARIANTE 1
    tom(f, 250);  
    tom(gS, 500);  
    tom(f, 350);  
    tom(a, 125);
    tom(cH, 500);
    tom(a, 375);  
    tom(cH, 125);
    tom(eH, 650);
   
    delay(500); //INTEVALO DE 500 MILISSEGUNDOS
   
    segundaSecao(); //CHAMADA DE TONS DA SEGUNDA SEÇÃO
   
    //VARIANTE 2
    tom(f, 250);  
    tom(gS, 500);  
    tom(f, 375);  
    tom(cH, 125);
    tom(a, 500);  
    tom(f, 375);  
    tom(cH, 125);
    tom(a, 650);  
   
    delay(650); //INTEVALO DE 650 MILISSEGUNDOS
  }
  
  //FUNÇÃO RESPONSÁVEL POR EXECUTAR CADA TOM 
  void tom(int frequencia, int duracao){
    //EXECUTA O TOM CONFORME OS PARÂMETROS PASSADOS
    tone(pinoBuzzer, frequencia, duracao); 
   
    if(contador % 2 == 0){ //SE contador FOR UM NÚMERO PAR, FAZ
      delay(duracao); //INTERVALO DE ACORDO COM O VALOR DA VARIÁVEL
    }
    else //SENÃO, FAZ
    {
      delay(duracao); //INTERVALO DE ACORDO COM O VALOR DA VARIÁVEL
    }
    noTone(pinoBuzzer); //BUZZER PERMANECE DESLIGADO
    delay(50); //INTEVALO DE 50 MILISSEGUNDOS
    contador++; //INCREMENTADOR O CONTADOR
  }
  
  //FUNÇÃO DA PRIMEIRA SEÇÃO
  void primeraSecao(){
    tom(a, 500);
    tom(a, 500);    
    tom(a, 500);
    tom(f, 350);
    tom(cH, 150);  
    tom(a, 500);
    tom(f, 350);
    tom(cH, 150);
    tom(a, 650);
   
    delay(500); //INTEVALO DE 500 MILISSEGUNDOS
   
    tom(eH, 500);
    tom(eH, 500);
    tom(eH, 500);  
    tom(fH, 350);
    tom(cH, 150);
    tom(gS, 500);
    tom(f, 350);
    tom(cH, 150);
    tom(a, 650);
   
    delay(500); //INTEVALO DE 500 MILISSEGUNDOS
  }
  
  //FUNÇÃO DA SEGUNDA SEÇÃO  
  void segundaSecao(){
    tom(aH, 500);
    tom(a, 300);
    tom(a, 150);
    tom(aH, 500);
    tom(gSH, 325);
    tom(gH, 175);
    tom(fSH, 125);
    tom(fH, 125);    
    tom(fSH, 250);
   
    delay(325); //INTEVALO DE 325 MILISSEGUNDOS
   
    tom(a, 250);
    tom(dSH, 500);
    tom(dH, 325);  
    tom(cSH, 175);  
    tom(cH, 125);  
    tom(b, 125);  
    tom(cH, 250);  
   
    delay(350); //INTEVALO DE 350 MILISSEGUNDOS
  }
