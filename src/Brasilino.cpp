/*
 * Brasilino.cpp
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

#include "Brasilino.h"
#include <math.h>

#if defined(ARDUINO_AVR_GEMMA)
#elif defined(ARDUINO_AVR_DIGISPARK)
#else
void iniciarSerial(void)
{
	Serial.begin(9600);
}

void iniciarSerial(int baud)
{
	Serial.begin(baud);
}

#endif

double temperatura(int valorAnalogico)
{
	double temp = log(10000.0 * (1024.0 / valorAnalogico - 1));
	temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * temp * temp)) * temp);
	temp = temp - 273.15;
	return temp;
}

// Não apagar antes disso

Motor::Motor(uint8_t pino_A, uint8_t pino_B, uint8_t pino_pwm) {
	_pino_A = pino_A;
	_pino_B = pino_B;
	_pino_pwm = pino_pwm;

	pinMode(_pino_A, OUTPUT);
  pinMode(_pino_B, OUTPUT);
  pinMode(_pino_pwm, OUTPUT);
}

void Motor::configurarVelocidade(uint8_t velocidade) {
	_velocidade = velocidade;

	analogWrite(_pino_pwm, _velocidade);
}

void Motor::girar(uint8_t sentido) {
	_sentido = sentido;

	switch (_sentido) {
		case PARA_FRENTE:
			digitalWrite(_pino_A, HIGH);
	    digitalWrite(_pino_B, LOW);
			break;
		case PARA_TRAS:
			digitalWrite(_pino_A, LOW);
	    digitalWrite(_pino_B, HIGH);
			break;
		default:
		break;
	}
}

void Motor::parar() {
	digitalWrite(_pino_A, LOW);
	digitalWrite(_pino_B, LOW);
}

void iniciarAleatorio(unsigned long seed){
	randomSeed(seed);
}

int aleatorio(int max){
	random(max + 1);
}

int aleatorio(int min, int max){
	random(min, max + 1);
}
