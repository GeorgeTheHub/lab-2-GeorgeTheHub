// Escriba un programa que ingrese un número de cinco dígitos, divida el número en sus dígitos individuales
// e imprima los dígitos separados entre sí por tres espacios cada uno.
#include <iostream>
using namespace std;

int main() { // Inicializacion de las variables a usar
	int miArray [3];
	float suma;
	float promedio;
	float producto = 1;
	int numMenor;
	int numMayor;

	cout << "Suma, promedio, producto, numero menor y mayor." << endl;
	cout << "Por favor, escriba 3 numeros para empezar" << endl;
	for (int i = 0 ; i < 3 ; i++) {
		cout << "Numero [" << i+1 << "] : ";
		cin >> miArray [i];
	}
	
	numMenor = miArray[0];
	numMayor = miArray[0];

	cout << endl << "De la secuencia dada: " << endl;
	for (int i = 0; i < 3; i++)
	// Impresion de los 3 numeros
	{
	   cout << miArray[i] << " ";
	   suma = suma + miArray[i];
	   promedio = suma / 3;
	   producto *= miArray[i];
	    
	   // Se checa el numero menor
	   if (miArray[i] <= numMenor)
	   {
	   numMenor = miArray[i];
	   }
	   
	   // Se checa el numero mayor
	   if (miArray[i] >= numMayor)
	   {
	   numMayor = miArray[i];
	   }
    }

	cout << endl << endl << "La suma es: " << suma << endl;
	cout << "El promedio es: " << promedio << endl;
	cout << "El producto es: " << producto << endl;
	cout << "El mas pequeÃ±o es: " << numMenor << endl;
	cout << "El mas grande es: " << numMayor << endl;
	
	return 0;
}