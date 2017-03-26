Brasilino
===========

_Uma **biblioteca** que permite programar em linguagem **Arduino** utilizando comandos facilitados em **PT-BR**._

De acordo com um estudo realizado pela Education First, o EF EPI (EF English Proficiency Index) 6° edição, publicado em Novembro de 2016, o Brasil aparece como **40°** colocado em **nível de proficiência em língua inglesa**, de um estudo realizado com **72 países**, com pontuação de 50,66, o que é considerada como **"Baixa"** pelo estudo. Tal deficiência em língua inglesa acentua-se ainda mais nas classes sociais menos privilegiadas.

Devido ao baixo índice de proficiência em língua inglesa apresentado pelo Brasil, muitos brasileiros sentem dificuldade em programar, devido ao fato da língua nativa em que os comandos são inscritos ser o inglês, muitas vezes, **não conseguindo associar a palavra _"if"_ ao _"se"_**, criando-se assim uma barreira, que muitas vezes afasta o brasileiro do ambiente de desenvolvimento tecnológico.

Nós do Brasilino acreditamos que **quebrando esta barreira inicial, criamos o incentivo** para que estes brasileros possam **ter o primeiro contato com a plataforma Arduino**, desenvolvendo assim suas próprias soluções, e a partir deste primeiro contato, os mesmos possam **quebrar o paradigma de que programar é difícil**, e quando apenas o idioma for a última barreira, através de uma **migração gradual**, da programação em Brasilino para a programaçao em Arduino, a barreira do idioma possa por fim ser quebrada.

A brasilino é uma **biblioteca aberta** e conta com a **participação de toda a comunidade**, através das necessidades encontradas pelos usuários, poderemos cada vez mais **criar comandos mais intuitivos e simplificados** de utilizar, promovendo-se assim que a biblioteca facilite cada vez mais a inserção de novos brasileiros.

Como utilizar:
---------------

