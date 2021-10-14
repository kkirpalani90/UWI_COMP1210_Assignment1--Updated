#include "Item.h"


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

void Item::setPrice(float foo)
{
	price = foo;
}

void Item::setId(int foo) {
	id = foo;
}

void Item::setExpirationTime(int foo)
{
	expirationTime = foo;
}
