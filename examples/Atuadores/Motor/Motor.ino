
/* ----------------------------------------------------------------------------------- *\
|                                                                                       |
|                                                                                       |
|                                     Motor                                             |
|                                                                                       |
|                                                                                       |
\* ----------------------------------------------------------------------------------- */

/*
    Exemplo de como controlar um motor com o drive de ponte h L298N.
    
    Este exemplo de código está em domínio público.
    
    Criado em 22 de janeiro de 2020
    Desenvolvido por Vinícios Silva (Venish).
 
                                   LIGAÇÔES

    Conecte o pino 5 do Arduino no pino IN1 da ponte h
    Conecte o pino 6 do Arduino no pino IN2 da ponte h
    Conecte o pino 7 do Arduino no pino ENA da ponte h

    E não esqueça: Ame sempre o seu robô! :)
*/

#include <Brasilino.h>                 // Inclui a biblioteca Brasilino


Motor meu_motor(5, 6, 7);              // Assim se cria um motor

funcao configurar() {
  meu_motor.configurarVelocidade(200); // Configura a velocidade de rotação do motor para 200
}

funcao repetir() {
  meu_motor.girar(PARA_FRENTE);        // Gira seu motor para frente 
  esperar(2);                          // Espera 2 segundos

  meu_motor.parar();                   // Para o seu motor
  esperar(2);
  
  meu_motor.girar(PARA_TRAS);          // Gira seu motor para tras
  esperar(2);
  
  meu_motor.parar();
  esperar(2);
}

