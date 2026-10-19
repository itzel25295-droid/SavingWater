/*
nombre: Diego Alejandro
fecha: 30 sep
descripcion: practica zumbador pasivo
*/
const int pinPotenciometro = A0; // Pin analógico A0 para leer el f
const int pinBuzzer = 8;        // Pin digital 8 para el zumbador

const int umbralFuga = 600;     // Umbral de disparo para la alerta

void setup() {
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lecturaFlujo = analogRead(pinPotenciometro); // Lee valores d

  Serial.print("Flujo simulado: ");
  Serial.println(lecturaFlujo);

  if (lecturaFlujo > umbralFuga) {
    tone(pinBuzzer, 1000); // Emite sonido si supera el umbral
  } else {
    noTone(pinBuzzer);     // Permanece en silencio
  }

  delay(200);
}