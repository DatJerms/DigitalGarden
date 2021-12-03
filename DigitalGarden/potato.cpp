
#include "potato.h"
#include <string>

potato::potato() {
	states = { "Seedling","Plant","Crop" };
	maxStates = 3;
	duration = float(2);
	name = "Potato";
	price = 3.50;
	tool = "shovel";
	strPtr = &states[0];
	currentState = states[0];

}

potato::~potato() {}

float potato::harvest()
{
	int q = getQuantity();
	float p = getPrice();
	float tot = p * q;
	return tot;
}


