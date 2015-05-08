#ifndef ARMOR_H
#define ARMOR_H
#include "item.h"
#include <string>

class Armor : public Item{
protected:
	int defense;
	int id;
public:

	///public ids
	static const int HELMET_ID = 0;
	static const int CHEST_ID = 1;
	static const int PANTS_ID = 2;
	static const int BOOTS_ID = 3;
	
	///constructor
	Armor(int , std::string , int , int );
	~Armor();
	
	///to string function
	const std::string toString();
};

#endif