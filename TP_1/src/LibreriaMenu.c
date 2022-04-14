/*
 * LibreriaMenu.c
 *
 *  Created on: 7 abr. 2022
 *      Author: 54116
 */
#include <stdio.h>
#include <stdlib.h>
#include "LibreriaCalculos.h"
#include "LibreriaPedidoDatos.h"
void MenuUno(){
	int opcionReal, verificadorCalculo;
	float kilometrosReal, aerolineasReal, latamReal;
	float precioDebitoLatam, precioDebitoAerolineas;
	float precioCreditoAerolineas,precioCreditoLatam, bitcoinLatam, bitcoinAerolineas;
	float precioKilometroAerolineas, precioKilometroLatam, diferenciaPrecios;
	kilometrosReal=0;
	aerolineasReal=0;
	latamReal=0;
	verificadorCalculo=0;


	do{
			printf("1. Ingresar Kilometros: " "km= %.2f \n" ,kilometrosReal);
			printf("2. Ingresar Precio De Vuelos: (Aerolineas= $ %.2f" ", Latam= $ %.2f) \n",aerolineasReal,latamReal);
			printf("3. Calcular todos los costos: \n");
			printf("4. Informar Resultados \n");
			printf("5. Carga forzada de datos \n");
			printf("6. Salir \n");

			getInt("\n Ingrese una opcion: ",1,1,6,"ERROR, Ingrese una opcion valida.",&opcionReal);

	switch(opcionReal)
	{
	case 1:
		getFloat("Ingrese los kilometros: ",5,0,100000,"ERROR, Ingrese la cantidad de kms.\n",&kilometrosReal);
		printf("Ingresaste: %.2f" "Kms \n \n ",kilometrosReal);
	break;
	case 2:
		getFloat("\nIngrese el precio de Aerolineas: ",5,0,1000000,"ERROR, Ingrese un precio valido mayor a $0.\n",&aerolineasReal);
		printf("Ingresaste: $ %.2f \n" ,aerolineasReal);
		getFloat("\nIngrese el precio de Latam: ",5,0,1000000,"ERROR, Ingrese un precio valido mayor a $0.\n",&latamReal);
		printf("Ingresaste: $ %.2f \n \n" ,latamReal);
		break;
	case 3:
		if(aerolineasReal <= 0 || latamReal <= 0){
			printf("ERROR, no ingresaste vuelos \n \n");
		}
		else
		{
		verificadorCalculo=1;
		precioDebitoAerolineas=descuento10(aerolineasReal);
		precioDebitoLatam=descuento10(latamReal);
		precioCreditoAerolineas=interes25(aerolineasReal);
		precioCreditoLatam=interes25(latamReal);
		bitcoinLatam=bitcoin(latamReal);
		bitcoinAerolineas=bitcoin(aerolineasReal);
		precioKilometroAerolineas=precioPorKM(aerolineasReal, kilometrosReal);
		precioKilometroLatam=precioPorKM(latamReal, kilometrosReal);
		diferenciaPrecios=diferencia(aerolineasReal, latamReal);
		}
		break;
	case 4:
		if(verificadorCalculo <= 0)
		{
			printf("ERROR, primero debes realizar los calculos con la opcion 3 !!!!! \n \n");
		}
		else
		{
		if(aerolineasReal <= 0 || latamReal <= 0)
		{
		printf("ERROR, no ingresaste vuelos \n \n");
		}
		else
		{
		printf("\nKMS Ingresados: %2.f \n \n",kilometrosReal);
		printf("Precio Aerolineas: $ %.2f \n",aerolineasReal);
		printf("a) Precio con tarjeta de debito: $ %.2f \n",precioDebitoAerolineas);
		printf("b) Precio con tarjeta de credito: $ %.2f \n",precioCreditoAerolineas);
		printf("c) Precio pagando con bitcoin: %.2f BTC \n",bitcoinAerolineas);
		printf("d) Mostrar precio unitario: $ %.2f \n \n",precioKilometroAerolineas);

		printf("Precio Latam: $ %f \n",latamReal);
		printf("a) Precio con tarjeta de debito: $ %.2f \n",precioDebitoLatam);
		printf("b) Precio con tarjeta de credito: $ %.2f \n",precioCreditoLatam);
		printf("c) Precio pagando con bitcoin: %.2f BTC \n",bitcoinLatam);
		printf("d) Mostrar precio unitario: $ %.2f \n \n",precioKilometroLatam);
		printf("La diferencia de precio es: $ %.2f \n \n \n",diferenciaPrecios);
		}
		}
		break;
	case 5:
		kilometrosReal=7090;
		latamReal=159339;
		aerolineasReal=162965;
		break;
	case 6:
		break;
	default:
		printf("La opcion que ingresaste es incorrecta.");
	}
} while(opcionReal!=6);

}


