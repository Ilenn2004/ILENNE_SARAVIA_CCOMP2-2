//2.28 (Digits of an Integer)

#include <iostream>

using namespace std;

int main() {
	int n1;
	
	cout << "Ingrese un numero de 4 digitos: ";
	cin >> n1;
	
	int n11 = (n1/1000) % 10;
	int n12 = (n1/100) % 10;
	int n13 = (n1/10) % 10;
	int n14 = n1 % 10;
	
	cout << n14 << "  " << n13 << "  " << n12 << "  " << n11;	
	
	return 0;
}
