/*
    quarentaedois
    Programa exemplo que contém a respostam para a vida, o universo e tudo mais.
    
    Este exemplo de código está em domínio público.
    
    criado em 26 de fevereiro de 2016
    Desenvolvido por Otacilio Neto.
    
*/    

// Dica: Você pode criar uma linha de comentário utilizando duas barras no inicio de uma linha

/* Dica: Caso o seu comentário possua mais de uma linha, você pode utilizar um / seguido de um *,
         e ao final das linhas do seu comentário é só fechar com * seguido de um /, assim tudo
         que estiver dentro das linhas de comentário não será verificado pelo compilador */
         
/* Dica: A palavra Sintaxe, em programação, refere-se a forma com que as instruções são escritas, você 
         pode conferir se a sintaxe de uma instrução está correta pela mudança de cor, todas as instruções 
         do Brasilino possuem uma cor específica para indicar que foram digitadas corretamente */ 

/* Dica: No Brasilino, assim como em Arduino, as letras MAIÚSCULAS e minúsculas fazem diferença na sintaxe de 
         uma instrução, portanto a instrução ligar(); é interpretada em Brasilino, mas a instrução Ligar, não.
         Em inglês, chamamos esta diferenciação de maíusculos e minúsculos de "Case-sensitive" e não "Case-Sensitive" */
         
// Dica: Pular uma linha não indica ao programa que a sua instrução acabou, utilize o ; (ponto e vírgula) para isso

// Inclue a biblioteca Brasilino
#include <Brasilino.h>

// Existem vários tipos de variáveis, cada uma com a sua função específica
// Para declarar uma variável você deve indicar o tipo e o nome da variável, separados por um espaço

inteiro numero;              // Cria uma variável chamada "numero" que armazena valores inteiros
inteiro resposta = -42;      // Além de criar uma variável você também pode atribuir um valor inicial para a mesma, basta utilizar o "="
inteiro distancia, valor;    // Você também pode criar mais de uma variável na mesma linha, basta separá-las por vírgula

decimal temperaturaAtual;    // Em aproximadamente 43.731 % das vezes precisamos utilizar variáveis com valores decimais
caractere letra = 'A';       // As variáveis do tipo caractere são responsáveis por armazenar letras e símbolos
logico botao;                // As variáveis do tipo lógico são as mais simples, só podem ter o valor de verdadeiro ou falso

longo numeroGrande = 999999; // Quando precisamos de armazenar números muito grandes utilizamos as variáveis do tipo longo
constante inteiro RESP = 42; // Nem sempre precisamos que os valores sejam modificados ao longo do código, para isso criamos constantes
modulo inteiro positivo;     // E algumas vezes não queremos valores negativos para as nossas variáveis
Ultrassom usFrente(9, 8);    // Declara um sensor de Ultrassom chamado "usFrente" nos pinos 9 e 8

// Você também pode chamar de procedimento configurar se preferir
funcao configurar() {
    
    /* A função inciarSerial inicia uma comunicação serial entre o Arduino e o computador ou outro dispositivo,
       é possível escolher a taxa de comunicação entre os parênteses, nesse caso a 115200, é a maior taxa padrão 
       suportada. Caso você não saiba que velocidade escolher, pode deixar o parâmetro  sem nenhum número dentro, 
       assim iniciamos na taxa 9600 para você, que é a taxa mais recomendada. Para isso, digite apenas iniciarSerial(); */
    iniciarSerial(115200); 
    
    // Formas de definir os pinos digitais
    entrada(2);                 // Declara o pino 2 do Arduino como uma entrada
    definirPino(3, ENTRADA);    // Têm o mesmo efeito que a função de cima, porém neste caso para o pino 3
    saida(4);                   // Declara o pino 4 do Arduino como uma saída
    definirPino(5, SAIDA);      // Têm o mesmo efeito que a função de cima, porém neste caso para o pino 5
    // Formas especiais
    entradaAlta(6);             // Declara o pino 6 como sendo uma entrada com o resistor interno de PullUp
    
}

// Aqui também pode ser chamado de procedimento repetir, fica à sua escolha
funcao repetir() {
    
    distancia = usFrente.Medir();   // Salva na variavel distancia o valor de medicao do ultrassom
    se(distancia < 15) {            // Confere se o valor de distancia é menor que 15 cm
        escreverSerialn("Cuidado, esta' perto!");   // O comando escreverSerialn pula uma linha após imprimir na tela
        esperar(0.5);               // Espera meio segundo para executar a proxima instrução
    } senao {                       // Caso não seja menor que 15 cm
        escreverSerialn("Esta' longe ainda!");
        esperarMili(500);           // Faz o programa esperar 500 milissegundos, que equivale a meio segundo
    }
    
    temperaturaAtual = temperatura(lerAnalogico(A0));   // Realiza a leitura da temperatura de um termistor de 10k no pino A0
    
    contarAte(10) {             // Conta 10 numeros, do 0 até o 9
        escreverSerial(x);      // Escreve os numeros sendo contados na variavel x
        esperar(0.1);           // Espera 0.1 segundos 
    }
    
    para(inteiro x = 0; x < 10; x++) {  // Tambem conta de 0 ate 9, sendo a instrucao contarAte expandida
        escreverSerialn(x);
        esperar(0.1);
    }
    
    contarDe(10) {              // Conta 10 numeros de forma decrescente
        escreverSerial(x);
        esperar(0.1);
    }
    
    ligar(4);                   // Liga, por exemplo, um Led conectado ao pino 4 do Arduino
    escreverDigital(5, ALTO);   // Você também pode ligar um pino assim
    esperar(1);
    
    desligar(5);                // Desliga o pino 5 do Arduino
    escreverDigital(5, BAIXO);  // Também pode se desligar um pino assim
    esperar(1);
    
    botao = lerDigital(2);      // Salva o valor da leitura digital do pino 2 na variavel botao
    
    se(botao == PRESSIONADO) {
        Serial.imprimir("Fui pressionado"); // Voce também pode escrever no Serial monitor assim
    } senao {
        Serial.imprimirLinha("Nao fui pressionado"); // Caso queira que pule uma linha ao final
    }
    
    letra = lerSerial();        // Salva um valor recebido atraves da comunicacao serial, como por exemplo do serial monitor
    
    comparar(letra) {           // Compara a variavel letra
        caso 'A':
            escreverSerialn("Recebi um A");
            sair;
            
        caso 'B':
            escreverSerialn("Recebi um B");
            sair;
            
        caso 'a':
            escreverSerialn("Recebi um a");
            sair;
            
        caso 'b':
            escreverSerialn("Recebi um b");
            sair;
    }
    
    letra = Serial.ler();       // Você também pode ser a serial assim
    
    enquanto(letra != 'C') {    // Lê-se, enquanto letra for diferente de 'A', ele repete o que está dentro dos colchetes
        escreverSerialn("Ainda não recebi um C");
        esperar(0.5);
    }
}
