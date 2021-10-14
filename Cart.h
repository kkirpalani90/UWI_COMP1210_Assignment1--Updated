#ifndef cart_h
#define cart_h
#include <string>
#include <vector>
using namespace std;

class Item
{
public:
	// Constructors
	//Default
	Item();
	//Overloaded
	Item(string nItemName, float nPrice, int nId, int nExpirationTime);

	//Accessors & Mutators
	//Mutators
	string getItemName();
	float getPrice();
	int getId();
	int getExpirationTime();

	//Accessors
	void setItemName(string itemName);
	void setPrice(float price);
	void setId(int id);
	void setExpirationTime(int expirationTime);

private:
	string itemName;
	float price;
	int id;
	int expirationTime;

};


class ShoppingCart
{
public:
	// Constructors
	ShoppingCart();
	ShoppingCart(float totalCost, int capacity);

	float total;
	int totalItems();

	void displayCart();
	float totalPrice();

private:
	float totalCost;
	vector<Item>items;
	int capacity;

}; 

#endif
