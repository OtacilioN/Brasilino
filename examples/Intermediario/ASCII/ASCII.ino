/*
  Tabela ASCII

  Imprime os valores dos bytes nos seguintes formatos:
  - como decimal codificado em ASCII, hexadecimal, octal e binário

  Para mais sobre ASCII, veja https://pt.wikipedia.org/wiki/ASCII

  Não necessita circuito ou hardware adicional.

  Codado em Brasilino em outubro de 2019
  por Ladson Gomes (github.com/ladsong)
  Baseado no código de exemplo da biblioteca arduino
  por Nicholas Zambetti <http://www.zambetti.com>
  Adaptado para comando escreverSerialEspecial() e escreverSerialnEspecial()
  por Steffano Pereira (github.com/steffanop)

*/
#include <Brasilino.h>

funcao configurar() {
  //Inicializar serial, e definir o baudrate de comunicação
  iniciarSerial(9600);


  // escreve o titulo com quebra de linha no final
  escreverSerialn("Mapa de caracteres ~ Tabela ASCII");
}

// primeiro caracter visivel em ASCII '!' é o numero 33:
inteiro esteByte = 33;
// você também pode escrever caracteres em ASCII entre aspas simples.
// por exemplo, '!' é o mesmo que 33, então você também poderia usar isso:
// inteiro esteByte = '!';

funcao repetir() {
  // prints value unaltered, i.e. the raw binary version of the byte.
  // The Serial Monitor interprets all bytes as ASCII, so 33, the first number,
  // will show up as '!'
  escreverSerial(esteByte);

  escreverSerial(", dec: ");
  // escreve o valor como uma string codificada em ASCII em decimal (base 10).
  // Decimal é o formato padrão para as funções escreverSerial() e escreverSerialn().
  // então nenhum modificador é necessário:

  escreverSerial(esteByte);
  // Mas você pode declarar o modificador para decimal, se quiser.
  // dessa forma também funciona se você descomentar:

  // escreverSerialEspecial(esteByte, DEC);

  escreverSerial(", hex: ");
  // escreve o valor como uma cadeia de caracteres em HEXadecimal (base 16):
  escreverSerialEspecial(esteByte, HEX);

  escreverSerial(", oct: ");
  // escreve o valor como uma cadeia de caracteres em OCTal (base 8)
  escreverSerialEspecial(esteByte, OCT);

  escreverSerial(", bin: ");
  // escreve o valor como uma cadeia de caracteres BINária(base 2) junto com a quebra de final de linha:
  escreverSerialnEspecial(esteByte, BIN);

  // se imprimir o ultimo caracter visivel '~' ou 126, pare:
  se (esteByte == 126) {    // também é válido usar se(esteByte == '~') {
    // Fica para sempre nesse loop
    enquanto (verdadeiro) {
      continue;
    }
  }
  // avança para o proximo caracter
  esteByte++;
}