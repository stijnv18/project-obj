#include "HotelRoom.h"
#include <string>
using namespace std;

int HotelRoom::getFloor() const {
	return floor;
}
void HotelRoom::setFloor(int floorNumbers) {
	floor = floorNumbers;
}
string HotelRoom::getLocation() const {
	return location;
}
void HotelRoom::setLocation(std::string locationName) {
	location = locationName;
}
int HotelRoom::getNrBeds() const {
	return nrBeds;
}
void HotelRoom::setNrBeds(int nrBedsNumber) {
	nrBeds = nrBedsNumber;
}
bool HotelRoom::getChildrenBeds() const {
	return childrenBed;
}
void HotelRoom::setChildrenBeds(bool childrenBedsState) {
	childrenBed = childrenBedsState;
}