#include "corn.h"
#include <string>

corn::corn() {
	states = { "Seedling","Plant","Crop" };
	maxStates = 3;
	duration = float(2);
	name = "Corn";
	price = 3.50;
	tool = "machine";
	strPtr = &states[0];
	currentState = states[0];

}

corn::~corn() {}

float corn::harvest()
{
	int q = getQuantity();
	float p = getPrice();
	float tot = p * q;
	return tot;
}


