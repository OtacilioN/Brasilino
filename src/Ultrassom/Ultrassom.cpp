#include "BrasilinoUltrassom.h"
#include "Arduino.h"
/* ULTRASSOM */
Ultrassom::Ultrassom(int tp, int ep)
{
	pinMode(tp, OUTPUT);
	pinMode(ep, INPUT);
	trig_pino = tp;
	echo_pino = ep;
	tempo_limite = 3000; // 3000 µs = 50cm // 30000 µs = 5 m // Configurado para funcionar ate 50 cm.
}

long Ultrassom::Temporizando()
{
	digitalWrite(trig_pino, LOW);
	delayMicroseconds(2);
	digitalWrite(trig_pino, HIGH);
	delayMicroseconds(10);
	digitalWrite(trig_pino, LOW);

	duracao = pulseIn(echo_pino, HIGH, tempo_limite);

	if(duracao == 0)
		duracao = tempo_limite;

	return duracao;
}

long Ultrassom::Medir()
{
	Temporizando();
	return duracao / 29 / 2;
}
