/*
 * LibreriaPedidoDatos.c
 *
 *  Created on: 7 abr. 2022
 *      Author: 54116
 */
#include "LibreriaMenu.h"

#include <stdio.h>
#include <stdlib.h>
int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado){
			int retorno = -1; // como si saliera todo mal
			int auxiliarInt; //buffer
			int retornoScanf;
			// revisar que todos los datos esten bien
			if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroIngresado != NULL && reintentos > 0)
			{
				printf("%s",mensaje);
				retornoScanf = scanf("%d",&auxiliarInt);
				do{
					if(retornoScanf != 1 || auxiliarInt > maximo || auxiliarInt < minimo)
					{
						printf("%s",mensajeError);
						retornoScanf = scanf("%d",&auxiliarInt);
						reintentos--;
					}
					else
					{
						reintentos=0;
						*pNumeroIngresado = auxiliarInt;
						retorno=0;
					}
				}while(reintentos>0);

			}
			return retorno;
}

int getFloat(char mensaje[], float reintentos, float minimo, float maximo, char mensajeError[], float *pNumeroFlotante)
{
		float retorno = -1; // como si saliera todo mal
		float auxiliarFloat; //buffer
		float retornoScanf;
		// revisar que todos los datos esten bien
		if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroFlotante != NULL && reintentos > 0)
		{
			printf("%s",mensaje);
			retornoScanf = scanf("%f",&auxiliarFloat);
			do{
				if(retornoScanf != 1 || auxiliarFloat > maximo || auxiliarFloat < minimo)
				{
					printf("%s",mensajeError);
					retornoScanf = scanf("%f",&auxiliarFloat);
					reintentos--;
				}
				else
				{
					reintentos=0;
					*pNumeroFlotante = auxiliarFloat;
					retorno=0;
				}
			}while(reintentos>0);

		}
		return retorno;
}