1. **Instalação**
    - Primeiro baixe a biblioteca clicando [aqui](https://github.com/OtacilioN/Brasilino/archive/v1.0.0.zip)
    - Abra a sua IDE do Arduino, clique em ```Sketch > Incluir Biblioteca > Adicionar biblioteca .ZIP```
    - Procure a biblioteca Brasilino baixada em arquivo .ZIP em sua pasta de downloads
    - Pronto, agora a sua biblioteca está instalada e pronta para ser utilizada!
    
2. **Exemplos**
    - Uma das melhores formas de se começar a programar utilizando a Brasilino é partir de um exemplo! 
    - Para abrir a aba de exemplos clique em ```Arquivo > Exemplos > Brasilino``` (É preciso descer dentro da aba de exemplos até encontrar "Exemplos de Bibliotecas Personalizadas")
    - Então você pode escolher um exemplo da aba de Basicos ou de Sensores, daí basta clicar no exemplo escolhido e iniciar!
    - Você pode começar com o exemplo "Piscar", que é equivalente ao exemplo "Blink" do Arduino, para isso basta clicar em ```Arquivo > Exemplos > Brasilino > Basicos > Piscar```
    
Tabela de instruções:
---------------

| Instrução        | Descrição                                                                                                                                                                                                      | Exemplo                                                                                                                                                          |
|------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| inteiro          | Declara uma variável do tipo inteiro.                                                                                                                                                                          | inteiro idade = 13;                                                                                                                                              |
| decimal          | Declara uma variável do tipo decimal;                                                                                                                                                                          | decimal saldo = 3.45;                                                                                                                                            |
| dobro            | Declara uma variável do tipo dobro. Esta tem o dobro de bits de armazenamento quanto a variável decimal.                                                                                                       | dobro lucro = 3.87909;                                                                                                                                           |
| caractere        | Declara uma variável do tipo caractere                                                                                                                                                                         | caractere entrada = ‘c’;                                                                                                                                         |
| logico           | Declara uma variável do tipo logico, podendo ser “verdadeiro” ou “falso”.                                                                                                                                      | logico dinheiro = verdadeiro;                                                                                                                                    |
| constante        | Declara uma constante.                                                                                                                                                                                         | constante tamanho = 4;                                                                                                                                           |
| nulo             | Declara uma variável do tipo nulo.                                                                                                                                                                             | nulo sapatos;                                                                                                                                                    |
| verdadeiro       | Parâmetro lógico utilizado para operações digitais                                                                                                                                                             | se(a == verdadeiro){ //Ação caso “a” seja verdadeiro. }                                                                                                          |
| falso            | Parâmetro lógico utilizado para operações digitais.                                                                                                                                                            | se(a == falso){ //Ação caso “a” seja //falso. }                                                                                                                  |
| definir          | Associa um valor constante a um nome.                                                                                                                                                                          | #definir PINO 13                                                                                                                                                 |
| usar             | Libera uma macro para uma nova função.                                                                                                                                                                         | #usar BAUD                                                                                                                                                       |
| configurar       | Função principal do programa, só será executada uma única vez.                                                                                                                                                 | funcao configurar(){ //Bloco de uma única //execução.}                                                                                                           |
| Repetir          | Função do programa que ficará repetindo enquanto o arduino estiver ligado.                                                                                                                                     | funcao repetir(){ //Bloco que ficará //repetindo. Esta função //vem logo após a //função configurar }                                                            |
| definirPino      | Define se o pino trata-se de uma entrada ou saída.                                                                                                                                                             | definirPino(PINO, TIPO);                                                                                                                                         |
| Saida            | Define o pino como uma saída.                                                                                                                                                                                  | saida(13); //Pino digital 13 //definido como saída.                                                                                                              |
| Entrada          | Define o pino como uma entrada.                                                                                                                                                                                | entrada(12); //Pino digital 13 //definido como saída                                                                                                             |
| Se               | Analisa se a condição dentro do parâmetro é verdadeira e executa uma ação.                                                                                                                                     | se(a == b){ //Ação caso “a” seja //igual a “b” }                                                                                                                 |
| Senao            | Executa uma ação se o parâmetro da condição “se” for falso.                                                                                                                                                    | se(a == b){ //Ação caso “a” seja //igual a “b” }senao{ //Ação caso “a” seja //diferente de “b” }                                                                 |
| comparar....caso | Compara o parâmetro da função com os casos definidos. No exemplo “x” é comparado com os valores 1 e 2. É utilizado a instrução “sair” para que não se realize os próximos testes se algum já for o verdadeiro. | comparar(x){ caso 1: //Ação caso “x” for //igual a 1 sair; caso 2: //Ação caso “x” for //igual a 2 sair; padrao: //Executa se não for //nenhum dos casos sair; } |
| Enquanto         | Esta função executa continuamente enquanto o teste do parâmetro for verdadeiro.                                                                                                                                | enquanto(1 == 2){ //Ações a serem //executadas se o //parâmetro for //verdadeiro }                                                                               |
| para             | Executa um bloco de instruções enquanto uma condição for satisfeita. É utilizado um contador para incrementar, ou decrementar, e terminar o loop.                                                              | Para(x = 0; x < 2; x = x+1){ //Executa este bloco //enquanto “x” for menor //que 2 }                                                                             |
| contarAte        | Aplicação da função “para” onde se escolhe o número de interações.                                                                                                                                             | contarAte(5){ //Executa este bloco de //instruções 5 vezes. }                                                                                                    |
| escreverSerial   | Mostra no Monitor Serial o valor colocado como parâmetro.                                                                                                                                                      | escreverSerial(“BR”);                                                                                                                                            |
| escrever         | Escreve o valor colocado como parâmetro, no Monitor Serial.                                                                                                                                                    | Serial.escrever(10);                                                                                                                                             |
| lerSerial        | Ler o valor recebido pelo Monitor Serial.                                                                                                                                                                      | lerSerial();                                                                                                                                                     |
| esperar          | Espera durante o tempo determinado, no seu parâmetro, para executar a próxima instrução.                                                                                                                       | esperar(1); /* O parâmetro deve ser escrito na unidade de segundos, podendo ser um valor decimal */                                                              |
| escreverDigital  | Função que escreve o valor “ALTO” ou “BAIXO” nos pinos digitais.                                                                                                                                               | escreverDigital(PINO, VALOR);                                                                                                                                    |
| ALTO             | Parâmetro que indica o estado alto no pino.                                                                                                                                                                    | escreverDigital(10, ALTO);                                                                                                                                       |
| BAIXO            | Parâmetro que indica estado baixo no pino.                                                                                                                                                                     | escreverDigital(10, BAIXO);                                                                                                                                      |
| Ligar            | Função que escreve o valor ALTO no pino.                                                                                                                                                                       | Ligar(PINO);                                                                                                                                                     |
| Desligar         | Função que escreve o valor BAIXO no pino.                                                                                                                                                                      | Desligar(PINO);                                                                                                                                                  |
| definirPino      | Função que define o valor do pino como “ENTRADA” ou “SAIDA”.                                                                                                                                                   | definirPino(PINO, TIPO);                                                                                                                                         |
| ENTRADA          | Parâmetro que indica tratar-se de uma entrada.                                                                                                                                                                 | definirPino(12, ENTRADA);                                                                                                                                        |
| SAIDA            | Parâmetro que indica tratar-se de uma saída.                                                                                                                                                                   | definirPino(11, SAIDA);                                                                                                                                          |
| PRESSIONADO      | Parâmetro para botão pressionado                                                                                                                                                                               | se(estadoBotao == PRESSIONADO)                                                                                                                                   |
| LIBERADO         | Parâmetro para botão liberado.                                                                                                                                                                                 | se(estadoBotao == LIBERADO)                                                                                                                                      |

O Equipe Brasilino:
---------------

**Otacilio Neto** ([github](https://github.com/OtacilioN))
<br>
![](https://github.com/OtacilioN.png?size=230)<br>
**Idelização e Implementação**

**Thiago Augusto** ([github](https://github.com/ThiagoAugustoSM))
<br>
![](https://github.com/ThiagoAugustoSM.png?size=230)<br>
**Validação e Implementação**

**Erick Simoes** ([github](https://github.com/ErickSimoes))
<br>
![](https://github.com/ErickSimoes.png?size=230)<br>
**Consultor de formatação e Implementação**

**Rômulo César** 
<br>
![](http://www.railbeesystem.com/images/team/romulo.gif)<br>
**Orientador Acadêmico**

Veja a lista completa de [colaboradores](https://github.com/OtacilioN/Brasilino/graphs/contributors).

Artigos Acadêmicos:
---------------

A biblioteca foi apresentada na Mostra Nacional de Robótica em 2016, o que gerou um artigo publicado na mostra virtual, disponível em: http://www.mnr.org.br/mostravirtual/interna.php?id=15321.

O Brasilino encontra-se aberto para ser utilizado em todo tipo de pesquisa e desenvolvimento científico-acadêmico.

Apoio:
---------------

A biblioteca Brasilino é apoiada pelo Makerama, uma comunidade Maker que apoia o desenvolvimento de ideias criativas no estado de Pernambuco. Mais informações disponíveis em: http://makerama.com.br

![](http://makerama.com.br/wp-content/uploads/2016/03/makerama_100.png)<br>

Licença:
---------------

Brasilino está licenciado sob a licença GPL-3.0, e tem seus exemplos baseados no trabalho do projeto [Arduino] (https://github.com/arduino/Arduino)
Sinta-se livre para enviar um email para: brasilino@makerama.com.br
Veja [Licença] (https://github.com/OtacilioN/Brasilino/blob/master/LICENSE) para mais informações.

