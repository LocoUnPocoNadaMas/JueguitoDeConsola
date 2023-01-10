#include "niveles.h"

void cargar_nivel()//(int *nivelActual)
{
	//mundo 
	
		
	//wchar_t letra;
	unsigned char letra;

	if (fopen_s(&pNivel, "level1++.txt", "r") == 0)// , ccs = UTF - 16LE"); //Solo lectura
	{
		/*fread(nivel, sizeof(wchar_t), 1, pNivel);
		while (!feof(pNivel))
		{
			//fputwc(pNivel);
			//fputws(palabras[i], stdout);
			//fputs(nivel, pNivel);
			//scanf("%s", nivel);
			//wprintf(L"%c", getwc(pNivel));		/* obtiene un caracter del archivo *//* lo despliega en pantalla y continua... */
			//printf("%wc ", getwc(pNivel));
			//fwprintf(pNivel, L"%c");
		//}
		//wprintf(L"%c",204);
		if (pNivel)
		{
			/*for (int i = 0; i <= 9; i++)
			{
				for (int j = 0; j <= 255; j++)
				{
					//wprintf("%c", nivel[i][j]);
				}
				printf("\n");
			}*/
			while (!feof(pNivel))					// hasta encontrar EOF (el final del archivo)
			{

				printf("%c", getc(pNivel));		// Obtiene un caracter del archivo *//* Lo despliega en pantalla y continua... 
				_getch();
			}
			fclose(pNivel);
			
			/*
			while ((letra = getc(pNivel)) != EOF)
				printf("%c", letra);

			if (errno == EILSEQ)
			{
				printf("An invalid wide character was encountered.\n");
				exit(1);
			}*/
		}
		else
		{
			printf("No se pudo abrir el archivo");							
		}
	}
}