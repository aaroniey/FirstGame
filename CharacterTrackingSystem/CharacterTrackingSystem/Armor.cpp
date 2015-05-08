#include "Armor.h"
#include <string>
#include <sstream>

Armor::Armor(int weight, std::string name, int defense, int id) : Item(weight, name) {
	if (id != HELMET_ID && id != CHEST_ID && id != PANTS_ID && id != BOOTS_ID){
		throw new std::invalid_argument("Invalid Item ID");
	}
	this->id = id;
	this->defense = defense;
}

Armor::~Armor(){
}

const std::string Armor::toString(){
	std::stringstream sstm;
	sstm << "NAME: " << name << " WEIGHT: " << weight << " DEFENCE: " << defense << " TYPE: " << id;
	return sstm.str();
}