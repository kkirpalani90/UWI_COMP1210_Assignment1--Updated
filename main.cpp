#include<iostream>
#include<string>
#include "Cart.h"
using namespace std;

ShoppingCart obj;

int main() {
	char exitQuery = ' ';
	cout << "Enter query" << endl;

	cin >> exitQuery;

	if (exitQuery == 'q')
	{
		obj.displayCart();
	}
	else
	{
		cout << " Hello Worlddddd";
	}
}