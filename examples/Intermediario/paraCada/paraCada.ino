/*
    paraCada(A,B)
    Um melhoramento da função para(for) que auxilia o programador a percorrer um vetor ou matriz de dados até os seu fim.

    Uso: 
    
    paraCada(A,B)
    {
        escreverSerial(A);
    }

    Variáveis:
     A (Variável a ser preenchida com os valores do vetor/matriz que está sendo lido).
     B (Vetor/matriz a ser percorrido durante o laço).

     O laço irá executar até o fim do vetor/matriz ser atingido ou uma condição de quebra seja
     forçada.

    Este exemplo de código está em domínio público.
    
    criado em 28 de abril de 2018
    modificado em 19 de abril de 2021
    Desenvolvido por Alesson Renato.
    Modificado por Steffano Pereira
    Contribuição a biblioteca Brasilino.
    
    Este exemplo é baseado em código aberto referente a linguagem C++/Arduino.
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
    // Cria a variável celula que armazenará o conteudo das celulas do vetor, cria posição que demonstrará a posição da celula atual e por fim cria um vetor com valores inteiros
    inteiro celula, posicao = 0, vetor[10] = {10,9,8,7,6,5,4,3,2,1};
    // Chama a função paraCada que guardará em celula um valor de posição do vetor que cada iteração
    paraCada(celula,vetor){
        // Escreve Posicao na serial
        escreverSerial("Posicao:");
        // Escreve a posição lida atual
        escreverSerial(posicao);
        // Escreve um espaço entre os valores e a palavra Valor:
        escreverSerial(" Valor:");
        // Escreve o valor contido na celula atual e pula uma linha
        escreverSerialn(celula);  
        esperar(0.5); // espera meio segundo
        posicao++; // atualiza posição
    }
}
/* 
    OBS: O exemplo foi criado usando o tipo de dado inteiro, contudo a função é compatível com 
    qualquer tipo de dado primitivo ou composto compatível com a linguagem C++. Porém não é
    compatível com vetores/arrays multidimensionais.
*/
