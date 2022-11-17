#include "Accommondations.h"
#include "LuxuryLevel.h"

int Accommondations::getID()const {
	return ID;
}
void Accommondations::setID(int IDNumber) {
	ID = IDNumber;
}
int Accommondations::getNrPeople()const {
	return nrPeople;
}
void Accommondations::setNrPeople(int nrPeopleNumber) {
	nrPeople = nrPeopleNumber;
}
int Accommondations::getSize()const {
	return size;
}
void Accommondations::setSize(int sizeNumber) {
	size = sizeNumber;
}
bool Accommondations::getBathroomWithBath()const {
	return ID;
}
void Accommondations::setBathroomWithBath(bool bathroomWithBathState) {
	bathroomWithBath = bathroomWithBathState;
}
LuxuryLevel Accommondations::getLuxuryLevel()const {
	return luxuryLevel;
}
void Accommondations::setLuxuryLevel(LuxuryLevel luxuryLevelSet) {
	luxuryLevel = luxuryLevelSet;
}