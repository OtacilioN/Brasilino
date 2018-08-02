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
