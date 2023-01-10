#include "comunes.h"

//variables globales y funciones externas

/*************************
*		Globales
*************************/

int alto = 3,
ancho = 5;

typedef unsigned char mundo[10][256];

extern void so_entrada_teclado(void);
extern void personaje0_muniequitoEstatico(void);
extern void camara_inicializar(void);
extern void camara_actualizar_pantalla(void);