#include "funciones.h"

float PedirFlotante(void) {
	float flotante;
	printf("Ingrese un numero\n");
	scanf("%f", &flotante);
	return flotante;
}

int EsEntero(float unNumero) {
	int EsEntero;
	int auxiliar;
	float validacion;
	EsEntero = 1;
	auxiliar = unNumero;
	auxiliar = (int) auxiliar;
	validacion = unNumero - auxiliar;
	if (validacion > 0) {
		EsEntero = 0;
	}
	return EsEntero;
}
