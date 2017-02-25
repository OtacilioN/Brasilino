/*
    Ultrassom-HC-SR04
    Lê a distancia em CM através de um sensor ultrassônica HCSR-04 e mostra o valor lido no monitor serial
    
    Conecte o pino de Trig do sensor ao pino 9 do arduino e o pino de Echo do sensor ao pino 8 do arduino.
    
    Este exemplo de código está em domínio público.
    
    modificado em 07 de Outubro de 2016
    Desenvolvido por Otacilio Neto e Thiago Augusto Martins.
    Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
    
    Este exemplo é baseado no exemplo Serial.ino da biblioteca Ultrassonic.h
*/ 

// Inclue a biblioteca Brasilino
#include <Brasilino.h>

Ultrassom ultrassom(9, 8);

funcao configurar() {
    // Inicializa a comunicação serial com a placa
    iniciarSerial();
}

funcao repetir() {
    //Escreve na serial o valor medido pelo sensor
    escreverSerial(ultrassom.Medir());
    escreverSerialn(" CM");
    esperar(1);
}
