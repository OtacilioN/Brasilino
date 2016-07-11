/*
	Brasilino.h - Programe em PT-BR.
	Esta biblioteca insere uma série de facilitações e permite programar em linguagem Arduino utilizando como lingua nativa o português do Brasil.
	Mais instruções disponíveis em: https://github.com/OtacilioN/Brasilino
	Desenvolvido por Otacilio Neto e Thiago Augusto Martins, Julho, 2016.
	Orientado pelo Prof. Dr. Rômulo Cesar Carvalho de Araújo.
*/

#ifndef Brasilino_h
#define Brasilino_h

#define definir define
#define usar define

//------------------Argumentos Lógicos---------------------
#define ENTRADA INPUT
#define SAIDA OUTPUT
#define ALTO HIGH
#define BAIXO LOW
#define verdadeiro true
#define falso false
#define PRESSIONADO HIGH
#define LIBERADO LOW

//------------------Tipos de variáveis---------------------
#define nulo void
#define funcao void
#define inteiro	int
#define decimal float 
#define dobro double
#define caracter char
#define logico boolean
#define constante const 

//------------------Laços Lógicos---------------------
#define se if
#define senao else
#define caso switch
//------------------Laços de Repetição---------------------
#define enquanto while
#define para for
#define sair break
#define contarAte(y) for(int x=0; x < y; x++)
#define contarDe(y) for(int x = y; x > 0; x--)

//------------------Funções---------------------
#define imprimir print
#define imprimirLinha println
#define iniciar begin

#define escrever write
#define ler read

#define esperar(tempo) delay(tempo*1000)
#define esperarMili(tempo) delay(tempo)

//------------------Funções de Comando---------------------
#define ligar(pino) digitalWrite(pino, HIGH)
#define desligar(pino) digitalWrite(pino, LOW)

#define escreverAnalogico(pino, valor) analogWrite(pino, valor)
#define escreverDigital(pino, valor) digitalWrite(pino, valor)

#define lerDigital(pino) digitalRead(pino)
#define lerAnalogigo(pino) analogRead(pino)

//------------------Funções Principais---------------------
#define configurar setup
#define repetir loop

//------------------Funções de Configuração----------------
#define saida(pino) pinMode(pino, OUTPUT)
#define entrada(pino) pinMode(pino, INPUT)
#define definirPino(pino, tipo) pinMode(pino, tipo)

//------------------Funções de Serial----------------------
#ifndef BAUD
	#define iniciarSerial() Serial.begin(9600)
#endif

#ifdef BAUD
	#define iniciarSerial(baud) Serial.begin(baud)
#endif

#define lerSerial() Serial.read()
#define escreverSerialn(texto) Serial.println(texto)
#define escreverSerial(texto) Serial.print(texto)

dobro temperatura(int RawADC);

#endif

// Não apagar antes disto.
