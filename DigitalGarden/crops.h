#ifndef CROPS_H
#define CROPS_H


#include <string>
#include <vector>
//using namespace std;

class crops
{
public:
	crops();
	virtual ~crops();


	int getQuantity() {
		return quantity;
	}
	void setQuantity(int num) {
		quantity = num;
	}
	std::vector<std::string> getStates() {
		return states;
	}
	void setStates(std::vector<std::string> s ) {
		states = s;
	}
	float getPrice() {
		return price;
	}
	void setPrice(float num) {
		price = num;
	}
	float getDuration() {
		return duration;
	}
	void setDuration(float time) {
		duration = time;
	}
	void setQuantity(float num) {
		duration = num;
	}
	int getMaxStates() {
		return maxStates;
	}
	void setMaxStates(int num) {
		maxStates = num;
	}
	std::string getName(){
		return name;
	}
	void setName(std::string n) {
		name = n;
	}
	std::string getCState() {
		return currentState;
	}
	void setCState(std::string s) {
		currentState = s;
	}
	virtual bool grow();
	virtual int checkState();
	virtual void plant();
	virtual float harvest();
	virtual void changeState();
private:
	
protected:
	int maxStates;
	int quantity;
	std::string currentState;
	std::string *strPtr;
	std::vector<std::string> states;
	float price;
	std::string name;
	float duration;
	std::string tool;
	bool growFlag = false;
};

#endif

