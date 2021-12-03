#ifndef CARROT_H
#define CARROT_H
#include "crops.h"
class carrot : public crops
{
public:
	carrot();
	~carrot();
	
	float harvest() override;

private:


};
#endif

