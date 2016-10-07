#include "Brasilino.h"
#include <math.h>

dobro temperatura(inteiro valorAnalogico) {
    dobro Temp;
    Temp = log(10000.0*((1024.0/valorAnalogico-1))); 
    Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
    Temp = Temp - 273.15;  
    retorne Temp;
}

/* ULTRASSOM */
#ifdef ULTRASSOM
Ultrassom::Ultrassom(inteiro TP, inteiro EP)
{
    saida(TP);
    entrada(EP);
    Trig_pino=TP;
    Echo_pino=EP;
    Tempo_limite=3000;  // 3000 µs = 50cm // 30000 µs = 5 m // Configurado para funcionar ate 50 cm.
}

longo Ultrassom::Temporizando()
{
  desligar(Trig_pino);
  delayMicroseconds(2);
  ligar(Trig_pino);
  delayMicroseconds(10);
  desligar(Trig_pino);
  duracao = pulseIn(Echo_pin,HIGH,Tempo_limite);
  se( duracao == 0 ) {
	duracao = Tempo_limite; }
  retorne duracao;
}

longo Ultrassom::Medir()
{
    Temporizando();
    distancia = duracao /29 / 2 ;
    retorne distancia;
}

#endif 

// Não apagar antes disso
