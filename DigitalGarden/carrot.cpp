#include "carrot.h"
#include <string>

carrot::carrot() {
	states = { "Seedling","Plant","Crop" };
	maxStates = 3;
	duration = float(3.5);
	name = "Carrot";
	price = 3.50;
	tool = "hoe";
	strPtr = &states[0];
	currentState = states[0];

}

carrot::~carrot() {}

float carrot::harvest()
{
	int q = getQuantity();
	float p = getPrice();
	float tot = p * q;
	return tot;
}

