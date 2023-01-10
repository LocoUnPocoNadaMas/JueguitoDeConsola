#include "windows.h"

void so_entrada_teclado(void)
{
	int tecla = 0;
	bool i = true;

	do
	{
		//contador = 0;

		/*********************************
		*	consultar tiempo
		*********************************/
		//tecla = 0;
		/*while (contador < 5 || (tecla = _getch()) == 0)
		{
			contador++;
			printf("hi");
			delay(100);
			//system("cls");
			if(tecla) break;
		}*/

		tecla = _getch();
		controlador_teclado(tecla);
		/*********************************
		*	reiniciar contador de tiempo
		*********************************/

	} while (i == true);
}

void so_limpiar(void)
{
	system("cls");
}
