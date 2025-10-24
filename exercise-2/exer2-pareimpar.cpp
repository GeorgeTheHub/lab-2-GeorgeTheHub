// Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un multiplo del segundo. 
#include <iostream>
using namespace std;

int main() { // Inicializacion de variable
	int valorChecado;

	cout << "Escriba un unico numero, para saber si es par o impar." << endl;
		cin >> valorChecado;

	cout << endl << "Tomando en cuenta " << valorChecado << ", entonces, es " ;
	// Impresion de primera indicacion

    if (valorChecado % 2 == 0)
    cout << "un numero PAR." << endl;
    else
    cout << "un numero IMPAR." << endl;
    // Proposito principal del programa
    cout << "Gracias por probar." << endl;
	
	return 0;
}