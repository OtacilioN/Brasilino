/*
  Ultrassom
  Lê a distancia em CM através de um sensor ultrassônico HCSR-04 e mostra o valor lido no monitor serial

  Conecte o pino de Trig do sensor ao pino 8 do Arduino e o pino de Echo do sensor ao pino 9 do Arduino.

  Este exemplo de código está em domínio público.

  modificado em 22 de Setembro de 2025
  Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
  Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.

  Este exemplo é baseado no exemplo UltrasonicSimple.ino da biblioteca Ultrasonic.h
*/

// Inclui a biblioteca Brasilino
#include <Brasilino.h>

Ultrassom ultrassom(8, 9);
inteiro distancia;

funcao configurar() {
  // Inicializa a comunicação serial com a placa
  iniciarSerial();
}

funcao repetir() {
  // Armazena o valor da distância na variável
  distancia = ultrassom.lerDistancia();

  escreverSerial(distancia);
  escreverSerialn(" CM");
  esperar(1);
}
