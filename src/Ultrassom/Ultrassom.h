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
    Ultrassom(int sigPin) : Ultrassom(sigPin, sigPin) {};
    Ultrassom(int trigPin, int echoPin, unsigned long timeOut = 20000UL);
    unsigned int lerDistancia(int und = CM);
    void definirTempoLimite(unsigned long timeOut) {timeout = timeOut;}

  private:
    int trig;
    int echo;
    bool threePins = false;
    unsigned long previousMicros;
    unsigned long timeout;
    unsigned int temporizador();
};

#endif // Ultrassom_h
