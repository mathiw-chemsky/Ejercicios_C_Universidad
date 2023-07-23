// Secuencial: ej.1,2,3,4  (Saludo, Solicitud de  nombre y saludo, calcular suma de 2 numeros enteros dados
// imprimir el nuevo sueldo de un empleado que tuvo un aumento del 10%

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nombre[30];
	int num1, num2, resultado;
	float sueldo1, sueldo2;
	
	//Ejercicio 1
	printf("Hola mundo!! \n");
	printf("---------------------------------------------------------------------------------\n");
	
	//Ejercicio 2
	printf("Ingrese su nombre completo: \n");
	fgets(nombre, 30, stdin); //Recordar que se usa fgets para cadenas completas con espacios (variable, extención, stdin)
	printf("Saludos %s \n", nombre);
	printf("---------------------------------------------------------------------------------\n");

	//Ejercicio 3
	printf("Ingrese los dos números enteros que desea sumar: \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	resultado = num1 + num2;
	printf("El resultado de la suma de los dos números enteros es: %d \n", resultado);
	printf("---------------------------------------------------------------------------------\n");

	//Ejercicio 4 Imprimir el sueldo de un empleado que tuvo un aumento del 10%
	printf("Ahora ingresa el sueldo anterior del empleado. \n");
	scanf("%f", &sueldo1);
	sueldo2 = sueldo1 + (sueldo1*.1);
	printf("El nuevo sueldo del empleado es de: %f \n", sueldo2);
	printf("---------------------------------------------------------------------------------\n");


	return 0;
}
