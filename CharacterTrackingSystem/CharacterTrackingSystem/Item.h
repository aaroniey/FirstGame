#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <sstream>
class Item{
protected:
	int weight;
	std::string name;
public:
	static const int EQUIPTMENT_ID = 1;
	static const int POTION_ID = 2;
	static const int FOOD_ID = 3;
	static const int MISC_ID = 4;
	
	///Constructor
	Item(int weight, std::string name );
	
	///getters
	const std::string getName();
	int getWeight();

	///printable
	virtual const std::string toString() = 0;
};

#endif