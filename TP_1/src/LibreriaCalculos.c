/*
 * LibreriaCalculos.c
 *
 *  Created on: 7 abr. 2022
 *      Author: 54116
 */
#include "LibreriaMenu.h"


float descuento10(float precio)
{
	float rtn;
	float descuento;
	descuento=precio*0.10;
	rtn=precio-descuento;
	return rtn;
}
float interes25(float precio)
{
	float rtn;
	float interes;
	interes=precio*1.25;
	rtn=interes;
	return rtn;
}

float bitcoin(float precio)
{
	float rtn;
	float bitcoin;
	bitcoin=4606954.55;
	rtn=precio/bitcoin;
	return rtn;
}
float precioPorKM(float precio, float kilometros)
{
	float rtn;
	if(kilometros <= 0)
	{
		rtn=0;
	}
	else
	{
	rtn=precio/kilometros;
	}
	return rtn;

}

float diferencia(float num1, float num2)
{
	float rtn;
	if(num1>num2)
	{
		rtn=num1-num2;
	}
	else
	{
		rtn=num2-num1;
	}
	return rtn;
}


