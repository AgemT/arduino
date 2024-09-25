

// These constants won't change. They're used to give names to the pins used:
const int potenciometro = A0;  // Analog input pin that the potentiometer is attached to
const int ledVm = 9;  // Analog output pin that the LED is attached to
const int ledVr = 11;
const int ledAm = 10;

int sensorValue = 0;  // value read from the pot
int outputValue = 0;  // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(potenciometro);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(ledVm, outputValue);
  analogWrite(ledVr, outputValue);
  analogWrite(ledAm, outputValue);
  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
