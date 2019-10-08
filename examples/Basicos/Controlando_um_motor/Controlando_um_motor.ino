/*
                  Controlando um motor
    Código exemplo de como controlar um único motor usando o driver de ponte h L298N

    Este código é de domínio público

    criado em 8 de Outubro de 2019
    por: Vinícios Silva (Venish)

                          LIGAÇÕES
    Ligue o pino 5 do seu arduino no pino IN1 da sua ponte h
    Ligue o pino 6 do seu arduino no pino IN2 da sua ponte h
    Ligue o pino 7 do seu arduino no pino ENA da sua ponte h
    
    E não esqueça: Ame sempre o seu robô! :)
*/

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