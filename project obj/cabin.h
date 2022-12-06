#pragma once
#include "Accommondations.h"
class Cabin: public Accommondations{
public:
	void setCabin(int);
	int getCabin()const;
private:
	int bedrooms;
};