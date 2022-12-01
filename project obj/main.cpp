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

LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService, bool cleaningService, string accomodationKind);
void addhotelroom(int floors);
Cabin createCabin(int NumberOfRooms);

int main() {
	Cabin cabin;
	cabin = createCabin(110);
	HotelRoom hotelroom;
	addhotelroom(6);
	return 0;
}

LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService, bool cleaningService, string accomodationKind)
{
	LuxuryLevel LL;

	LL.setBBQ(BBQ);
	LL.setSurroundSystem(SurroundSystem);
	LL.setBreakfastService(breakfastService);
	LL.setCleaningService(cleaningService);
	LL.setAccommodationKind(accomodationKind);
	return LuxuryLevel();
}

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
void CreateCustomer() {
	Customer customer;
	std::string naam, adres, email;

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	cout << "You want to create a customer account:" << endl << endl;
	cout << endl << "What is your name: ";
	cin >> naam;
	cout << endl <<  "What is your address: ";
	cin >> adres;
	cout << endl << "What is your email address: ";
	cin >> email;

	customer.setName(naam);
	customer.setAddress(adres);
	customer.setMail(email);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
}
void ChangeCustomer(std::string cust) {
	Customer customer;
	int choise;
	std::string naam, adres, email;

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	cout << "Your are currently want to change Customer account: " << cust << endl;
	do {
		cout << "- 1 : Change Name" << endl << "- 2 : Change address" << endl << "- 3 : Change Email" << endl << "- 0 : Stop" << endl << endl;
		do {
			cout << "Choise: ";
			cin >> choise;
		} while (choise < 0 or choise > 4);
		

		if (choise == 1) {
			cout << "What is the new name: ";
			cin >> naam;
			customer.setName(naam);
			cout << "The name is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 2) {
			cout << endl << "What is the new address: ";
			cin >> adres;
			customer.setAddress(adres);
			cout << endl << "The adres is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 3) {
			cout << "What is the new Email: ";
			cin >> email;
			customer.setMail(email);
			cout << endl << "The email is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
	} while (choise != 0);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
}
void DeleteCustomer(std::string cust) {
	Customer customer;


}

void SearchCustomer() {
	Customer customer;
	std::string Scustom = "Joren";
	int choise;

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	do {
		cout << "Would you like to Create or Change or Delete a customer: " << endl << endl;
		cout << "- 1 : Create customer" << endl << "- 2 : Change customer" << endl << "- 3 : Delete customer" << endl << "- 0 : Stop" << endl << endl;
		do {
			cout << "Choise: ";
			cin >> choise;
		} while (choise < 0 or choise > 4);


		if (choise == 1) {
			CreateCustomer();
			cout << endl << "Customer has been created!" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 2) {
			ChangeCustomer(Scustom);
			cout << endl << "Customer has been changed!" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 3) {
			DeleteCustomer(Scustom);
			cout << endl << "Customer has been deleted!" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
	} while (choise != 0);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
}


int main() {
	SearchCustomer();
}

Cabin createCabin(int NumberOfRooms) {
	Cabin temp;
	temp.setCabin(NumberOfRooms);
	return temp;
}

LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService, bool cleaningService, std::string accomodationKind);


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

