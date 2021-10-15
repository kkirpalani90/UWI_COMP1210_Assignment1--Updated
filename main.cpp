#include<iostream>
#include<string>
#include "Cart.h"
#include "Item.h"
using namespace std;

ShoppingCart obj;

int main() {
Item e("Banana", 100, 213232, 23);
Item f("Kidney", 1000, 784232, 53);
Item g("Banana", 10, 978544, 4);

	char exitQuery = ' ';
	cout << "Enter query" << endl;

	cin >> exitQuery;

	if (exitQuery == 'q')
	{
		obj.displayCart();
	}
	else
	{
		obj.addItem(e);
		obj.addItem(f);
		obj.addItem(g);
		obj.displayCart();
		cout << "Huge Cock: " << obj.searchById(784232) << endl;
		obj.removeItem(1);
		obj.displayCart();
	}
}