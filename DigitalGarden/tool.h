#pragma once
#ifndef TOOLS_H
#define TOOLS_H

#include <vector>
#include <string>
using namespace std;
class tool
{
	tool();
	~tool();

public:
	void resetToolDu()
	{
		std::fill(toolDurability.begin(), toolDurability.end(), 0);
		
	}

	int getTooldu(string tt)
	{
		if (tt == "machine") {
			return toolDurability[0];
		}
		else if (tt == "hoe") {
			return toolDurability[1];
		}
		else if (tt == "shovel") {
			return toolDurability[2];
		}
		else {}

	}
	void usetool(string tt);


private:
	std::vector<std::string> toolType;
	std::vector<int> toolDurability;
};
#endif

