#pragma once
#include "Item.h"
#include<iostream>
#include <vector>
using namespace std;



class ShoppingCart
{
public:
	// Constructors
	ShoppingCart();
	// ShoppingCart(float totalCost, int capacity);

	int totalItems();
	float totalPrice();
	void displayCart();
	void displayItem(int);
	int searchById(int);
	int searchByPrice(float);
	int searchByExpirationTime(int);
	void sortById();
	void sortByPrice();
	void sortByExpirationTime();
	bool isExpired(int);
	bool removeItem(int);
	bool addItem(Item);
	void setTotalCost(float);
	void setItems(vector<Item>);
	void setCapacity(int);
	float getTotalCost();
	vector<Item> getItems();
	int getCapacity();

private:
	vector<Item> items;
	float totalCost;
	int capacity;
}; 
