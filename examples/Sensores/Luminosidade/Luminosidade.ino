/*
    Temperatura   
    Lê o valor obtido pelo sensor LDR, e mostra o resultado em °C no monitor serial.
    
    Utilize um LDR de 10k, alimentado com +5v e com um resistor de 10k entre o pino A1 e o gnd. 
    Assim: [GND] ---- [Resistor de 10k] -------[A1] ------- [LDR] ---- [+5v]
    
    Este exemplo de código está em domínio público.
    
    modificado em 11 de julho de 2016
    Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
    Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
    
*/ 

#include <Brasilino.h>

constante inteiro ldr = A1;
constante inteiro luminosidadeMedia = 500;

inteiro luminosidadeAtual = 0;

funcao configurar() {
    iniciarSerial(); // Inicia a comunicação Serial com o computador
}

funcao repetir() {
    
    luminosidadeAtual = lerAnalogico(ldr); // Realizar a leitura em nível analógico do LDR no pino A1
    
    // Analisa a luminosidade e emite opiniao com base na luminosidade media definida
    se(luminosidadeAtual > luminosidadeMedia) { // Caso seja maior que
        escreverSerial("Esta' claro agora: ");
    } senao {
        escreverSerial("Esta' escuro agora: ");
    }
    
    // Imprime no Monitor Serial a luminosidade atual
    escreverSerialn(luminosidadeAtual);
    
    esperarMili(100); // Espera 100 Milissegundos
}
