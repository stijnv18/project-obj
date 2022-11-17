#pragma once
#include "LuxuryLevel.h"
class Accommondations {
public:
	int getID()const;
	void setID(int IDNumber);
	int getNrPeople()const;
	void setNrPeople(int nrPeopleNumber);
	int getSize()const;
	void setSize(int sizeNumber);
	bool getBathroomWithBath()const;
	void setBathroomWithBath(bool bathroomWithBathState);
	LuxuryLevel getLuxuryLevel()const;
	void setLuxuryLevel(LuxuryLevel luxuryLevelSet);
private:
	int ID;
	int nrPeople;
	int size;
	bool bathroomWithBath;
	LuxuryLevel luxuryLevel;
};