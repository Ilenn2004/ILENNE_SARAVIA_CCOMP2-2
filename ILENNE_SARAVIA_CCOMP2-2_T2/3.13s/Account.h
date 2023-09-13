#include <iostream>
#include <string>

using namespace std;

class Account {
     private:
        int accountNumber;
        string firstName;
        string lastName;
        double balance;
     public:
       Account(int aa, string bb, string cc, double dd) : 
            accountNumber(aa), 
            firstName(bb), 
            lastName(cc), 
            balance(dd)
		{
			if (dd > 0) {
	  	 		balance = dd;	  	
	  		}
		};

		void deposit(int depositAmount) {
	  		if (depositAmount > 0) {
				balance = balance + depositAmount;
	  		}
    	}

        int getAccountNumber () const {
            return accountNumber;
        }
        string getFirstName () const {
            return firstName;
        }
        string getLastName () const {
            return lastName;
        }
        double getBalance () const {
            return balance;
        }
        
        int counter = 1;
		void displayAccount(Account accountToDisplay) {
			cout << "Cuenta "<< counter++ <<": " << accountToDisplay.getFirstName() << "el saldo es de S/." << accountToDisplay.getBalance() << endl;
    	}

};
