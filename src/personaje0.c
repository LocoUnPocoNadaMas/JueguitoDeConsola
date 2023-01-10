#include "personaje0.h"

void personaje0_muniequitoEstatico(void)
{
	int muniequito_aux[3][5] = { 40, 250, 95, 250, 41, 60, 124, 124, 62, 32, 32, 47, 92, 32, 32 };

	for (int i = 0; i < ALTURA; i++)
	{
		for (int j = 0; j < OBESIDAD; j++)
		{
			personaje.muniequito[i][j]=muniequito_aux[i][j];
			//printf("%c", muniequito[i][j]);
		}
		printf("\n");
	}

	/*
	wprintf(L"%c%c%c%c%c\n", 40, 250, 95, 250, 41);		// (·_·)
	wprintf(L"%c%c%c%c\n", 60, 124, 124, 62);			// <||>
	wprintf(L"%c%c%c\n", 32, 47, 92);					//  /\
	*/
}

void personaje0_muniequitoCaminando0(void)
{
	char muniequito_aux[3][5] = { 40, 250, 95, 250, 41, 47, 124, 124, 96, 250, 32, 47, 62, 32, 32 };

	for (int i = 0; i < ALTURA; i++)
	{
		for (int j = 0; j < OBESIDAD; j++)
		{
			personaje.muniequito[i][j]=muniequito_aux[i][j];
			//printf("%c", muniequito[i][j]);
		}
		printf("\n");
	}

	/*
	wprintf(L"%c%c%c%c%c\n", 40, 250, 95, 250, 41);		// (·_·)
	wprintf(L"%c%c%c%c\n", 47, 124, 124, 96, 250);		// /||`·
	wprintf(L"%c%c%c\n", 32, 47, 62);					//  />
	*/
}

void personaje0_muniequitoCaminando1(void)
{
	char muniequito_aux[3][5] = { 40, 250, 95, 250, 41, 60, 124, 124, 92, 32, 32, 62, 92, 32, 32 };

	for (int i = 0; i < ALTURA; i++)
	{
		for (int j = 0; j < OBESIDAD; j++)
		{
			personaje.muniequito[i][j]=muniequito_aux[i][j];
			//printf("%c", muniequito[i][j]);
		}
		printf("\n");
	}

	/*
	wprintf(L"%c%c%c%c%c\n", 40, 250, 95, 250, 41);		// (·_·)
	wprintf(L"%c%c%c%c\n", 60, 124, 124, 92);			// <||\
	wprintf(L"%c%c%c\n", 32, 62, 92);					//  >\
	*/
}

void personaje0_muniequitoTrabado(void)
{
	char muniequito_aux[3][5] = { 40, 250, 95, 250, 41, 126, 124, 124, 62, 32, 32, 47, 124, 32, 32 };

	for (int i = 0; i < ALTURA; i++)
	{
		for (int j = 0; j < OBESIDAD; j++)
		{
			personaje.muniequito[i][j]=muniequito_aux[i][j];
			//printf("%c", muniequito[i][j]);
		}
		printf("\n");
	}

	/*
	wprintf(L"%c%c%c%c%c\n", 40, 250, 95, 250, 41);		// (·_·)
	wprintf(L"%c%c%c%c\n", 126, 124, 124, 62);			// ~||>
	wprintf(L"%c%c%c\n", 32, 47, 124);					//  /|
	*/
}

void personaje0_muniequitoSaltando0(void)
{
	char muniequito_aux[3][5] = { 40, 250, 95, 250, 41, 
		96, 124, 124, 45, 239, 
		32, 62, 62, 32, 32 };

	for (int i = 0; i < ALTURA; i++)
	{
		for (int j = 0; j < OBESIDAD; j++)
		{
			personaje.muniequito[i][j] = muniequito_aux[i][j];
			//printf("%c", muniequito[i][j]);
		}
		printf("\n");
	}

	/*
	wprintf(L"%c%c%c%c%c\n", 40, 250, 95, 250, 41);		// (·_·)
	wprintf(L"%c%c%c%c\n", 96, 124, 124, 45, 23);		// `||-´
	wprintf(L"%c%c%c\n", 32, 62, 62);					//  >>
	*/
}

void personaje0_muniequitoSaltando1(void)
{
	char muniequito_aux[3][5] = { 40, 250, 95, 250, 41,
		96, 124, 124, 45, 239,
		32, 62, 62, 32, 32 };

	for (int i = 0; i < ALTURA; i++)
	{
		for (int j = 0; j < OBESIDAD; j++)
		{
			personaje.muniequito[i][j] = muniequito_aux[i][j];
			//printf("%c", muniequito[i][j]);
		}
		printf("\n");
	}

	/*
	wprintf(L"%c%c%c%c%c\n", 40, 250, 95, 250, 41);		// (·_·)
	wprintf(L"%c%c%c%c\n", 96, 124, 124, 45, 23);		// `||-´
	wprintf(L"%c%c%c\n", 32, 62, 62);					//  >>
	*/
}
