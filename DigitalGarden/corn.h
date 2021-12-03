
#ifndef CORN_H
#define CORN_H
#include "crops.h"

class corn : public crops
{
public:
	corn();
	~corn();

	float harvest() override;

private:


};
#endif

