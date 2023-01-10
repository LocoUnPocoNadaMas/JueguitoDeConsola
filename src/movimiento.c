#include "movimiento.h"

void movimiento_avanzar_personaje(void)
{
	personaje.coordenadaX++;
}

void movimiento_levantar_personaje(void)
{
	personaje.coordenadaY--;
}

void movimiento_bajar_personaje(void)
{
	personaje.coordenadaY++;
}

/*
void movimiento_alzar_personaje(void)
{
	personaje.coordenadaY++;
}*/

void movimiento_parar(void)
{
	personaje0_muniequitoEstatico();
}

void movimiento_caer(void)
{
	/************************************
	*
	*	Funcion Invocada por Gravedad
	*
	************************************/
	movimiento_bajar_personaje();
	camara_actualizar_pantalla();
}

void movimiento_saltar(void)
{
	int saltar;
	int avanzar;
	int piso;
	int altura = 0;
	int medioSalto = ALTURASALTO / 2;

	while ((avanzar=colision_frontal()) && (saltar=colision_superior()) && (piso=colision_inferior()) && altura < ALTURASALTO) // No tiene que tener techo pero si suelo
	{
		if (camara_verificar_centro())
		{
			if (altura < medioSalto)
			{
				personaje0_muniequitoSaltando0();
				altura++;
			}
			else
			{
				if (altura < ALTURASALTO)
				{
					personaje0_muniequitoSaltando1();
					altura++;
				}
				else printf("k'ase?");
			}
		}
		movimiento_avanzar_personaje();
		movimiento_levantar_personaje();
		camara_actualizar_pantalla();
		printf("%i", personaje.coordenadaX);
	}
	gravedad();
}

void movimiento_avanzar(void)
{
	int mover;

	//int centroDeLaPantalla = TAMANIOPANTALLA / 2;

	//posicion = libre = true; /* Editar */

	if (mover = colision_frontal())
	{
		if (personaje.coordenadaX % 2 == 0)
			personaje0_muniequitoCaminando0();
		else
			personaje0_muniequitoCaminando1();

		if (camara_verificar_centro())
		{
			movimiento_avanzar_personaje();
			camara_actualizar_pantalla(); 
		}

		printf("%i", personaje.coordenadaX);
	}
	//gravedad();
}