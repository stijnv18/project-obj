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
		out << obj.ID << ',' << obj.nrPeople << ',' << obj.size << ',' << obj.bathroomWithBath << ',' << obj.luxuryLevel;
		return out;
	}

	friend std::istream& operator>>(std::istream& in, Accommondations& obj) {
		in >> obj.ID >> obj.nrPeople >> obj.size;
		std::string bathroomWithBathStr;
		std::getline(in, bathroomWithBathStr, ',');
		obj.bathroomWithBath = (bathroomWithBathStr == "true");
		in >> obj.luxuryLevel;
		return in;
	}
private:
	int ID;
	int nrPeople;
	int size;
	bool bathroomWithBath;
	LuxuryLevel luxuryLevel;
};