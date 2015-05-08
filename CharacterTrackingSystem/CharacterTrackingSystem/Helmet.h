#ifndef HELMET_H
#define HELMET_H
#include "Armor.h"
class Helmet : public Armor{
private:
	//Effect special;
public:
	Helmet(int, std::string, int);
	const std::string toString();
};

#endif