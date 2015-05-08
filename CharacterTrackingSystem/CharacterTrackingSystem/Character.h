#ifndef CHARACTER_H
#define CHARACTER_H
#include <vector> 
#include "Item.h"
class Character
{
private:

	int health;
	Inventory inv;

	//stats
	int vitality;
	int strength;
public:
	Character();
	~Character();
};
#endif

