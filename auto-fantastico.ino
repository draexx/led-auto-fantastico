// Definición de pines para los 8 LEDs
const int numLeds = 8;
const int ledPins[numLeds] = {2, 3, 4, 5, 6, 7, 8, 9}; // Pines digitales para los LEDs

// Variables para control de tiempo y efecto
const int delayTime = 500; // Velocidad del efecto (ajustable)
int currentStep = 0;        // LED actual
bool moveToCenter = true;  // true = hacia el centro, false = hacia los bordes
// Definir la secuencia de los LEDs (desde bordes al centro)
const int sequence[] = {0, 7, 1, 6, 2, 5, 3, 4};
const int sequenceLength = 8;
void setup()
{
  // Configurar todos los pines como salidas
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Inicialmente apagados
  }
}
void clearLeds() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}
void loop()
{
  clearLeds();
  // Encender el LED correspondiente según la secuencia
  if (moveToCenter) {
    // Movimiento hacia el centro
    digitalWrite(ledPins[sequence[currentStep]], HIGH);
    digitalWrite(ledPins[sequence[currentStep+1]], HIGH);

  } else {
    // Movimiento hacia los bordes
    digitalWrite(ledPins[sequence[sequenceLength - 1 - currentStep]], HIGH);
    digitalWrite(ledPins[sequence[sequenceLength - 2 - currentStep]], HIGH);

  }
  
  delay(delayTime);
  
  // Actualizar el paso para la siguiente iteración
  currentStep++;
  currentStep++;
  
  // Verificar si llegamos al final de la secuencia
  if (currentStep >= sequenceLength) {
    currentStep = 0;
    moveToCenter = !moveToCenter; // Cambiar dirección
  }
}
