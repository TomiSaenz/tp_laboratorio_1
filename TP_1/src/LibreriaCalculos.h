/*
 * LibreriaCalculos.h
 *
 *  Created on: 7 abr. 2022
 *      Author: 54116
 */

#ifndef LIBRERIACALCULOS_H_
#define LIBRERIACALCULOS_H_
#include "LibreriaMenu.h"

/// @fn float descuento10(float)
/// Usamos esta funcion para aplicar un 10% de descuento fijo
///
/// @pre
/// @post
/// @param Como parametro introducimos el precio al que le queremos realizar dicho descuento
/// @return Devuelve el precio con el descuento
float descuento10(float precio);

/// @fn float interes25(float)
/// @brief Usamos esta funcion para aplicar un aumento del 25% sobre el precio
///
/// @pre
/// @post
/// @param Precio a aumentar
/// @return Devuelve el precio con el aumento
float interes25(float precio);

/// @fn float bitcoin(float)
/// @brief Esta funcion hace la conversion de tu precio al valor de BTC
///
/// @pre
/// @post
/// @param precio
/// @return devuelve el precio ingresado en bitcoin.
float bitcoin(float precio);
/// @fn float precioPorKM(float, float)
/// @brief Esta funcion divide el precio total del vuelo por la cantidad de kilometros
///
/// @pre
/// @post
/// @param precio
/// @param kilometros
/// @return Devuelve el precio por KM
float precioPorKM(float precio, float kilometros);
/// @fn float diferencia(float, float)
/// @brief Esta funcion hace la diferencia entre los dos precios de los vuelos ingresados
///
/// @pre
/// @post
/// @param num1
/// @param num2
/// @return Devueve la dif de precio.
float diferencia(float num1, float num2);
#endif /* LIBRERIACALCULOS_H_ */
