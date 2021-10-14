#include<string>
#include "Cart.h"
using namespace std;

Item::Item() {
	itemName = "";
	price = 0.0;
	id = 0;
	expirationTime = 0;
}


Item::Item(string nItemName, float nPrice, int nId, int nExpirationTime) {
	itemName = nItemName;
	price = nPrice;
	id = nId;
	expirationTime = nExpirationTime;
}

string Item::getItemName() {
	return itemName;
}

float Item::getPrice() {
	return price;
}

int Item::getId() {
	return id;
}

int Item::getExpirationTime() {
	return expirationTime;
}

void Item::setItemName(string nItemName)
{
	itemName = nItemName;
}

void Item::setPrice(float nPrice)
{
	price = nPrice;
}

void Item::setId(int nId) {
	id = nId;byi
}

void Item::setExpirationTime(int nExpirationTime)
{
	expirationTime = nExpirationTime;
}


ShoppingCart::ShoppingCart()
{
	total = 0;
	totalCost = 0;
	capacity = 50;
}

float ShoppingCart::totalPrice() {

}

int ShoppingCart::totalItems() {

}

void ShoppingCart::displayCart() {

}