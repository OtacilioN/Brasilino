/*
 * Ultrassom.cpp
 *
 * Biblioteca para Módulo de Ultrassom de forma minimalista
 *
 * criado em 3 Abril 2014
 * por Erick Simões (github: @ErickSimoes)
 *
 * Distribuição livre por MIT License.
 */

#if ARDUINO >= 100
  #include <Arduino.h>
#else
  #include <WProgram.h>
#endif

#include "Ultrassom.h"

Ultrassom::Ultrassom(int trigPin, int echoPin, unsigned long timeOut) {
  trig = trigPin;
  echo = echoPin;
  threePins = trig == echo ? true : false;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  timeout = timeOut;
}

unsigned int Ultrassom::temporizador() {
  if (threePins)
    pinMode(trig, OUTPUT);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  if (threePins)
    pinMode(trig, INPUT);
  
  previousMicros = micros();
  while(!digitalRead(echo) && (micros() - previousMicros) <= timeout); // esperar o pino echo ficar HIGH
  previousMicros = micros();
  while(digitalRead(echo)  && (micros() - previousMicros) <= timeout); // esperar o pino echo ficar LOW

  return micros() - previousMicros; // duração
}

/*
 * Se a unidade de medida não for passada como parâmetro,
 * por padrão, será retornada a distância em centímetros.
 * Para alterar para polegadas, substitua CM por POL.
 */
unsigned int Ultrassom::lerDistancia(int und) {
  return temporizador() / und / 2;  // distância em centímetros ou polegadas
}
