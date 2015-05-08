#include "Food.h"


Food::Food(int weight, std::string name, int healAmount) : Item(weight, name) {
	this -> healAmount = healAmount;
}


Food::~Food(){
}

const std::string Food::toString(){
	std::stringstream sstm;
	sstm << "NAME: " << name << " WEIGHT: " << weight << " HEAL AMOUNT: " << healAmount;
	return sstm.str();
}