/*
    Piscar
    Liga um LED por um segundo, depois desliga-o, repetidamente.
    
    Este exemplo de código está em domínio público.
    
    modificado em 07 de julho de 2016
    Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
    Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
    
    Este exemplo é baseado no exemplo Blink do Arduino.
*/    

// Inclue a biblioteca Brasilino
#include <Brasilino.h>

// A funcao configurar executa uma vez, quando a placa é ligada ou quando o botão de reset é pressionado
funcao configurar() {
    // Inicializa o pino digital 13 como saida
    saida(13);
}

// A funcao repetir executa para sempre.
funcao repetir() {
    ligar(13);      // Liga o led conectado ao pino 13
    esperar(1);     // Espera por um segundo
    desligar(13);   // Desliga o led contectado ao pino 13
    esperar(1);     // Espera um segundo
}
