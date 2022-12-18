#pragma once
#include <string>
#include "Accommondations.h"
#include <fstream>
#include <iostream>
class HotelRoom: public Accommondations
{
public:
	int getFloor() const;
		void setFloor(int floorNumbers);
		std::string getLocation() const;
		void setLocation(std::string locationName);
		int getNrBeds() const;
		void setNrBeds(int nrBedsNumber);
		bool getChildrenBeds() const;
		void setChildrenBeds(bool childrenBedsState);
		friend std::ostream& operator<<(std::ostream& out, const HotelRoom& obj) {
			out << obj.getID() << ',' << obj.getNrPeople() << ',' << obj.getSize() << ',' << obj.getBathroomWithBath() << ',' << obj.getLuxuryLevel() << ',' << obj.floor << ',' << obj.location << ',' << obj.childrenBed<< ',' << obj.nrBeds;
			return out;
		}
private:
	int floor;
	std::string location;
	bool childrenBed;
	int nrBeds;
};

