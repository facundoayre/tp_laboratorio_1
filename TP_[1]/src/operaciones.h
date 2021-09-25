
#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#include <stdio.h>
#include <stdlib.h>
#endif /* OPERACIONES_H_ */

/// @fn float SumarValores(float, float)
/// @brief recibe dos flotantes y realiza la suma de los mismos
///
/// @param primerNumero primer flotante que recibe
/// @param segundoNumero segundo flotante que recibe
/// @return retorna la suma de los dos flotantes que se le pasaron como parametros
float SumarValores(float primerNumero, float segundoNumero);

/// @fn float RestarValores(float, float)
/// @brief recibe dos flotantes y realiza la resta de los mismos
///
/// @param primerNumero flotante que recibe
/// @param segundoNumero flotante que recibe
/// @return retorna la resta de los dos flotantes que se le pasaron como parametros
float RestarValores(float primerNumero, float segundoNumero);

/// @fn float MultiplicarValores(float, float)
/// @brief recibe dos flotantes y realiza la multiplicacion de los mismos
///
/// @param primerNumero flotante que recibe
/// @param segundoNumero flotante que recibe
/// @return retorna la multiplicacion de los dos flotantes que se le pasaron como parametros
float MultiplicarValores(float primerNumero, float segundoNumero);

/// @fn float DividirValores(float, float)
/// @brief recibe dos flotantes y realiza la division de los mismos
///
/// @param primerNumero flotante que recibe
/// @param segundoNumero flotante que recibe
/// @return retorna la division de los dos flotantes que se le pasaron como parametros
float DividirValores(float primerNumero, float segundoNumero);

/// @fn int FactorialValores(float)
/// @brief recibe un valor y realiza su factorial
///
/// @param unNumero valor que recibe
/// @return retorna el factorial del numero recibido
int FactorialValores(float unNumero);
