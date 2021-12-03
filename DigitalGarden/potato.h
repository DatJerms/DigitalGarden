#ifndef POTATO_H
#define POTATO_H
#include "crops.h"
class potato : public crops
{
public:
	potato();
	~potato();

	float harvest() override;

private:


};
#endif


