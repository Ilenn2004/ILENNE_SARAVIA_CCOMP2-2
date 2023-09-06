//2.25 (Factors)

#include <iostream>

using namespace std;

int main() {
	int n1;
	int n2;
	int n3;
	
	cout << "Ingrese un primer numero: "<< endl;
	cin >> n1;
	
	cout << "Ingrese un segundo numero: "<< endl;
	cin >> n2;
	
	cout << "Ingrese un tercer numero: "<< endl;
	cin >> n3;
	
	//factores
	if (n3%n1 == 0) {
		cout << n1 <<" es un factor de "<< n3 << endl;
	}
	else {
		cout << n1 << " no es un factor de "<< n3 << endl;
	}
	
	if (n3%n2 == 0) {
		cout << n2 <<" es un factor de "<< n3 << endl;
	}
	else {
		cout << n2 << " no es un factor de "<< n3 << endl;
	}
	
	
	return 0;
}
