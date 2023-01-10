#include "linux.h"

//#define FDER  '\x4D'
#define FDER  77
#define FIZQ  '\x4B'
#define FABA  '\x50'
#define FARR  '\x48'
#define ENTER '\x0D'
#define ESC   '\x1B'
#define pantallAncho 128
#define pantallAlto 10

void entrada_teclado(void)
{
	int tecla = 0;
	bool i = true;

	do
	{
		//tecla = _getch();
		if (tecla == FDER)
		{
			printf("hola");
		}
		if (tecla == FARR)
		{
			printf("chau");
		}
		if (tecla == ESC)
		{
			break;
		}
	} while (i == true);
}

void limpiar(void)
{

}
