#include <iostream>
#include <string>

using namespace std;

class Invoice {
	private:
		string number;
		string description;
		int quantity;
		int price;
		double vat = 0.20;
		double discount = 0;
	public:
		Invoice (string numero, string descripcion, int cantidad, int precio) :
			number(numero),
			description(descripcion),
			quantity(cantidad),
			price(precio)
		{};
		
		void setDiscount(double descuento) {
			if (descuento >= 0) {
				discount = descuento;
			}
		}
		
		string getDescription() {
			return description;
		}
		
		string getNumber() {
			return number;
		}	
		
		double getInvoiceAmount() {
			return (quantity*price*vat*(100-discount)/100);
		}
};
