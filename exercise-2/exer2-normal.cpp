// Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un multiplo del segundo. 
#include <iostream>
using namespace std;

int main() { // Inicializacion de las variables a usar
	int primerValor;
	int segundoValor;
	int esMultiplo;

	cout << "Escriba dos numeros enteros..." << endl;
	cout << "Para comprobar si el primer valor, es multiplo del segundo." << endl;
		cout << "Valor Nro.1 : ";
		cin >> primerValor;
		
		cout << "Valor Nro.2 : ";
		cin >> segundoValor;

	cout << endl << "Tomando los dos numeros: ";
    cout << primerValor << " y " << segundoValor << endl;
	// Impresion de los 2 numeros

    if (primerValor % segundoValor == 0)
    cout << primerValor << " SI es multiplo de " << segundoValor << endl;
    else
    cout << primerValor << " NO es multiplo de " << segundoValor << endl;
    // Proposito principal del programa
	
	return 0;
}