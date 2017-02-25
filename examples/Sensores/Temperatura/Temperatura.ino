/*
    Temperatura   
    Lê o valor obtido pelo sensor Termistor NTC 10k, e mostra o resultado em °C no monitor serial.
    
    Utilize um Termistor NTC de 10k, alimentado com +5v e com um resistor de 10k entre o pino A0 e o gnd. 
    Assim: [GND] ---- [Resistor de 10k] -------[A0] ------- [Termistor] ---- [+5v]
    
    Este exemplo de código está em domínio público.
    
    modificado em 11 de julho de 2016
    Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
    Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
    
    Este exemplo é baseado no tutorial reading a Thermistor do Arduino Playground.
*/ 

#include <Brasilino.h>

constante inteiro termistor = A0;
constante inteiro temperaturaMedia = 28;

dobro temperaturaAtual = 0;
inteiro leituraSensor = 0;

funcao configurar() {
    iniciarSerial(); // Inicia a comunicação Serial com o computador
}

funcao repetir() {
    
    leituraSensor = lerAnalogico(termistor); // Realizar a leitura em nível analógico do termistor no pino A0
    temperaturaAtual = temperatura(leituraSensor); // Converte o valor analogico em temperatura dada em °C
    
    // Analisa a temperatura e emite opiniao com base na temperatura media definida
    se(temperaturaAtual > temperaturaMedia) { // Caso seja maior que
        escreverSerial("Esta' calor agora: ");
    } senao {
        escreverSerial("Esta' frio agora: ");
    }
    
    // Imprime no Monitor Serial a temperatura atual e o simbolo de °C
    escreverSerial(temperaturaAtual);
    escreverSerialn(" graus Celsius.");
    
    esperarMili(100); // Espera 100 Milissegundos
}
