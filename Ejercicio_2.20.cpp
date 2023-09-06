//2.20 (Diameter, Circumference and Area of a Circle)

#include <iostream>

using namespace std;

int main() {
	int radio;
	int diametro;
	int circunferencia;
	int area;	
	
	cout << "Ingrese el radio del circulo: ";
	cin >> radio;
	
	diametro = 2 * radio;
	cout << "Diametro\t:" << diametro << endl;
	
	circunferencia = 2 * 3.14159 * radio;
	cout << "Circunferencia\t:" << circunferencia << endl;
	
	area = 3.14159 * radio * radio;
	cout << "Area\t\t:" << area << endl;
	
	return 0;
}
