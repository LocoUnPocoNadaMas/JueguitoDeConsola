#include "main.h"

#pragma warning(disable : 4996)


void delay(unsigned int milliseconds)
{
	clock_t inicio = clock();	//Tipo clock_t

	while ((clock() - inicio) * 1000 / CLOCKS_PER_SEC < milliseconds);
}

int main(void)
{
	//setlocale(LC_ALL, "es_ES.UTF-16");
	//cargar_nivel();
	//int nivelActual = 1;
	
	personaje0_muniequitoEstatico();
	
	camara_inicializar();
	camara_actualizar_pantalla();	// retorna int?
	/***********
	*	Loop
	***********/
	so_entrada_teclado();			// loop

	system("pause");
	return 0;
}
