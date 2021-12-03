#include "crops.h"
#include <string>
#include <stdlib.h> 
#include <thread> 
#include <chrono>
#include <iostream>

//using namespace std;
//using namespace std::chrono;

crops::crops() {
	maxStates = 1;
	//currentState = states[0];
	quantity = 0;
	states = {};
	price = 0;
	duration = 0;
	tool = "";
	//strPtr = &states[0];

}



crops::~crops(){
}

float crops::harvest() {
	int q = getQuantity();
	float p = getPrice();
	float tot = p * q;
	return tot;
	
}

void crops::plant() {
	//int start = 0, end = 30000;
	growFlag = true;
	//future<bool> st = async(launch::async,crops::grow,start,end);
}

bool crops::grow() {
	
	if (growFlag) {
		for (int i = 0; i < maxStates; i++) {
			std::cout << currentState<<std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			changeState();
		}
	}
	return true;
}

void crops::changeState() {
	// Change the state forward (1 to 2)
	if ((checkState() + 1) < maxStates) {
		if (states[checkState() + 1] != "") {
			currentState = strPtr[checkState() + 1];

		}
	}
	

}

int crops::checkState()
{
	int i;
	int check=0;
	for (i = 0;i<maxStates;i++)
	{
		if (states[i] == currentState)
		{
			check = i;
		}
	}
	if ((check + 1) == maxStates) {growFlag=false;}
	return check;
}


//void crops::grow(string state)

