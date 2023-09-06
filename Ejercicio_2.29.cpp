//2.29 (Table)

#include <iostream>

using namespace std;

int main() {
	int lado[] = {0,1,2,3,4};
	
	cout << "Face length\t\tSurface area\t\tVolume"<< endl;
	cout << "of cube (cm)\t\tof cube (cm^2)\t\tof cube (cm^3)"<< endl;
	
	for (int i = 0; i < 5; i++) {
        cout << lado[i] << "\t\t\t" << lado[i] * lado[i] << "\t\t\t" << lado[i] * lado[i] * lado[i] << endl;
    }
	
	return 0;
}
