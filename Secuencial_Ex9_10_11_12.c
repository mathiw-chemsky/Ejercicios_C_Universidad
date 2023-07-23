// Ejercicios 9, 10 y 11  en C UV
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	 float compra1, total, pesos, dolares, conversion;
	 float inversion1, inversion2, inversion3, inversionTotal, porcentaje1, porcentaje2, porcentaje3;
	 char porciento = '%';
	
	// Ejercicio 9: mostrar el total a pagar en una tienda que tiene una oferta de 15% de descuento por cada compra
	// version 9.1: 15% en cada compra (osea cada ida a la tienda)
	
	printf("Ingresa la cantidad de la compra realizada. \n");
	scanf("%f", &compra1);
	total = compra1 - (compra1*.15);
	printf("El total de la compra con el 15 porciento de descuento es de: %f \n", total);
	printf("-------------------------------------------------------------------------------------------------- \n");

	// Ejercicio 10: pedir una cantidad de pesos y el tipo de cambio a dólares para realizar la conversión correspondiente
	printf("Ingresa la cantidad de pesos que desea cambiar \n");
	scanf("%f", &pesos);
	printf("Ahora ingresa el tipo de cambio actual de pesos a dolares \n");
	scanf("%f", &conversion);
	dolares = pesos * conversion;
	printf("La cantidad de dolares intercambiables es de: %f \n", dolares);
	printf("-------------------------------------------------------------------------------------------------- \n");

	/*Ejercicio 11: tres personas deciden invertir su dinero para formar una empresa. Cada una de ellas invierta una cantidad
	distinta. Hacer un algoritmo que imprimaa el porcentaje que cada uno invierte con respecto al total de la inversión	*/
	printf("Ingrese la cantidad de la primera inversion: \n");
	scanf("%f", &inversion1);
	printf("Ahora ingrese la cantidad de la segunda inversion: \n");
	scanf("%f", &inversion2);
	printf("Por ultimo ingrese la cantidad de la tercera inversion: \n");
	scanf("%f", &inversion3);
	inversionTotal = inversion1 + inversion2 + inversion3;
	porcentaje1 = inversion1 / inversionTotal*100;
	porcentaje2 = inversion2 / inversionTotal*100;
	porcentaje3 = inversion3 / inversionTotal*100;
	printf("El porcentaje de inversion de la primera persona es de: %.2f%c \n", porcentaje1, porciento);
	printf("El porcentaje de inversion de la segunda persona es de: %.2f%c \n", porcentaje2, porciento);
	printf("El porcentaje de inversion de la tercera persona es de: %.2f%c \n", porcentaje3, porciento);
	printf("-------------------------------------------------------------------------------------------------- \n");

	return 0;
}
