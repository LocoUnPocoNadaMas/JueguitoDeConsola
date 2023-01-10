#include "colisiones.h"

/*****************************************************
+	Comprobar que no haya obstaculos para el personaje
+	ej:
+	if pj[i,j] && pj[i,j+1] && pj[i,j+2]
/****************************************************/

//void colision()
//{
//	bool anterior = false;
//	bool posterior = false;
//	
//	do
//	{
//		for (y=0; y<altura; y++)
//		{
//			for (x=0; x<anchura; x++)
//			{
//				if(mapa[i,j]==libre)
//					posterior = true;
//			}
//		}
//	}	
//}


void gravedad(int x, int y)
{
	while (personaje.coordenadaY < 9)
	{
		delay(100);
		movimiento_caer();
	}
	personaje0_muniequitoEstatico();
	camara_actualizar_pantalla();
}



int colision_frontal(void)
{
	if (personaje.coordenadaX < LIMITENX) return 1;
	return 0;
}

int colision_superior(void)
{
	if (personaje.coordenadaY >= 0) return 1;
	return 0;
}

int colision_inferior(void)
{
	return 1;
}
