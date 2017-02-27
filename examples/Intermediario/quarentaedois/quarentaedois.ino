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
inteiro luminosidade, valor; // Você também pode criar mais de uma variável na mesma linha, basta separá-las por vírgula

decimal temperaturaAtual;    // Em aproximadamente 43.731 % das vezes precisamos utilizar variáveis com valores decimais
caractere letra = 'A';       // As variáveis do tipo caractere são responsáveis por armazenar letras e símbolos
logico botao;                // As variáveis do tipo lógico são as mais simples, só podem ter o valor de verdadeiro ou falso

longo numeroGrande = 9999999 // Quando precisamos de armazenar números muito grandes utilizamos as variáveis do tipo longo
constante inteiro RESP = 42; // Nem sempre precisamos que os valores sejam modificados ao longo do código, para isso criamos constantes
modulo inteiro positivo;     // E algumas vezes não queremos valores negativos para as nossas variáveis

// Você também pode chamar de proedimento configurar se preferir
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
    
    
}

// Aqui também pode ser chamado de procedimento repetir, fica à sua escolha
funcao repetir() {
    
}
