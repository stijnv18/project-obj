#pragma once
#include "LuxuryLevel.h"
#include <fstream>
#include <iostream>
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
	friend std::ostream& operator<<(std::ostream& out, const Accommondations& obj) {
		out << obj.ID << ',' << obj.nrPeople << ',' << obj.size << ',' << obj.bathroomWithBath<< '{' << obj.luxuryLevel<<'}';
		return out;
	}
private:
	int ID;
	int nrPeople;
	int size;
	bool bathroomWithBath;
	LuxuryLevel luxuryLevel;
};