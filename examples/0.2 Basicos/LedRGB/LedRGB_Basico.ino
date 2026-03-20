/*
    LedRGB Básico
    Exibe as cores primárias em um LED RGB e depois uma cor personalizada.
*/
// Inclui a biblioteca Brasilino.
#include <Brasilino.h>
// Parâmetros: (pinoVermelho, pinoVerde, pinoAzul)
// Certifique-se de usar pinos que suportam PWM (marcados com ~ no Arduino)
LedRGB meuLed(9, 10, 11);

// A funcao configurar executa uma vez ao iniciar
funcao configurar() {
    // A inicialização dos pinos é feita automaticamente pelo LedRGB
}

// A funcao repetir executa em um laço infinito
funcao repetir() {
    // 1. Usando as cores pré-definidas (Modo Cor)
    
    meuLed.cor(VERMELHO);
    esperar(1);
    
    meuLed.cor(VERDE);
    esperar(1);
    
    meuLed.cor(AZUL);
    esperar(1);
    
    meuLed.cor(AMARELO);
    esperar(1);

    meuLed.cor(BRANCO);
    esperar(1);

    // 2. Usando valores manuais de 0 a 255 (Modo PWM/Valores)
    // Exemplo: Criando uma cor Laranja (R=255, G=165, B=0)
    meuLed.cor(255, 165, 0); 
    esperar(1);

    // 3. Desligando o LED
    meuLed.desligar();
    esperar(2); // Espera 2 segundos antes de recomeçar

}