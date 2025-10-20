/*
 * LedRGB.cpp
 *
 * Biblioteca para Módulo de escolha de cores de um led RGB de forma simplificada
 *
 * criado em 12/10 2025
 * por Joao Arthur (github: @jarthur-duarte)
 *
 * Distribuição livre por MIT License.
 */
#include "LedRGB.h"

LedRGB::LedRGB(int pinoVermelho, int pinoVerde, int pinoAzul) {
  _pinoVermelho = pinoVermelho;
  _pinoVerde = pinoVerde;
  _pinoAzul = pinoAzul;

  pinMode(_pinoVermelho, OUTPUT);
  pinMode(_pinoVerde, OUTPUT);
  pinMode(_pinoAzul, OUTPUT);
}

void LedRGB::cor(int valorVermelho, int valorVerde, int valorAzul) {
  analogWrite(_pinoVermelho, valorVermelho);
  analogWrite(_pinoVerde, valorVerde);
  analogWrite(_pinoAzul, valorAzul);
}

void LedRGB::cor(Cor corPredefinida) {
  switch (corPredefinida) {
    case VERMELHO:
      cor(255, 0, 0);
      break;
    case VERDE:
      cor(0, 255, 0);
      break;
    case AZUL:
      cor(0, 0, 255);
      break;
    case AMARELO:
      cor(255, 255, 0);
      break;
    case CIANO:
      cor(0, 255, 255);
      break;
    case MAGENTA:
      cor(255, 0, 255);
      break;
    case BRANCO:
      cor(255, 255, 255);
      break;
    default:
      cor(0, 0, 0);
      break;
  }
}

void LedRGB::desligar() {
  cor(0, 0, 0);
}