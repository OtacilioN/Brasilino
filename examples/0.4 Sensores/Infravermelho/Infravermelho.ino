/*
    Infravermelho
    Lê o valor analógico obtido por um sensor de reflexão infravermelho (como o TCRT5000), 
    mostra o resultado no monitor serial e classifica a quantidade de luz refletida.
    
    Obs.: Alguns módulos invertem a leitura; se necessário, ajuste o limite e/ou inverta a comparação.
    
    Conecte o pino de sinal analógico (AO) do sensor ao pino A0 do Arduino. Alimente o sensor com +5V e GND.
*/

#include <Brasilino.h>

// Definição do pino analógico (A0)
constante inteiro sensorIV = A0; 

// Valor de corte para identificar proximidade/cor (ajuste conforme seu teste)
constante inteiro limiteReflexao = 500; 

inteiro leituraAtual = 0;

funcao configurar() {
    // Inicializa a comunicação serial com a placa
    iniciarSerial(); 
}

funcao repetir() {
    // Realiza a leitura analógica do sensor IV no pino A0
    leituraAtual = lerAnalogico(sensorIV);

    // Analisa o valor lido e emite uma opinião com base no limite definido
    // (Geralmente, sensores IV mudam drasticamente o valor entre superfícies claras e escuras)
    se (leituraAtual < limiteReflexao) {
        escreverSerial("Objeto Proximo e/ou Superficie Clara: ");
    } senao {
        escreverSerial("Objeto Afastado e/ou Superficie Escura: ");
    }

    // Imprime no Monitor Serial o valor numérico atual
    escreverSerialn(leituraAtual);

    // Espera 200 Milissegundos antes da próxima leitura
    esperarMili(200);
}
