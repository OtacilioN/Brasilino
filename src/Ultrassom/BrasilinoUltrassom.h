/* Este trecho e' baseado na biblioteca ultrassonic.h de J. Rodrigo e emcontra-se disponivel originalmente em: https://github.com/JRodrigoTech/Ultrasonic-HC-SR04 */
#ifndef BrasilinoUltrassom_h
#define BrasilinoUltrassom_h
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
