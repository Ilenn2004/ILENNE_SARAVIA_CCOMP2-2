#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main() {

    Invoice bolsaDeDetergente("123","Bolsa de Detergente",20,9.8);

    bolsaDeDetergente.setDiscount(2);
	
	cout << "El precio final de " << bolsaDeDetergente.getDescription() << " seria: S/." << bolsaDeDetergente.getInvoiceAmount() << endl;

     return 0;
  }
