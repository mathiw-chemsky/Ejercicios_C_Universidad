//Prueba de c++ con vim desde terminal
#include <iostream>
using namespace std;

int main(){
	int edad;
	int edad_productivo;
	int vida_total;
	int vida_productiva;
	int vida_disfrute;

	cout << "Hola mundillo. Ingresa tu edad." << endl;
     	cin >> edad;
	cout << "Ahora ingresa la edad en la que vas a empezar a trabajar." << endl;
	cin >> edad_productivo;
	vida_total = 80 - edad;
	vida_productiva = edad_productivo + 35;
	vida_disfrute = 80 - vida_productiva;
	cout << "La vida en años que te queda es de: " << vida_total << endl;
	cout << "La edad en la que vas a terminar de trabajar es de: " << vida_productiva << endl;
	cout << "Los años que vas a disfrutar de retiro seran: " << vida_disfrute << endl;
	cout << "Adios."<< endl;

	return 0;
}	
