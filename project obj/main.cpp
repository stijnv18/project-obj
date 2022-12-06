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

LuxuryLevel createLuxury();
LuxuryLevel changeLuxuryLevel(LuxuryLevel);
HotelRoom addhotelroom(int floors);
Cabin createCabin(int NumberOfRooms);
ParcServices addparcservices();
Accommondations createAccomodation();
Accommondations editAccommodation(Accommondations accommodation);
bool question(string);
int main() {
	Cabin cabin;
	ParcServices parcservices;
	Accommondations accom;
	parcservices = addparcservices();
	cout << parcservices.toString();
	accom = createAccomodation();
	accom = editAccommodation(accom);

	accom = editAccommodation(accom);
	return 0;
}
Accommondations createAccomodation() {
	//add radnom id
	int cabinOrHotelroom;
	int numberOfPeople;
	int temp;
	bool bath;
	int size;
	int ID;
	int maxNumberOfFloors;
	LuxuryLevel LevelOfluxury;
	Cabin cabin;
	HotelRoom hotelroom;
	cout << "Do you want a hotel room(1) or cabin(2): " << endl;
	do
	{
		cin >> cabinOrHotelroom;
	} while (cabinOrHotelroom > 2 or cabinOrHotelroom < 1);
	if (cabinOrHotelroom == 1) {
		cout << "what is the max number of floors:" << endl;
		cin >> maxNumberOfFloors;
		 hotelroom = addhotelroom(maxNumberOfFloors);
	}

	else if (cabinOrHotelroom == 2) {
		int numberOfRooms;
		cout << "What are the number of rooms: " << endl;
		cin >> numberOfRooms;
		 cabin = createCabin(numberOfRooms);
	}


	cout << "What are the number of people: " << endl;
	cin >> numberOfPeople;

	cout << "Does it have a bath yes(1) no (0): " << endl;
	do
	{
		cin >> temp;
	} while (temp > 1 or temp < 0);
	if (temp == 1) {
		bath = true;
	}
	else if (temp == 0)
	{
		bath = false;
	}

	cout << "What is the size: " << endl;
	cin >> size;

	LevelOfluxury = createLuxury();
	if (cabinOrHotelroom==2)
	{
		cabin.setNrPeople(numberOfPeople);
		cabin.setBathroomWithBath(bath);
		cabin.setSize(size);
		cabin.setLuxuryLevel(LevelOfluxury);
		return cabin;
	}
	else
	{
	hotelroom.setNrPeople(numberOfPeople);
	hotelroom.setBathroomWithBath(bath);
	hotelroom.setSize(size);
	hotelroom.setLuxuryLevel(LevelOfluxury);
	return hotelroom;
	}

}
Accommondations editAccommodation(Accommondations accommodation) {
	int option;
	LuxuryLevel luxurylevel;
	luxurylevel = accommodation.getLuxuryLevel();
	cout << accommodation.getSize()<<endl;
	cout << accommodation.getNrPeople() << endl;
	cout << accommodation.getBathroomWithBath() << endl;
	// luxury level
	cout << luxurylevel.getAccommodationKind() <<endl;
	cout << luxurylevel.getBBQ() << endl;
	cout << luxurylevel.getBreakfastService() << endl;
	cout << luxurylevel.getCleaningService() << endl;
	cout << luxurylevel.getSurroundSystem() << endl;

	int newid;
	int newppl;
	int newsize;
	bool newbath;


	cout << "what do you want to change " <<endl;
	cout << "id(1) nubmer of ppl(2) size(3) bath(4) luxuryLevel(5)" << endl;
	cin >> option;

	if (option==1)
	{
		cout << "what is the new id:" << endl;
		cin >> newid;
		accommodation.setID(newid);
	}
	else if (option==2)
	{
		cout << "what is the new nubmer of people:" << endl;
		cin >> newppl;
		accommodation.setID(newppl);
	}
	else if (option == 3)
	{
		cout << "what is the new size:" << endl;
		cin >> newsize;
		accommodation.setID(newsize);
	}
	else if (option == 4)
	{
		newbath = question("Is there a bath");
		accommodation.setID(newbath);
	}
	else if (option == 5)
	{
	luxurylevel = changeLuxuryLevel(luxurylevel);
	}

	return accommodation;
}
bool question(string q) {
	string temp;
	cout << q << endl;
	do { cin >> temp; } while (temp != "no" and temp != "yes");
	return temp == "yes";
}
LuxuryLevel createLuxury()
{
	LuxuryLevel LL;
	bool BBQ;
	bool SurroundSystem;
	bool breakfastService;
	bool cleaningService;
	string accomodationKind;

	//yes/no  questions
	SurroundSystem = question("is thre a surround system:");
	BBQ = question("Is there a bbq:");
	breakfastService = question("Is there breakfast service:");
	cleaningService = question("Is there a cleaning Service:");
	
	//string
	cout << "what is the accomodatoin kind:";
	cin >> accomodationKind;

	LL.setBBQ(BBQ);
	LL.setSurroundSystem(SurroundSystem);
	LL.setBreakfastService(breakfastService);
	LL.setCleaningService(cleaningService);
	LL.setAccommodationKind(accomodationKind);
	return LL;
}
LuxuryLevel changeLuxuryLevel(LuxuryLevel LL) {

	int option;
	bool BBQ;
	bool SurroundSystem;
	bool breakfastService;
	bool cleaningService;
	string accomodationKind;
	cout << "what do you want to change " << endl;
	cout << "Surround system(1) Breakfast(2) cleaning(3) accomodationKind(4) BBQ(5)" << endl;
	cin >> option;

	if (option == 1)
	{
		SurroundSystem = question("is thre a surround system:");
		LL.setSurroundSystem(SurroundSystem);
	}
	else if (option == 2)
	{
		breakfastService = question("Is there breakfast service:");
		LL.setBreakfastService(breakfastService);
	}
	else if (option == 3)
	{
		cleaningService = question("Is there a cleaning Service:");
		LL.setCleaningService(cleaningService);
	}
	else if (option == 4)
	{
		cout << "what is the accomodatoin kind:";
		cin >> accomodationKind;
		LL.setAccommodationKind(accomodationKind);

	}
	else if (option == 5)
	{
		BBQ = question("Is there a bbq:");
		LL.setBBQ(BBQ);
	}
	return LL;
}
HotelRoom addhotelroom(int floors) {
	HotelRoom hotelroom;
	int floor = -1;
	string location;
	int nrBeds = -1;
	bool childrenBed;
	string temp;
	cout << "floor number: " << endl;
	while (floor > floors or floor < 0)
	{
		while (!(cin >> floor))
		{
			cout << "try again: " << endl;
			cin.clear();
			cin.ignore(123, '\n');
		}
	}
	cout << "location of the room (streetside, lakeside): " << endl;
	do
	{
		cin >> location;
	} while (location != "streetside" and location != "lakeside");
	cout << "number of beds: " << endl;
	while (nrBeds > 6 or nrBeds < 0)
	{
		while (!(cin >> nrBeds))
		{
			cout << "try again: " << endl;
			cin.clear();
			cin.ignore(123, '\n');
		}
	}
	hotelroom.setChildrenBeds(question("children bed in room (yes, no):"));
	hotelroom.setFloor(floor);
	hotelroom.setLocation(location);
	hotelroom.setNrBeds(nrBeds);
	return hotelroom;
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
Cabin createCabin(int NumberOfRooms) {
	Cabin temp;
	temp.setCabin(NumberOfRooms);
	return temp;
}
ParcServices addparcservices()
{
	ParcServices parcservices;

	cout << "services the park has to offer" << endl;
	parcservices.setSubtropicSwimmingPool(question("subtropic pool (yes, no):"));
	parcservices.setSportsInfrastructure(question("sportinfrastructure (yes, no):"));
	parcservices.setBowlingAlley(question("bowling alley (yes, no):"));
	parcservices.setBicycleRent(question("bicycle rent (yes, no):"));
	parcservices.setChilderensParadise(question("children paradise (yes, no):"));
	parcservices.setWaterBikes(question("water bikes (yes, no):"));
	return parcservices;
}