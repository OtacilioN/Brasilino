# Brasilino

[![License: GPL3](https://img.shields.io/badge/License-GPL3-green.svg)](https://opensource.org/licenses/GPL-3.0)
[![Arduino Lint](https://github.com/OtacilioN/Brasilino/workflows/Arduino%20Lint/badge.svg)](https://github.com/OtacilioN/Brasilino/actions?workflow=Arduino+Lint)
[![Arduino Compile](https://github.com/OtacilioN/Brasilino/actions/workflows/compile.yml/badge.svg)](https://github.com/OtacilioN/Brasilino/actions/workflows/compile.yml)

_Uma **biblioteca** que permite programar em linguagem **Arduino** utilizando comandos facilitados em **PT-BR**._

## Índice

- [Sobre](#sobre)
- [Documentação](#documentação)
- [A Equipe Brasilino](#a-equipe-brasilino)
- [Artigos Relacionados](#artigos-relacionados)
- [Conte-nos sobre a sua experiência](#conte-nos-sobre-a-sua-experiência-com-o-brasilino)
- [Apoio](#apoio)
- [Licença](#licença)

## Sobre

De acordo com um estudo realizado pela Education First, o EF EPI (EF English Proficiency Index) 6° edição, publicado em Novembro de 2016, o Brasil aparece como **40°** colocado em **nível de proficiência em língua inglesa**, de um estudo realizado com **72 países**, com pontuação de 50,66, o que é considerada como **"Baixa"** pelo estudo. Tal deficiência em língua inglesa acentua-se ainda mais nas classes sociais menos privilegiadas.

Com o baixo índice de proficiência em língua inglesa apresentado pelo Brasil, muitos brasileiros sentem dificuldade em programar, devido ao fato da língua nativa em que os comandos são inscritos ser o inglês, muitas vezes, **não conseguindo associar a palavra _"if"_ ao _"se"_**, criando-se assim uma barreira, que muitas vezes afasta o brasileiro do ambiente de desenvolvimento tecnológico.

Nós do Brasilino acreditamos que **quebrando esta barreira inicial, criamos o incentivo** para que estes brasileros possam **ter o primeiro contato com a plataforma Arduino**, desenvolvendo assim suas próprias soluções, e a partir deste primeiro contato, os mesmos possam **quebrar o paradigma de que programar é difícil**, e quando apenas o idioma for a última barreira, através de uma **migração gradual**, da programação em Brasilino para a programaçao em Arduino, a barreira do idioma possa por fim ser removida.

Veja como é fácil usar nesse exemplo de piscar uma LED:

```c++
#include <Brasilino.h>

funcao configurar() {
    saida(13);
}

funcao repetir() {
    ligar(13);
    esperar(1);
    desligar(13);
    esperar(1);
}
```

A brasilino é uma **biblioteca aberta** e conta com a **participação de toda a comunidade**, através das necessidades encontradas pelos usuários, poderemos cada vez mais **criar comandos mais intuitivos e simplificados** de utilizar, promovendo-se assim que a biblioteca facilite cada vez mais a inserção de novos brasileiros.

Se este é o seu primeiro contato com Open Source, aprenda a [como contribuir com projetos Open Source.](https://github.com/Roshanjossey/first-contributions/blob/master/translations/README.pt_br.md)

## Documentação

[1. Como utilizar:](/INSTALACAO.md)

- Instalação através do gerenciador de biblioteca
- Instalação manual (Alternativa)
- Exemplos

[2. Tabela de instruções:](/TABELA_DE_INSTRUCOES.md)

- Estrutura Geral
- Estruturas de Controle
- Tipos de Dados Comuns
- Tipos de Dados Lógicos
- Funções

## A Equipe Brasilino

|                 **Otacilio Maia**                  |                    **Thiago Augusto**                    |                   **Erick Simoes**                   |             **Rômulo César**              |
| :------------------------------------------------: | :------------------------------------------------------: | :--------------------------------------------------: | :---------------------------------------: |
| ![Otacílio](https://github.com/OtacilioN.png?size=140) | ![Thiago](https://github.com/ThiagoAugustoSM.png?size=140) | ![Erick](https://github.com/ErickSimoes.png?size=140) | ![Rômulo](/docs/images/romulo.png?size=100) |
|           **Idelização e Implementação**           |              **Validação e Implementação**               |     **Consultor de formatação e Implementação**      |         **Orientador Acadêmico**          |

Veja a lista completa de [colaboradores](https://github.com/OtacilioN/Brasilino/graphs/contributors).

## Artigos Relacionados

"Programação Arduino em Português do Brasil" por Otacilio Maia no [Blog FilipeFlop](https://www.filipeflop.com/blog/programacao-arduino-portugues-brasil/)

A biblioteca foi apresentada na Mostra Nacional de Robótica em 2016, o que gerou um artigo publicado na [mostra virtual](http://www.mnr.org.br/mostravirtual/interna.php?id=15321).

"Aprenda a programar o arduino em português" por Saulo Alexandre na [Autocore Robótica](http://autocorerobotica.blog.br/aprenda-programar-o-arduino-em-portugues/amp/)

"Como uma biblioteca permite a inclusão de brasileiros dentro do universo Arduino" por Otacilio Maia no [Medium](https://medium.com/banana-digital/brasilino-a3957af2041d)

O Brasilino encontra-se aberto para ser utilizado em todo tipo de pesquisa e desenvolvimento científico-acadêmico.

## Conte-nos sobre a sua experiência com o Brasilino

Já utilizou a biblioteca Brasilino, seja em cursos, workshops ou em projetos pessoais?

Deixe o seu feedback nesse [form](https://goo.gl/forms/L8dXaenTAJDmBjui1).

## Apoio

A biblioteca Brasilino é apoiada pelo Makerama, uma comunidade Maker que apoia o desenvolvimento de ideias criativas no estado de Pernambuco. Mais informações disponíveis em: [http://makerama.com.br](http://makerama.com.br)

![Makerama](http://makerama.com.br/wp-content/uploads/2016/03/makerama_100.png)

## Licença

Brasilino está licenciado sob a licença GPL-3.0, e tem seus exemplos baseados no trabalho do projeto [Arduino](https://github.com/arduino/Arduino).
Veja a [licença](https://github.com/OtacilioN/Brasilino/blob/master/LICENSE) para mais informações.

Sinta-se livre para enviar um email para: <brasilino@otaciliomaia.com>
