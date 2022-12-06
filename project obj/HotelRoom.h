#pragma once
#include <string>
#include "Accommondations.h"
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
private:
	int floor;
	std::string location;
	bool childrenBed;
	int nrBeds;
};

