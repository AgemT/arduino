// Número do pino onde o som será emitido
const int pinSom = 9;

// Array com todas as frequências
float frequencias[] = {
  // C
  16.35, 32.7, 65.41, 130.81, 261.63, 523.25, 1046.5, 2093, 4186,
  // C#
  17.32, 34.65, 69.3, 138.59, 277.18, 554.37, 1108.73, 2217.46, 4434.92,
  // D
  18.35, 36.71, 73.42, 146.83, 293.66, 587.33, 1174.66, 2349.32, 4698.63,
  // D#
  19.45, 38.89, 77.78, 155.56, 311.13, 622.25, 1244.51, 2489, 4978,
  // E
  20.6, 41.2, 82.41, 164.81, 329.63, 659.25, 1318.51, 2637, 5274,
  // F
  21.83, 43.65, 87.31, 174.61, 349.23, 698.46, 1396.91, 2793.83, 5587.65,
  // F#
  23.12, 46.25, 92.5, 185, 369.99, 739.99, 1479.98, 2959.96, 5919.91,
  // G
  24.5, 49, 98, 196, 392, 783.99, 1567.98, 3135.96, 6271.93,
  // G#
  25.96, 51.91, 103.83, 207.65, 415.3, 830.61, 1661.22, 3322.44, 6644.88,
  // A
  27.5, 55, 110, 220, 440, 880, 1760, 3520, 7040,
  // A#
  29.14, 58.27, 116.54, 233.08, 466.16, 932.33, 1864.66, 3729.31, 7458.62,
  // B
  30.87, 61.74, 123.47, 246.94, 493.88, 987.77, 1975.53, 3951, 7902.13
};

void setup() {
  // Define o pino como saída para o som
  pinMode(pinSom, OUTPUT);
}

void loop() {
  // Percorre cada nota no array de frequências
  for (int i = 0; i < sizeof(frequencias) / sizeof(frequencias[0]); i++) {
    float tom = frequencias[i];  // Define a frequência atual em 'tom'
    
    // Toca o som com a frequência atual por 500 ms
    tone(pinSom, tom);
    delay(500);  // Tempo de duração da nota
    
    noTone(pinSom);  // Para o som
    delay(100);  // Pausa entre as notas
  }
  
  // Pausa antes de recomeçar o ciclo
  delay(1000);
}