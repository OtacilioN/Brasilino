/*
 * Ultrassom.h
 *
 * Biblioteca para Módulo de Ultrassom de forma minimalista
 *
 * criado em 3 Abril 2014
 * por Erick Simões (github: @ErickSimoes)
 *
 * Distribuição livre por MIT License.
 */

#ifndef Ultrassom_h
#define Ultrassom_h

/*
 * Valor dos divisores
 */
#define CM 28
#define POL 71

class Ultrassom {
  public:
    Ultrassom(int pinoSinal) : Ultrassom(pinoSinal, pinoSinal) {};
    Ultrassom(int pinoTrig, int pinoEcho, unsigned long tempoLimite = 20000UL);
    unsigned int lerDistancia(int und = CM);
    void definirTempoLimite(unsigned long tempoLimite) {timeout = tempoLimite;}

  private:
    int trig;
    int echo;
    bool threePins = false;
    unsigned long previousMicros;
    unsigned long timeout;
    unsigned int temporizador();
};

#endif // Ultrassom_h
