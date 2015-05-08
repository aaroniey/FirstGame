#include <iostream>
#include "Item.h"
#include "Food.h"
#include "Armor.h"
using namespace std;

int main(){
	Armor eq(10, "ChestPlate", 5, Armor::CHEST_ID);
	Food fd(2, "Apple", 100);
	Item &firstItem  = eq;
	Item &secondItem = fd;
	cout << firstItem.toString() << endl;
	cout << secondItem.toString() << endl;
	return 0;
}