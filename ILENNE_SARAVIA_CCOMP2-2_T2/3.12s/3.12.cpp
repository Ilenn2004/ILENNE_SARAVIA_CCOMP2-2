#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

void displayDate(const Date dateToDisplay) {
    cout << "La fecha ingresada es " << dateToDisplay.getMonth() << "/" << dateToDisplay.getDay() << "/" << dateToDisplay.getYear() << endl;
}

int main() {
    Date date1(4, 21, 2020);

    displayDate(date1);

    return 0;
}
