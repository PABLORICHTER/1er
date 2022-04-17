/*
 * entrada.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Ricter
 */

#ifndef ENTRADA_H_
#define ENTRADA_H_

/// VALIDA NUMERO ENTERO
///
/// @pre
/// @post
/// @param pNumero
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @param reintentos
/// @return retorna 0 si salio todo bien, -1 si salio todo mal

int ingresarNumero(int* pNumero, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);


/// VALIDA NUMERO FLOTANTE
///
/// @pre
/// @post
/// @param pNumero
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @param reintentos
/// @return 0 SI SALIO TODO BIEN, -1 SI SALIO ALGO MAL

int ingresarFlotante(float* pNumero, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

#endif /* ENTRADA_H_ */
