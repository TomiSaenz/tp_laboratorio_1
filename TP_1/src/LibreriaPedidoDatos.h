/*
 * LibreriaPedidoDatos.h
 *
 *  Created on: 7 abr. 2022
 *      Author: 54116
 */

#ifndef LIBRERIAPEDIDODATOS_H_
#define LIBRERIAPEDIDODATOS_H_
#include "LibreriaMenu.h"

/// @fn int getInt(char[], int, int, int, char[], int*)
/// @brief Esta funcion es para ingresar un numero entero con ciertos parametros
///
/// @pre
/// @post
/// @param mensaje
/// @param reintentos
/// @param minimo
/// @param maximo
/// @param mensajeError
/// @param pNumeroIngresado
/// @return devuelve el numero entero
int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);
/// @fn int getFloat(char[], int, float, float, char[], float*)
/// @brief Esta funcion es para ingresar un numero Flotante entre ciertos parametros
///
/// @pre
/// @post
/// @param mensaje
/// @param reintentos
/// @param minimo
/// @param maximo
/// @param mensajeError
/// @param pNumeroIngresado
/// @return Devuelve un numero flotante
int getFloat(char mensaje[], int reintentos, float minimo, float maximo, char mensajeError[], float *pNumeroIngresado);



#endif /* LIBRERIAPEDIDODATOS_H_ */
