
/*
                  Controlando dois motores
    Código exemplo de como controlar dois motores usando o driver de ponte h L298N

    Este código é de domínio público

    criado em 8 de Outubro de 2019
    por: Vinícios Silva (Venish)

                          LIGAÇÕES
    Ligue o pino 5 do seu arduino no pino IN1 da sua ponte h
    Ligue o pino 6 do seu arduino no pino IN2 da sua ponte h
    Ligue o pino 7 do seu arduino no pino ENA da sua ponte h

    Ligue o pino 8 do seu arduino no pino IN3 da sua ponte h
    Ligue o pino 9 do seu arduino no pino IN4 da sua ponte h
    Ligue o pino 10 do seu arduino no pino ENB da sua ponte h

    E não esqueça: Ame sempre o seu robô! :)
*/

#include <Brasilino.h>

MotorDC motor1(5, 6, 7);
MotorDC motor2(8, 9, 10);

funcao configurar() {
  motor1.configurarVelocidade(100);
  motor2.configurarVelocidade(100);
}

funcao repetir() {
  motor1.girar(PARA_FRENTE);
  motor2.girar(PARA_FRENTE);
  esperar(5);
  
  motor1.parar();
  motor2.parar();
  esperar(2);

  motor1.girar(PARA_TRAS);
  motor2.girar(PARA_TRAS);
  esperar(5);

  motor1.parar();
  motor2.parar();
  esperar(2);

  motor1.girar(PARA_FRENTE);
  motor2.girar(PARA_TRAS);
  esperar(5);

  motor1.parar();
  motor2.parar();
  esperar(2);

  motor1.girar(PARA_TRAS);
  motor2.girar(PARA_FRENTE);
  esperar(5);

  motor1.parar();
  motor2.parar();
  esperar(2);
}