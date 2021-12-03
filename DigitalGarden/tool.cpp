#include "tool.h"
#include <vector>
#include <string>

using namespace std;

tool::tool() {
	toolDurability = { 100,100,100 };
	toolType = { "machine","hoe","shovel" };


}
tool::~tool() {}

void tool::usetool(string tt) {
	if (tt == "machine") {
		toolDurability[0] -= 10;
	}
	else if (tt == "hoe") {
		toolDurability[1] -= 10;
	}
	else if (tt == "shovel") {
		toolDurability[2] -= 10;
	}
	else {}
}




