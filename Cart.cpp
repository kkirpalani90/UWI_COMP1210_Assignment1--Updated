#include<string>
#include "Cart.h"
#include<iomanip>
using namespace std;

Item obj;

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
	
	for (int i = 0; i != items.size(); i++)
	{
		cout << i+1 << items[i].getId() << " | " << items[i].getItemName() << " | " << items[i].getPrice() << "  | " << items[i].getExpirationTime() << "   | " << endl << endl;

	}
	cout << "TOTAL: $" << /* getTotalCost() */ endl; /* TOTAL COST FUNCTION*/
	cout << "AMOUNT: " << endl; /* AMOUNT VARIABLE << */
	cout << "CAPACITY: " << endl; /* CAPACITY VARIABLE << */ 
}


void ShoppingCart::displayItem(int index) {

	items[index].getId();
			cout << "  | ID      | NAME    | PRICE  | EXPIRATION |" << endl << endl;
			cout << "---------------------------------------------" << endl << endl;
			cout << "  | " << items[index].getId() << " | "<< items[index].getItemName() <<"   | " << items[index].getPrice() << "   | " << items[index].getExpirationTime() << "         |" << endl << endl;
};

int ShoppingCart::searchById(int id) {
	int ans = -1;

	for (int i = 0; i < items.size(); i++)
	{
		if (items[i].getId() == id)
		{
			ans = i + 1;
			break;
		}
	}

	return ans;
}

int ShoppingCart::searchByPrice(float price) {
	int ans = -1;

	int low = 0, high = items.size() - 1;

	int mid = (high + low) / 2;

	while (low <= high)
	{
		if (price == items[mid].getPrice()) {
			return mid;
		}

		if (price > items[mid].getPrice()) {
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		mid = (high + low) / 2;
	}
	return ans;
}

int ShoppingCart::searchByExpirationTime(int expirationTime) {
	int ans = -1;

	int low = 0, high = items.size() - 1;

	int mid = (high + low) / 2;

	while (low <= high)
	{
		if (expirationTime == items[mid].getExpirationTime()) {
			return mid;
		}

		if (expirationTime > items[mid].getExpirationTime()) {
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		mid = (high + low) / 2;
	}
	return ans;
}

bool ShoppingCart::addItem(Item cartItem) {
	items.push_back(cartItem);
	return 1;
}


bool ShoppingCart::removeItem(int itemId) {

	for (int i = 0; i < items.size(); i++)
	{
		if (items[i].getId() == itemId)
		{
			items.erase(items.begin() + searchById(i));
			return 1;
		}
	}

	return -1;
}
