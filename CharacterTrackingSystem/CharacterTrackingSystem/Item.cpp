#include "Item.h"

Item::Item(int weight, std::string name){
	this->weight = weight;
	this->name = name;
}

const std::string Item::getName(){
	return this->name;
}

int Item::getWeight(){
	return this->weight;
}
