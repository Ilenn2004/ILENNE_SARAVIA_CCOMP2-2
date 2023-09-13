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
		{};

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

};
