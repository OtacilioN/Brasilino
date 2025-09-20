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
// ------------------Constantes---------------------
#define LED_INTERNO LED_BUILTIN // contribuição de @EduardaOL

//------------------Argumentos Lógicos---------------------
#define ENTRADA_ALTA INPUT_PULLUP
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
#define positivo unsigned // Contribuição de @ViniciosSilva811 e @r4faelrs através de issue
#define modulo positivo   // Contribuição de @ViniciosSilva811 e @r4faelrs através de issue

//------------------Laços Lógicos---------------------
#define se if
#define senao else
#define comparar switch
#define caso case

//------------------Laços de Repetição---------------------
#define enquanto while
#define fazer do	// Contribuição de @ViniciosSilva811
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
#elif defined(ARDUINO_AVR_DIGISPARK)
#else
void iniciarSerial(void);
void iniciarSerial(int baud);

#define lerSerial() Serial.read()
#define escreverSerialn(texto) Serial.println(texto)
#define escreverSerial(texto) Serial.print(texto)
#define escreverSerialnEspecial(texto, formato) Serial.println(texto, formato)
#define escreverSerialEspecial(texto, formato) Serial.print(texto, formato)
#endif
dobro temperatura(int RawADC);

//------------------Funções Matemáticas ----------------------
// Contibuição de @ViniciosSilva811
#define modular(valor) abs(valor)
#define restringir(valor, a, b) constrain(valor, a, b)
#define mapear(valor, deMenor, deMaior, paraMenor, paraMaior) map(valor, deMenor, deMaior, paraMenor, paraMaior)
#define maior(a, b) max(a, b)
#define menor(a, b) min(a, b)
#define potenciar(a, b) pow(a, b)
#define quadrado(valor) sq(valor)
#define raizQuadrada(valor) sqrt(valor)
#define seno(valor) sin(valor)
#define cosseno(valor) cos(valor)
#define tangente(valor) tan(valor)

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

/* Motor */

/* 
	Este trecho de código é baseado na biblioteca Stubborn DCMotor
	que se encontra em https://github.com/ViniciosSilva811/Stubborn_DCMotor 
*/

#define PARA_FRENTE 1
#define PARA_TRAS   2

class Motor
{
	public:
		Motor(uint8_t pino_A, uint8_t pino_B, uint8_t pino_pwm);
		void configurarVelocidade(uint8_t velocidade);
		void girar(uint8_t sentido);
		void parar();
	private:
		uint8_t _pino_A, _pino_B, _pino_pwm;
		uint8_t _velocidade;
		uint8_t _sentido;
};

//------------------Comparadores----------------------
#define igual ==
#define maior >
#define maior_igual >=
#define menor <
#define menor_igual <=
#define logico_e &&
#define logico_ou ||

#endif
// Não apagar antes disto.
