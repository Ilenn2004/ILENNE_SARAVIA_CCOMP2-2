//2.27 (Integer Equivalent of a Character)

#include <iostream>

using namespace std;

int main() {
	char c1;
	
	cout << "Ingrese cualquier letra, numero o simbolo: ";
	cin >> c1;
	
	cout << "Su equivalencia en numeros enteros (ASCII) es " << static_cast <int>(c1);
	
	return 0;
}
