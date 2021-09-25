#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>
#endif /* FUNCIONES_H_ */


/// @fn float PedirFlotante(void)
/// @brief Pide al usuario un numero y lo guarda como flotante
///
/// @return retorna un flotante
float PedirFlotante(void);

/// @fn int EsEntero(float)
/// @brief recibe un valor flotante y realiza una validacion para saber si en realidad es un entero
///
/// @param unNumero valor que recibe
/// @return retorna 0 o 1 dependiendo del resultado de la validacion
int EsEntero(float unNumero);
