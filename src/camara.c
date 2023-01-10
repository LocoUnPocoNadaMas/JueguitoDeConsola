#include "camara.h"

/*****************************************
*
*	Refactorizar inicializar_camara()
*
*****************************************/


void camara_inicializar(void)
{
	camara.ejeX = 0;
	camara.min_X = 0;
	camara.max_X = 64;
	camara.camara_max_X;

	camara.ejeY = 0,
	camara.min_Y = 0,
	camara.max_Y = 10,
	camara.camara_max_Y;

	personaje.coordenadaX = 0;
	personaje.coordenadaY = 9;
}

void camara_mover_adelante(void)
{
	camara.min_X++;
	camara.max_X++;
}

int camara_verificar_centro()
{
	int centroDeLaPantalla = TAMANIOPANTALLA / 2;

	if (personaje.coordenadaX > centroDeLaPantalla && camara.max_X < LIMITENX)
	{
		camara_mover_adelante();
		return 1;
	}
	else if (personaje.coordenadaX < LIMITENX) return 1;
	else
	{
		so_limpiar();
		printf("FIN");
		system("exit");
		return 0;
	}
}

void camara_actualizar_pantalla(void)
{
	int i = 0;
	int j;
	
	int aux_X;
	int aux_Y = 3;

	so_limpiar();

	for (camara.ejeY = camara.min_Y; camara.ejeY < camara.max_Y; camara.ejeY++)
	{
		aux_X = 0;
		
		j = 0;
		for (camara.ejeX = camara.min_X; camara.ejeX < camara.max_X; camara.ejeX++)
		{
			if ((camara.ejeX == personaje.coordenadaX + aux_X) && (aux_X < 5) && (camara.ejeY == personaje.coordenadaY - aux_Y) && (camara.ejeY < personaje.coordenadaY))
			{
				aux_X++;
				printf("%c", personaje.muniequito[i][j]);
				j++;
			}
			/**************************
			*	Llenar de numeros
			**************************/
			//else printf("%i",camara.ejeX);
			/**************************
			*	Llenar de espacios 
			**************************/
			//else printf(" ");
			else printf("%c", nivel[camara.ejeY][camara.ejeX]);
		}
		if (j != 0)
		{
			i++;
			aux_Y--;
		}
		printf("\n");
	}
}
