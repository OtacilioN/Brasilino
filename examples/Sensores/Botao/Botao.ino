/*
    Botao
    
    Liga e desliga o led conectado ao pino digital 13,
    quando o botão conectado ao pino 2 é pressionado,
    
    O circuito:
    * Led conectado ao pino 13.
    * Botao conectado ao pino 2 e alimentado com +5v.
    * Resistor de 10k conectado entre o gnd e o pino 2.
        
    Este exemplo de código está em domínio público.
    
    modificado em 10 de julho de 2016
    Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
    Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
    
    Este exemplo é baseado no exemplo Button do Arduino.
*/ 

#include <Brasilino.h>

// As constantes não mudam o seu valor, nesse caso serao:
constante inteiro led = 13; // O pino ao qual o led está conectado
constante inteiro botao = 2; // O pino ao qual o botão está conectado

// As variáveis mudam o seu valor ao longo do programa
inteiro estadoBotao = 0;

funcao configurar() {
    // Declara que o led conectado ao pino 13 é uma saída
    saida(led); 
    
    // Declara que o botao conectado ao pino 13 é uma entrada
    entrada(botao);
}

funcao repetir() {
    // Le o estado do botão conectado ao pino 2 e salva na variável
    estadoBotao = lerDigital(botao);
    
    // Confere se o botao esta pressionado
    // Caso esteja liga o led
    se(estadoBotao == PRESSIONADO){
        ligar(led); // Liga o led
    } senao { // Caso não esteja desliga o led
        desligar(led); // desliga o led
    }
}
