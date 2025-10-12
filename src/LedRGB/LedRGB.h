/*
 * LedRGB.h
 *
 * Biblioteca para Módulo de escolha de cores de um led RGB de forma simplificada
 *
 * criado em 12/10 2025
 * por Joao Arthur (github: @jarthur-duarte)
 *
 * Distribuição livre por MIT License.
 */

#ifndef LEDRGB_H
#define LEDRGB_H

#include <Arduino.h>

enum Cor {
  VERMELHO,
  VERDE,
  AZUL,
  AMARELO,
  CIANO,
  MAGENTA,
  BRANCO
};

class LedRGB {
public:
  LedRGB(int pinoVermelho, int pinoVerde, int pinoAzul);

  void cor(int valorVermelho, int valorVerde, int valorAzul);

  void cor(Cor corPredefinida);

  void desligar();

private:
  int _pinoVermelho;
  int _pinoVerde;
  int _pinoAzul;
};

#endif