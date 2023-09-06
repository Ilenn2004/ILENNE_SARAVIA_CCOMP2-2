//2.23 (Largest and Smallest Integers)

#include <iostream>

using namespace std;

int main() {
	int n1;
	int n2;
	int n3;
	int n4;
	int n5;
	
	cout << "Ingrese el 1er entero: ";
	cin >> n1;
	cout << "Ingrese el 2do entero: ";
	cin >> n2;
	cout << "Ingrese el 3er entero: ";
	cin >> n3;
	cout << "Ingrese el 4to entero: ";
	cin >> n4;
	cout << "Ingrese el 5to entero: ";
	cin >> n5;
	
	//entero mayor	
	int mayor = n1;
	
	if (n2 > mayor) {
		mayor = n2;
	}
	
	if (n3 > mayor) {
		mayor = n3;
	}
	
	if (n4 > mayor) {
		mayor = n4;
	}
	
	if (n5 > mayor) {
		mayor = n5;
	}
	
	cout << mayor << " es el entero mas grande de entre los 5." << endl;

	
	//entero menor
	int menor = n1;
	
	if (n2 < menor) {
		menor = n2;
	}
	
	if (n3 < menor) {
		menor = n3;
	}
	
	if (n4 < menor) {
		menor = n4;
	}
	
	if (n5 < menor) {
		menor = n5;
	}
	
	cout << menor << " es el entero mas pequeno de entre los 5." << endl;

	
	return 0;
}
