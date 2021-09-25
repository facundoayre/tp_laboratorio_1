/*
 ============================================================================
 Name        : Trabajo.c
 Author      : Facundo Ayre
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
 (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	float numeroUno;
	float numeroDos;
	float sumaValores;
	float restaValores;
	float multiplicacionValores;
	float divisionValores;
	int factorialX;
	int factorialY;
	int validacionEnteroX;
	int validacionEnteroY;
	int flagFactorialUno = 1;
	int flagFactorialDos = 1;
	int flagPrimerIngresoNumeroUno = 0;
	int flagPrimerIngresoNumeroDos = 0;
	int flagOperaciones = 0;
	if (flagPrimerIngresoNumeroUno == 0) {
		numeroUno = 0;
	}
	if (flagPrimerIngresoNumeroDos == 0) {
		numeroDos = 0;
	}

do {
	printf("\n1. Ingrese el primer operando (A=%f)\n", numeroUno);
	printf("2. Ingrese el segundo operando (B=%f)\n", numeroDos);
	printf("3. Calcular todas las operaciones\n");
	printf("4. Informar resultados\n");
	printf("5. Salir\n");
	printf("Elija una opcion: \n");
	scanf("%d", &opcion);
	printf(" \n\n");
	switch (opcion) {
		case 1:
		numeroUno = PedirFlotante();
		flagPrimerIngresoNumeroUno = 1;
		flagOperaciones = 0;
		break;
		case 2:
		numeroDos = PedirFlotante();
		flagPrimerIngresoNumeroDos = 1;
		flagOperaciones = 0;
		break;
		case 3:
		if (flagPrimerIngresoNumeroUno == 1
				&& flagPrimerIngresoNumeroDos == 1) {
			sumaValores = SumarValores(numeroUno, numeroDos);
			restaValores = RestarValores(numeroUno, numeroDos);
			multiplicacionValores = MultiplicarValores(numeroUno,
					numeroDos);
			divisionValores = DividirValores(numeroUno, numeroDos);
			validacionEnteroX = EsEntero(numeroUno);
			validacionEnteroY = EsEntero(numeroDos);

			if (validacionEnteroX == 0 || numeroUno <= 0) {
				flagFactorialUno = 0;
			} else {
				factorialX = FactorialValores(numeroUno);
			}
			if (validacionEnteroY == 0 || numeroDos <= 0) {
				flagFactorialDos = 0;

			} else {
				factorialY = FactorialValores(numeroDos);
			}
			flagOperaciones = 1;
		} else {
			printf("Se necesita el ingreso de ambos operandos\n");
		}
		break;
		case 4:
		if (flagOperaciones == 1) { //printf("El primer numero es: %f\n", numeroUno);
			//printf("El segundo numero es: %f\n", numeroDos);
			printf("El resultado de %f + %f es: %f\n", numeroUno, numeroDos,
					sumaValores);
			printf("El resultado de %f - %f es: %f\n", numeroUno, numeroDos,
					restaValores);
			printf("El resultado de %f * %f es: %f\n", numeroUno, numeroDos,
					multiplicacionValores);
			if (numeroDos != 0) {
				printf("El resultado de %f / %f es: %f\n", numeroUno,
						numeroDos, divisionValores);
			} else {
				printf("No se puede dividir por 0\n");
			}
			if (flagFactorialUno == 1) {
				printf("El factorial de %f es: %d\n", numeroUno,
						factorialX);
			} else {
				printf(
						"No se puede realizar el factorial de un numero con coma, negativo o cero\n");
			}
			if (flagFactorialDos == 1) {
				printf("El factorial de %f es: %d\n", numeroDos, factorialY);
			} else {
				printf(
						"No se puede realizar el factorial de un numero con coma, negativo o cero\n");
			}
		}
		else{
			printf("Primero se deben realizar las operaciones\n");
		}
	}

	}while (opcion != 5);

	return EXIT_SUCCESS;

}
