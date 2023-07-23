// Ejercicios secuenciales: 5, 6, 7, 8
#include <stdio.h>
#include <stdlib.h>

int main(){

	int edad1, edad2, edad3;
	float promedio, base, altura, area, lado, ancho, perimetro, num1, num2, comodin;

	//Ejercicio 5: Calcular el promedio de las edades de 3 personas ingresadas
	printf("Ingrese las edades de cada uno de los 3 personajes. \n");
	scanf("%d %d %d", &edad1, &edad2, &edad3);
	promedio = (edad1+edad2+edad3)/3;
	printf("El promedio de edad es de: %f \n", promedio);
	printf("-------------------------------------------------------------------------------------\n");

	//Ejercicio 6: Calcular el área de un tríangulo
	printf("Ingrese la medida de la base del triangulo. \n");
	scanf("%f", &base);
	printf("Ahora ingrese la altura del triangulo. \n");
	scanf("%f", &altura);
	area = (base*altura)/2;
	printf("El area de su triangulo es de: %f \n", area);
	printf("-------------------------------------------------------------------------------------\n");

	//Ejercicio 7: calcular e imprimir el perímetro de un rectangulo
	printf("Ingrese el lado y ancho del rectangulo: \n");
	scanf("%f %f", &lado, &ancho);
	perimetro = lado*2 + ancho*2;
	printf("El perímetro de su rectángulo es de: %f \n", perimetro);
	printf("-------------------------------------------------------------------------------------\n");

	//Ejercicio 8: pedir 2 num e intercambiarlos de variable
	printf("Escriba el numero 1: \n");
	scanf("%f", &num1);
	printf("Ahora ingrese el numero 2: \n");
	scanf("%f", &num2);
	comodin = num2;
	num2 = num1;
	num1 = comodin;
	printf("Los valores de sus números intercambiados son: %f %f \n", num1, num2);
	printf("-------------------------------------------------------------------------------------\n");


	return 0;
}
