/*
    lerSerial
    Lê a entrada analógica 0, e mostra o resultado no monitor serial.
    
    Conecte o pino central do potenciômetro ao pino Analógico 0, e os pinos de alimentação aos
    pinos +5V e GND.
    
    Este exemplo de código está em domínio público.
    
    modificado em 07 de julho de 2016
    Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
    Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
    
    Este exemplo é baseado no exemplo AnalogReadSerial do Arduino.
*/    

// Inclue a biblioteca Brasilino
#include <Brasilino.h>

// A funcao configurar executa uma vez quando a placa é ligada ou quando o botão de reset é pressionado
funcao configurar() {
    // Inicializa a comunicação serial com a placa
    iniciarSerial();
}

// A funcao repetir executa para sempre
funcao repetir() {
    // Lê o valor analogico retornado por um sensor no pino A0
    inteiro valorDoSensor = lerAnalogico(A0); 
    // Escreve no SerialMonitor o valor armazenado na variável do tipo inteiro
    escreverSerialn(valorDoSensor); 
    esperar(0.5); // espera meio segundo
}
