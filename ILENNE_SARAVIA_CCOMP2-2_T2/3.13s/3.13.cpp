#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int counter = 1;
void displayAccount(Account accountToDisplay) {
        cout << "Account"<< counter++ <<": El saldo de " << accountToDisplay.getFirstName() << " es de S/." << accountToDisplay.getBalance() << endl;
    }

int main()  {

    Account account1(123, "Jane", "Green", 50);
    Account account2(234, "John", "Blue", -7);
    Account account3(345,"Ilenne", "Saravia", 15);

    displayAccount(account1);
    displayAccount(account2);
    displayAccount(account3);

    counter = 1;
    account1.deposit(200);
    account2.deposit (10000);

	cout << "-------------------" << endl << "Actualizacion: " <<endl;
    displayAccount(account1);
    displayAccount(account2);
    displayAccount(account3);

    return 0;
}
