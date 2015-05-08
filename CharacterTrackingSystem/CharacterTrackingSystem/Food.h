#ifndef FOOD_H
#define FOOD_H
#include "Item.h"
class Food : public Item{
private:
	int healAmount;
public:
	Food(int, std::string, int);
	~Food();

	const std::string toString();
};

#endif

