#pragma once
#include<iostream>
using namespace std;

class Item
{
public:
	// Constructors
	//Default
	Item();
	//Overloaded
	Item(string, float, int, int);

	//Accessors & Mutators
	//Mutators
	string getItemName();
	float getPrice();
	int getId();
	int getExpirationTime();

	//Accessors
	void setItemName(string);
	void setPrice(float);
	void setId(int);
	void setExpirationTime(int);

private:
	string itemName;
	float price;
	int id;
	int expirationTime;

};