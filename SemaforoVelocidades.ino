const int sensorPin = A0;   // select the input pin for the potentiometer

const int led1 = 13;      // select the pin for the LED
const int led2 = 12;
const int led3 = 11;

int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  for(int turn=11; turn<14;turn++)
  {
    semaforo(turn);
  }

}
void semaforo(int led) {
    // turn the ledPin on
  digitalWrite(led, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(led, LOW);
}