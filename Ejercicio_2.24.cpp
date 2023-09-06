//2.24 (Odd or Even)

#include <iostream>

using namespace std;

int main() {
	int n1;
	int n2;
	int sum;
	
	cout << "Ingrese un 1er numero: "<< endl;
	cin >> n1;
	
	cout << "Ingrese un 2do numero: "<< endl;
	cin >> n2;
	
	sum = n1 + n2;
	
	//impar o par
	if (n1%2 == 0) {
		cout << "El primer numero("<< n1 << ") es par."<< endl;
	}
	else{
		cout << "El primer numero("<< n1 << ") es impar."<< endl;
	}
	
	
	if (n2%2 == 0) {
		cout << "El segundo numero("<< n2 << ") es par."<< endl;
	}
	else{
		cout << "El segundo numero("<< n2 << ") es impar."<< endl;
	}
	
	if (sum%2 == 0) {
		cout << "La suma de los 2 numeros es "<< sum << ", es par."<< endl;
	}
	else{
		cout << "La suma de los 2 numeros es "<< sum << ", es impar."<< endl;
	}
	
	return 0;
}
