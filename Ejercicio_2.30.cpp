//2.30 (Body Mass Calculator)

#include <iostream>

using namespace std;

int main() {
	float peso;
	float talla;
	float bmi;
	
	cout << "Ingrese su peso en kilogramos: ";
	cin >> peso;
	cout << "Ingrese su talla en metros: ";
	cin >> talla;
	
	bmi = (peso)/(talla*talla);
	cout << "Su BMI es de " << bmi << endl;
	
	cout << "Asimismo, deberia considerar los valores establecidos\ninternacionalmente para esta medicion:" << endl;
	cout << "BMI VALORES" << endl;
	cout << "Bajo peso:\tmenor a 18.5" << endl;
	cout << "Peso normal:\tentre 18.5 y 24.9" << endl;
	cout << "Sobrepeso:\tentre 25 y 29.9" << endl;
	cout << "Obesidad:\tmayor a 30" << endl;
	
	return 0;
}
