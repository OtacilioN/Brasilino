/* Controle por Potenciômetro
 por Erick Simões (2025) <https://github.com/ErickSimoes>
 Este exemplo de código está em domínio público.
*/

#include <Brasilino.h>

Servo meuServo;            // Cria um objeto meuServo
inteiro potenciometro = A0;     // Pino analógico onde o potenciômetro está conectado
inteiro valorPotenciometro = 0; // Variável para armazenar o valor

funcao configurar() {
  meuServo.conectar(9);       // Conecta o servo ao pino 9 (PWM)
  meuServo.escreverAngulo(0); // Inicializa o servo na posição 0 graus
}

funcao repetir() {
  valorPotenciometro = lerAnalogico(potenciometro); // Lê o valor do potenciômetro
  valorPotenciometro = mapear(valorPotenciometro, 0, 1023, 0, 180); // Mapeia o valor para o intervalo do servo
  meuServo.escreverAngulo(valorPotenciometro); // Define o ângulo do servo
  esperar(0.1); // Espera 100 ms
}
