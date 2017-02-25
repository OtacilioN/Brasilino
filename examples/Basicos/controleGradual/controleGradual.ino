/*
    controleGradual
    
    Este exemplo mostra como realizar o controle gradual de um led ligado ao pino 13
    usando a função escreverAnalogico.
    
    Este exemplo de código está em domínio público.
    
    modificado em 10 de julho de 2016
    Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
    Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
    
    Este exemplo é baseado no exemplo Fade do Arduino.
*/ 

#include <Brasilino.h>

inteiro led 13; // O pino ao qual o led está conectado
inteiro luminosidade = 0; // O quão luminoso o led irá ficar, variando de 0 a 255

// A funcao configurar executa uma vez quando a placa é ligada ou quando o botão de reset é pressionado
funcao configurar() {
    // Declara que o led conectado ao pino 13 é uma saída
    saida(led); 
}

// A funcao repetir executa para sempre
funcao repetir() {
    
    // Inicia uma contagem repetindo de 0 até o valor escolhido 255
    contarAte(255) {
        escreverAnalogico(luminosidade); // Faz a luminosidade do led assumir o valor da variável
        luminosidade++; // Aumenta em uma unidade o valor da luminosidade
        esperarMili(30); // Espera 30 milissegundos
    }
    
    // Inicia uma contagem repetindo de 255 que é o valor escolhido até 0
    contarDe(255) {
        escreverAnalogico(luminosidade); // Faz a luminosidade do led assumir o valor da variável
        luminosidade--; // Diminui em uma unidade o valor da luminosidade
        esperarMili(30); // Espera 30 milissegundos
    }
}
