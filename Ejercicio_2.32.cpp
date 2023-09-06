//2.32 (Maximal Heart Rate Calculator)

#include <iostream>

using namespace std;

int main() {
	int edad;
	
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	int mhr[4];

	mhr[0] = 220 - edad;
	mhr[1] = 208 - 0.7*edad;
	mhr[2] = 207 - 0.7*edad;
	mhr[3] = 207 - 0.64*edad;
	
	cout << "Frecuencia cardiaca maxima por formulas:" << endl;
	cout << "MHR First\t: " << mhr[0]  << endl;
	cout << "MHR Tanaka-2001\t: " << mhr[1]  << endl;
	cout << "MHR Gellish-2007: " << mhr[2]  << endl;
	cout << "MHR Nes-2012\t: " << mhr[3]  << endl;
	
	int min = 99999;
	int max = 0;
	
	for (int i = 0;i < 4; i++) {
		if (min > mhr[i]) {
    		min = mhr[i];
    	}
	}
	
	for (int i = 0;i < 4; i++) {
		if (max < mhr[i]) {
    		max = mhr[i];
    	}
	}

	cout << "MHR maximo recomendado es: " << max <<endl;
	cout << "MHR minimo recomendado es: " << min <<endl;

	return 0;
}
