#include "controlador.h"

//#define FDER  '\x4D'
#define FDER  77
#define FIZQ  '\x4B'
#define FABA  '\x50'
#define FARR  '\x48'
#define ENTER '\x0D'
#define ESC   '\x1B'



void controlador_teclado(int tecla)
{
	if (tecla == FDER)
	{
		//printf(">");
		movimiento_avanzar();

	}
	if (tecla == FARR)
	{
		//printf("^");
		movimiento_saltar();
	}
	if (tecla == ESC)
	{
		printf("pausa");
		//if(salir) break;
	}
}
