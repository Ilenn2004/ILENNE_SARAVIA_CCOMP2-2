#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int mm, int dd, int yyyy) :
        month(mm),
        day(dd),
        year(yyyy)
    {};

    void setMonth(int mm) {
        if (1 <= mm && mm <= 12) {
            month = mm;
        } else {
            cout << "Valor de mes inválido. Se estableció a 1." << endl;
            month = 1;
        }
    }

    void setDay(int dd) {
        if (1 <= dd && dd <= 31) {
            day = dd;
        } else {
            cout << "Valor de día inválido. Se estableció a 1." << endl;
            day = 1;
        }
    }

    void setYear(int yyyy) {
        if (yyyy >= 0) {
            year = yyyy;
        } else {
            cout << "Valor de año inválido. Se estableció a 0." << endl;
            year = 0;
        }
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }
};

