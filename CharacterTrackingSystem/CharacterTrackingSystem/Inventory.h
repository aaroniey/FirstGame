#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include "Item.h"
class Inventory
{
	int capacity;
	std::vector<Item> itemList;
public:
	Inventory(int);
	~Inventory();

	bool addItem(Item &item);
	bool addItem(std::vector<Item> item);
	bool removeItem(Item &item);
	Item& getItem(int index);
};
#endif

