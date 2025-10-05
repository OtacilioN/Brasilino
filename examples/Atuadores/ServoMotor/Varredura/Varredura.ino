/* Varredura
 por Erick Simões (2025) <https://github.com/ErickSimoes>
 Este exemplo de código está em domínio público.
*/

#include <Brasilino.h>

Servo meuServo; // Cria um objeto meuServo

inteiro angulo = 0;  // Variável para armazenar o ângulo do servo

funcao configurar() {
  meuServo.conectar(9);       // Conecta o servo ao pino 9 (PWM)
  meuServo.escreverAngulo(0); // Inicializa o servo na posição 0 graus
}

funcao repetir() {
  // Move o servo de 0 a 180 graus
  para (angulo = 0; angulo <= 180; angulo += 1) {   // Variável angulo vai de 0 a 180 graus
    meuServo.escreverAngulo(angulo);                // Define o ângulo do servo
    esperarMili(15);                                // Espera 15 ms para o servo alcançar a posição
  }
  
  esperar(1); // Espera 1 segundo na posição final

  // Move o servo de 180 a 0 graus
  para (angulo = 180; angulo >= 0; angulo -= 1) {  // Variável angulo vai de 180 a 0 graus
    meuServo.escreverAngulo(angulo);                // Define o ângulo do servo
    esperarMili(15);                                // Espera 15 ms para o servo alcançar a posição
  }

  esperar(1); // Espera 1 segundo na posição inicial
}
