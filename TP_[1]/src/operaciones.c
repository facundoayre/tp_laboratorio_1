#include "operaciones.h"

float SumarValores(float primerNumero, float segundoNumero) {
	float resultadoSuma;
	resultadoSuma = primerNumero + segundoNumero;
	return resultadoSuma;
}

float RestarValores(float primerNumero, float segundoNumero) {
	float resultadoResta;
	resultadoResta = primerNumero - segundoNumero;
	return resultadoResta;
}

float MultiplicarValores(float primerNumero, float segundoNumero) {
	float resultadoMultiplicacion;
	resultadoMultiplicacion = primerNumero * segundoNumero;
	return resultadoMultiplicacion;
}

float DividirValores(float primerNumero, float segundoNumero) {
	float resultadoDivision;
	resultadoDivision = primerNumero / segundoNumero;
	return resultadoDivision;
}

int FactorialValores(float unNumero) {
	int factorial = 1;
	int numeroEntero = (int) unNumero;
	int auxiliar;

	for (auxiliar = numeroEntero; auxiliar > 1; auxiliar--) {
		factorial = factorial * auxiliar;
	}

	return factorial;
}
