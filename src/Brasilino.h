/*
 * Brasilino.h
 * 
 * Biblioteca de tradução e facilitação de funções para Arduino em PT-BR
 *
 * Criado em 7 Julho 2016
 * Por Otacilio Neto (github: @OtacilioN | Email: contato@otaciliomaia.com), Thiago Augusto (github: @ThiagoAugustoSM | email: martinsthiagoaugusto@gmail.com)
 * Modificado em 24 Fevereiro 2017
 * Por Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * 
 * Publicado na Licença GPL-3.0
 */

#ifndef Brasilino_h
#define Brasilino_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

//------------------Argumentos Lógicos---------------------
#define ENTRADA INPUT
#define SAIDA OUTPUT
#define ALTO HIGH
#define BAIXO LOW
#define PRESSIONADO HIGH
#define LIBERADO LOW
#define verdadeiro true
#define falso false

//------------------Tipos de variáveis---------------------
#define vazio void //Contribuicao de @alessonrenato atraves de issue
#define funcao void
#define procedimento void //Contribuicao de @alessonrenato atraves de issue
#define nulo NULL		  //Contribuicao de @alessonrenato atraves de issue
#define inteiro int
#define decimal float
#define dobro double
#define caractere char
#define logico boolean
#define constante const
#define longo long
#define modulo unsigned

//------------------Laços Lógicos---------------------
#define se if
#define senao else
#define comparar switch
#define caso case

//------------------Laços de Repetição---------------------
#define enquanto while
#define para for
#define sair break
#define contarAte(y) for (int x = 0; x < y; x++)
#define contarDe(y) for (int x = y; x > 0; x--)

//------------------Funções---------------------
#define imprimir print
#define imprimirLinha println
#define iniciar begin

#define escrever write
#define ler read

#define esperar(tempo) delay(tempo * 1000)
#define esperarMili(tempo) delay(tempo)

//-------------paraCada(foreach)---------------
//concatena
#define CONCAT(a,b) CONCAT_(a,b) 
#define CONCAT_(a,b) a ## b

/* Higiene nos macros */
#define GENSYM(name) \
    CONCAT(CONCAT(CONCAT(_anon_variable_, name),__LINE__),__COUNTER__)

/* funcoes de ajuda para paraCada*/

/* paraCada_COMP
   Checa se o valor de indice e maior que o comprimento do array.
 */

#define paraCada_COMP(INDEX, ARRAY, ARRAY_TYPE, SIZE) \
  paraCada_COMP_ (INDEX, ARRAY, ARRAY_TYPE, SIZE, GENSYM (ret))
#define paraCada_COMP_(INDEX, ARRAY, ARRAY_TYPE, SIZE, ret) \
  __extension__ \
  ({ \
    bool ret = 0; \
    if (__builtin_types_compatible_p (const char*, ARRAY_TYPE)) \
      ret = INDEX < strlen ((const char*)ARRAY); \
    else \
      ret = INDEX < SIZE; \
    ret; \
  })

/* paraCada_ELEM
   Retorna um ponteiro ao elemento no indice do array.
 */

#define paraCada_ELEM(INDEX, ARRAY, TYPE) \
  paraCada_ELEM_ (INDEX, ARRAY, TYPE, GENSYM (tmp_array))

#define paraCada_ELEM_(INDEX, ARRAY, TYPE, tmp_array) \
  __extension__ \
  ({ \
    TYPE *tmp_array_ = ARRAY; \
    &tmp_array_[INDEX]; \
  })

/* paraCada
   Aqui e onde a magia acontece :)
   'b' = garante o fim do laco
 */

#define paraCada(VAR, ARRAY) \
  paraCada_ (VAR, ARRAY, GENSYM (array), GENSYM (i), GENSYM (b))

#define paraCada_(VAR, ARRAY, array, i, b) \
for (void *array = (void*)(ARRAY); array; array = 0) \
for (size_t i = 0; array && paraCada_COMP (i, array, \
                              __typeof__ (ARRAY), \
                              sizeof (ARRAY) / sizeof ((ARRAY)[0])); \
                              i++) \
for (bool b = 1; b; (b) ? array = 0 : 0, b = 0) \
for (VAR = paraCada_ELEM (i, array, __typeof__ ((ARRAY)[0])); b; b = 0)


//------------------Funções de Comando---------------------
#define ligar(pino) digitalWrite(pino, HIGH)
#define desligar(pino) digitalWrite(pino, LOW)

#define escreverAnalogico(pino, valor) analogWrite(pino, valor)
#define escreverDigital(pino, valor) digitalWrite(pino, valor)

#define lerDigital(pino) digitalRead(pino)
#define lerAnalogico(pino) analogRead(pino)

//------------------Funções Principais---------------------
#define configurar setup
#define repetir loop
#define retorne return

//------------------Funções de Configuração----------------
#define saida(pino) pinMode(pino, OUTPUT)
#define entrada(pino) pinMode(pino, INPUT)
#define entradaAlta(pino) pinMode(pino, INPUT_PULLUP)
#define definirPino(pino, tipo) pinMode(pino, tipo)

//------------------Funções de Serial----------------------
#if defined(ARDUINO_AVR_GEMMA)
#else
void iniciarSerial(void);
void iniciarSerial(int baud);

#define lerSerial() Serial.read()
#define escreverSerialn(texto) Serial.println(texto)
#define escreverSerial(texto) Serial.print(texto)
#endif
dobro temperatura(int RawADC);

/* Ultrassom */
/* Este trecho e' baseado na biblioteca ultrassonic.h de J. Rodrigo e emcontra-se disponivel originalmente em: https://github.com/JRodrigoTech/Ultrasonic-HC-SR04 */
class Ultrassom
{
  public:
	Ultrassom(int tp, int ep);
	long Temporizando();
	long Medir();

  private:
	int trig_pino;
	int echo_pino;
	long tempo_limite;
	long duracao;
};
#endif
// Não apagar antes disto.
