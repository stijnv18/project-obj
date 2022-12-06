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


LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService, bool cleaningService, string accomodationKind);
HotelRoom addhotelroom(int floors);
Cabin createCabin(int NumberOfRooms);
ParcServices addparcservices();
void manageBooking(vector<Booking>& bookings);
void changeBooking(vector<Booking>& bookings, int id);
void deleteBooking(vector<Booking>& bookings, int id);
void addBooking(vector<Booking>& bookings, int id);

LuxuryLevel createLuxury();
LuxuryLevel changeLuxuryLevel(LuxuryLevel);
HotelRoom addhotelroom(int floors);
Cabin createCabin(int NumberOfRooms);
ParcServices addparcservices();
Accommondations createAccomodation();
Accommondations editAccommodation(Accommondations accommodation);
bool question(string);

int main() {
	vector<Booking> bookings;
	for (int i = 0; i < 4; i++)
	{
		
		manageBooking(bookings);
		cout << bookings.size();
	}
	/*Cabin cabin;
	ParcServices parcservices;
	Accommondations accom;
	parcservices = addparcservices();
	cout << parcservices.toString();
	cabin = createCabin(110);
	HotelRoom hotelroom;
	addhotelroom(6);*/
	for (Booking booking : bookings)
	{
		int book;
		book = booking.getID();
		cout << book << endl;
	}
	accom = createAccomodation();
	accom = editAccommodation(accom);

	accom = editAccommodation(accom);
	return 0;
}

bool question(string q) {
	string temp;
	cout << q << endl;
	do { cin >> temp; } while (temp != "n" and temp != "y");
	return temp == "y";
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

	cabin.setBathroomWithBath(question("does it have a bath? (yes, no)"));

	cout << "What is the size: " << endl;
	cin >> size;

	LevelOfluxury = createLuxury();
	if (cabinOrHotelroom==2)
	{
		cabin.setNrPeople(numberOfPeople);
		cabin.setSize(size);
		cabin.setLuxuryLevel(LevelOfluxury);
		return cabin;
	}
	else
	{
	hotelroom.setNrPeople(numberOfPeople);
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
// Adds a new booking with the given ID to the list of bookings
void addBooking(vector<Booking>& bookings, int id) {
	Booking newBooking;
	newBooking.setID(id);
	bookings.push_back(newBooking);
	cout << bookings.size()<< endl;
}

// Deletes the booking with the given ID from the list of bookings
void deleteBooking(vector<Booking>& bookings, int id) {
	bool foundId = false;
	for (int i = 0; i < bookings.size(); i++) {
		if (bookings[i].getID() == id) {
			foundId = true;
			bookings.erase(bookings.begin() + i);
			break;
		}
	}
	if (foundId != true) {
		cout << "there is no suck ID" << endl;
	}
}

// Changes the details of the booking with the given ID in the list of bookings
void changeBooking(vector<Booking>& bookings, int id) {
	bool foundId = false;
	for (int i = 0; i < bookings.size(); i++) {
		if (bookings[i].getID() == id) {
			foundId = true;
			// Prompt the user for the new details of the booking and update the Booking object
			cout << "Enter the new ID number for the booking: ";
			int newID;
			cin >> newID;
			bookings[i].setID(newID);

			// Update the customer information
			cout << "Enter the new customer information for the booking: ";
			Customer newCustomer;
			string name, address, mail;

			// Read the new customer information from standard input
			cout << "Enter the customer's name: ";
			cin >> name;
			newCustomer.setName(name);

			cout << "Enter the customer's address: ";
			cin >> address;
			newCustomer.setAddress(address);

			cout << "Enter the customer's email address: ";
			cin >> mail;
			newCustomer.setMail(mail);

			// Set the new customer information in the Booking object
			bookings[i].setCustomer(newCustomer);

			// Update the accommodations
			cout << "Enter the new accommodations for the booking: " << endl;
			vector<Accommondations> newAccommodations;
			int id, maxOccupancy, size;
			bool bathroomWithBath;
			LuxuryLevel luxuryLevel;

			// Read the new accommodations from standard input
			cout << "Enter the ID of the accommodation: ";
			cin >> id;
			if (id < 0) {
				cout << "Error: ID must be a positive integer." << endl;
				return;
			}

			cout << "Enter the maximum occupancy of the accommodation: ";
			cin >> maxOccupancy;
			if (maxOccupancy < 0) {
				cout << "Error: Maximum occupancy must be a positive integer." << endl;
				return;
			}

			cout << "Enter the size of the accommodation: ";
			cin >> size;
			if (size < 0) {
				cout << "Error: Size must be a positive integer." << endl;
				return;
			}

			cout << "Does the accommodation have a bathroom with a bath (1 for yes, 0 for no)? ";
			cin >> bathroomWithBath;

			// Read the luxury level of the accommodation
			cout << "Enter the luxury level of the accommodation: ";
			bool hasBBQ, hasSurroundSystem, hasBreakfastService, hasCleaningService;
			string accommodationKind;

			hasBBQ = question("Does the accommodation have a BBQ (1 for yes, 0 for no)?");
			hasSurroundSystem = question("Does the accommodation have a surround sound (1 for yes, 0 for no)?");
			hasBreakfastService = question("Does the accommodation have a breakfast service (1 for yes, 0 for no)?");
			hasCleaningService = question("Does the accommodation have a cleaning service (1 for yes, 0 for no)?");
			cout << "what kind of accommondation is it? ";
			cin >> accommodationKind;

			luxuryLevel.setBBQ(hasBBQ);
			luxuryLevel.setSurroundSystem(hasSurroundSystem);
			luxuryLevel.setBreakfastService(hasBreakfastService);
			luxuryLevel.setCleaningService(hasCleaningService);
			luxuryLevel.setAccommodationKind(accommodationKind);

			// Set the new accommodations in the Booking object
			Accommondations newAccommondation;
			newAccommondation.setID(id);
			newAccommondation.setNrPeople(maxOccupancy);
			newAccommondation.setSize(size);
			newAccommondation.setBathroomWithBath(bathroomWithBath);
			newAccommondation.setLuxuryLevel(luxuryLevel);
			newAccommodations.push_back(newAccommondation);
			bookings[i].setAccomodations(newAccommodations);

			// Update the optional services
			cout << "Enter the new optional services for the booking: ";
			bool newActivityPass, newSportPass, newBicycleRent, newSwimmingPass;
			// Read the new optional services from standard input and set it in the Booking object
			bookings[i].setActivityPass(question("want new activity pass? (yes,no)"));
			bookings[i].setSportPass(question("want new sport pass? (yes,no)"));
			bookings[i].setBicycleRent(question("want new bicycle rent? (yes,no)"));
			bookings[i].setSwimmingPass(question("want new swimming pass? (yes,no)"));

			break;
		}
	}
	if (foundId != true) {
		cout << "there is no suck ID" << endl;
	}
}

// Prompts the user for an action (add/delete/change) and ID number and performs the appropriate action on the bookings
void manageBooking(vector<Booking>& bookings) {
	cout << "What would you like to do? (add/delete/change)" << endl;
	string action;
	cin >> action;

	cout << "Enter the ID number for the booking: ";
	int id;
	cin >> id;

	if (action == "add") {
		addBooking(bookings, id);
	}
	else if (action == "delete") {
		deleteBooking(bookings, id);
	}
	else if (action == "change") {
		changeBooking(bookings, id);
	}
}
