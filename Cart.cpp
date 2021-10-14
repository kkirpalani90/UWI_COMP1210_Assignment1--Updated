#include<string>
#include "Cart.h"
#include<iomanip>
using namespace std;


ShoppingCart::ShoppingCart()
{
	int total = 0;
	float totalCost = 0;
	int capacity = 50;
}

float ShoppingCart::totalPrice() {
	return 0;
}

int ShoppingCart::totalItems() {
	return 0;
}

void ShoppingCart::displayCart() {
	cout << "  | ID      | NAME    | PRICE  | EXPIRATION |" << endl << endl;
	cout << "---------------------------------------------" << endl << endl;
	cout << "1 | 9746543 | Apple   | 2.50   | 17         |" << endl << endl;
	cout << "2 | 8165183 | Banana  | 3.00   | 5          |" << endl << endl;
	cout << "TOTAL: $" << getTotalCost() << endl; /* TOTAL COST FUNCTION*/
	cout << "AMOUNT: " << endl; /* AMOUNT VARIABLE << */
	cout << "CAPACITY: " << endl; /* CAPACITY VARIABLE << */ 
}


void ShoppingCart::displayItem(int index) {

	for (auto i = items.begin(); i != items.end(); i++)
	{
		if (index == items[i]) 
		{
			cout << "  | ID      | NAME    | PRICE  | EXPIRATION |" << endl << endl;
			cout << "---------------------------------------------" << endl << endl;
			cout << "1 | 9746543 | Apple   | 2.50   | 17         |" << endl << endl;
		}
	}
};

int ShoppingCart::searchById(int id) {
	for (int i = 0; i < items.size(); i++)
	{
		if (id == items[i])
		{
			Item::getItemName();
		}
	}
}