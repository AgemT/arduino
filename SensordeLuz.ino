const int vermelho = 10, amarelo = 9, verde = 11;
int pino = 9;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for(int i = 9; i <=11; i++)
  {
    digitalWrite(i, LOW);
  }
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  Serial.print("sensor: ");
  Serial.println(sensorValue);
  int luminosidade = map(sensorValue,0,1023,0,225);
  if(pino == 11)
  {
    pino = 9;
  }
  else
  {
    pino += 1;
  }
  Serial.print("luminosidade: ");
  Serial.println(luminosidade);
  analogWrite(pino, luminosidade);

  delay(1000);  // delay in between reads for stability
}
