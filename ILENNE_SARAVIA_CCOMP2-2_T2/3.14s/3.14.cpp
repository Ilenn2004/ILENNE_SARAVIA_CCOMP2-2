#include <iostream>
#include "Account.h"

using namespace std;

int main() {
	Account myAccount(23456,"Ilenne","Saravia",25000);//Statement

    cout << "Account Number : " << myAccount.getAccountNumber() << endl;
    cout << "First Name     : " << myAccount.getFirstName() << endl;
    cout << "Last Name      : " << myAccount.getLastName() << endl;
    cout << "Balance        : " << myAccount.getBalance() << endl;
	
	
	return 0;
}
