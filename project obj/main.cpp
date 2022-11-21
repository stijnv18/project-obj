#pragma once
#include "Accommondations.h" 
#include "HotelRoom.h"
#include "Cabin.h"
#include "Booking.h"
#include "Customer.h"
#include "LuxuryLevel.h"
#include "Parcs.h"
#include "ParcServices.h"
#include "VacationParcs.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

//void addparc(){
//	string name,type;
//	Accommondations accomondation;
//	Parcs parc;
//	HotelRoom hotel;
//	Cabin cabin;
//	int ID = 0;
//	int luxlvl;
//	cout << "Adding parc" << endl << "name: ";
//	cin >> name;
//	parc.setName(name);
//	cout << "address: " << endl;
//	cin >> name;
//	hotel.setLocation(name);
//	cout << "number of rooms: " << endl;
//	cin >> ID;
//	for (int i = 0; i < ID; i++)
//	{
//		accomondation.setID(i);
//		cout << "give luxury level: "<< endl;
//		cin >> luxlvl;
//		switch (luxlvl)
//		{
//		case 1:
//		case 2:
//		case 3:
//		default:
//			break;
//		}
//		cout << "type of building (bungalow or hotel): " << endl;
//		cin >> type;
//		while (type == "hotel")
//		{
//			
//			break;
//		}
//	}
//}

void addhotelroom(int floors) {
	HotelRoom hotelroom;
	int floor;
	string location;
	int nrBeds;
	bool childrenBed;
	string temp;
	cout << "floor number: " << endl;
	do
	{
		cin >> floor;
	} while (floor > floors or floor < 0);
	cout << "location of the room (streetside, lakeside): " << endl;
	do
	{
		cin >> location;
	} while (location != "streetside" and location != "lakeside");
	cout << "number of beds: " << endl;
	do
	{
		cin >> nrBeds;
	} while (nrBeds > 4 or nrBeds < 0);
	cout << "children bed in the room (yes, no):" << endl;
	do
	{
		cin >> temp;
	} while (temp != "no" and temp != "yes");
	while (temp == "yes")
	{
		childrenBed = true;
		break;
	}
	while (temp == "no")
	{
		childrenBed = false;
		break;
	}
	hotelroom.setFloor(floor);
	hotelroom.setLocation(location);
	hotelroom.setNrBeds(nrBeds);
	hotelroom.setChildrenBeds(childrenBed);
}
int main() {
	Cabin cabin;
	cabin = createCabin(110);
}

Cabin createCabin(int NumberOfRooms) {
	Cabin temp;
	temp.setCabin(NumberOfRooms);
	return temp;
}

LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService, bool cleaningService, std::string accomodationKind);

int main() {
	addhotelroom(6);
	return 0;
}

LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService, bool cleaningService, std::string accomodationKind)
{
	LuxuryLevel LL;

	LL.setBBQ(BBQ);
	LL.setSurroundSystem(SurroundSystem);
	LL.setBreakfastService(breakfastService);
	LL.setCleaningService(cleaningService);
	LL.setAccommodationKind(accomodationKind);


	return LuxuryLevel();
}
