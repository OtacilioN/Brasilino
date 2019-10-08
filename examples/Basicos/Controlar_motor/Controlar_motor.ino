#include <Brasilino.h>

MotorDC motor(5, 6, 7);

funcao configurar() {
  motor.configurarVelocidade(100);
}

funcao repetir() {
  motor.girar(PARA_FRENTE);
  esperar(5);
  
  motor.parar();
  esperar(2);

  motor.girar(PARA_TRAS);
  esperar(5);

  motor.parar();
  esperar(2);
}