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
#include <fstream>
#include <cstdlib>

using namespace std;


HotelRoom addhotelroom(int floors);

Cabin createCabin(int NumberOfRooms);

ParcServices addparcservices();
ParcServices Changeparcservices(Parcs Parc);

void manageBooking(vector<Booking>& bookings);
void changeBooking(vector<Booking>& bookings, int id);
void deleteBooking(vector<Booking>& bookings, int id);
void addBooking(vector<Booking>& bookings, int id);

LuxuryLevel createLuxury();
LuxuryLevel changeLuxuryLevel(LuxuryLevel);

Accommondations createAccomodation();
Accommondations editAccommodation(Accommondations accommodation);
void SearchAccommodation(vector<Accommondations>& Accommondations);

Customer CreateCustomer();
Customer DeleteCustomer(string cust);
Customer ChangeCustomer(string cust);
void SearchCustomer( vector<Customer>& customers, string name);
Customer CreateCustomer();
void DeleteCustomer(vector<Customer>& customers);

Parcs CreateParc(vector<Parcs>& Parc);
void ChangeParc(vector<Parcs>& Parcs);
void DeleteParc(vector<Parcs>& Parc);

VacationParcs CreateVacationParc(vector<VacationParcs>& vacantionParcs);
void ChangeVacationParc(vector<VacationParcs>& vacantionParcs);
void DeleteVacationParc(vector<VacationParcs>& vacantionParcs);

bool question(string);

void writeCustomers(vector<Customer>& cust);
vector<Customer> ReadCustomrs();

void writeAccomondation(vector<Accommondations>& accom);
vector<Accommondations> ReadAccommondations();

void writeBookings(vector<Booking>& book);
vector<Booking> ReadBooking();

void writeVacationParcs(vector<VacationParcs>& vacp);
vector<VacationParcs> ReadVacationParcs();

void writeparcs(vector<Parcs>& parc);
vector<Parcs> ReadParc();


/*----------------------------------------------------------------------------*/


int main() {
	char perms;
	int quit = 0;
	int keuze;
	int parkkeuze;
	int accomodationkeuze;
	do
	{
		cout << "Are you a customer, an employee or the owner?" << endl;
		do
		{
			cout << "C - customer" << endl;
			cout << "E - employee" << endl;
			cout << "O - owner" << endl;
			cin >> perms;
		} while ((perms != 'o') and (perms != 'e') and (perms != 'c'));
		cout << "What would you like to do?" << endl;
		switch (perms)
		{
		case 'o':
			cout << "(1) Manage parks" << endl;
			cout << "(2) Manage accomodations" << endl;
			cout << "(3) Manage vacationparks" << endl;
			cout << "(0) quit" << endl;
			do
			{
				cout << "1, 2, 3 or 0 : ";
				cin >> keuze;
				switch (keuze)
				{
				case 1:
					cout << "You chose the option : Manage parks" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create new park" << endl;
					cout << "(2) Change park" << endl;
					cout << "(3) Delete park" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2 ,3 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						default:
							break;
						}
					} while ((keuze != 1) and (keuze != 2) and (keuze != 3) and (keuze != 0));
					break;
				case 2:
					cout << "You chose the option : Manage accomodations" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create accomodation" << endl;
					cout << "(2) Change accomodation" << endl;
					cout << "(3) Delete accomodation" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2, 3 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						default:
							break;
						}
					} while ((keuze != 1) and (keuze != 2) and (keuze != 3) and (keuze != 0));
					break;
				case 3:
					cout << "You chose the option : Manage vacationpark" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create vacationpark" << endl;
					cout << "(2) Change vacationpark" << endl;
					cout << "(3) Delete vacationpark" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2 ,3 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						default:
							break;
						}
					} while ((keuze != 1) and (keuze != 2) and (keuze != 3) and (keuze != 0));
				case 0:
				default:
					break;
				}
			} while ((keuze != 1) and (keuze != 2) and (keuze != 0));
		case 'e':
			cout << "(1) Manage customers" << endl;
			cout << "(2) Manage accomodations" << endl;
			cout << "(3) Manage bookings" << endl;
			cout << "(0) quit" << endl;
			do {
				cout << "1, 2, 3 or 0? : ";
				cin >> keuze;
				switch (keuze)
				{
				case 1:
					cout << "You chose the option : Manage customer" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create customer acccount" << endl;
					cout << "(2) Change customer account" << endl;
					cout << "(3) Delete customer account" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2,3 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						default:
							break;
						}
					} while ((keuze != 1) and (keuze != 2) and (keuze != 3) and (keuze != 0));
					break;
				case 2:
					cout << "You chose the option : Manage accomodation" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create accomodation" << endl;
					cout << "(2) Change accomodation" << endl;
					cout << "(3) Delete accomodation" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2,3 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						default:
							break;
						}
						} while ((keuze != 1) and (keuze != 2) and (keuze != 3) and (keuze != 0));
						break;
				case 3:
					cout << "You chose the option : Manage booking" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create booking" << endl;
					cout << "(2) Change booking" << endl;
					cout << "(3) Delete booking" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2, 3 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						default:
							break;
						}
					} while ((keuze != 1) and (keuze != 2) and (keuze != 3) and (keuze != 0));
					break;
				case 0:
				default:
					break;
					}
				} while ((keuze != 1) and (keuze != 2) and (keuze != 0));
		case 'c':
			cout << "(1) Manage your account" << endl;
			cout << "(2) Manage your bookings" << endl;
			cout << "(0) quit" << endl;
			do
			{
				cout << "1, 2 or 0? : ";
				cin >> keuze;
				switch (keuze)
				{
				case 1:
					cout << "You chose the option : Manage your account" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create new customer account" << endl;
					cout << "(2) Change customer account" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						default:
							break;
						}
					} while ((keuze != 1) and (keuze != 2) and (keuze != 0));
					break;
				case 2:
					cout << "You chose the option : Manage your bookings" << endl;
					cout << "What would you like to do?" << endl;
					cout << "--------------------------" << endl;
					cout << "(1) Create new booking" << endl;
					cout << "(2) Edit booking" << endl;
					cout << "(0) quit" << endl;
					do
					{
						cout << "1, 2 or 0 : ";
						cin >> keuze;
						switch (keuze)
						{
						case 1:
							break;
						case 2:
							break;
						case 0:
							break;
						}
					} while ((keuze != 1) and (keuze != 2) and (keuze != 0));
					break;
				case 0:
					break;
				}
			} while ((keuze != 1) and (keuze != 2) and (keuze != 0));
			}
		} while (!quit);
	}



/*----------------------------------------------------------------------------*/

void writeCustomers(vector<Customer>& cust) {
	ofstream output_file("Customers.txt");
	for (Customer x : cust) {
		output_file << x << '\n';
	}

}
vector<Customer> ReadCustomrs() {
	ifstream input_file("Customers.txt");
	vector<Customer> cust;
	Customer customer;
	while (input_file >> customer) {
		cust.push_back(customer);
	}
	return cust;
}

void writeBookings(vector<Booking>& book)
{
	ofstream output_file("Booking.txt");

	for (const auto& booking : book) {
		output_file << booking << std::endl;
	}
}
vector<Booking> ReadBooking()
{
	ifstream input_file("Accomondation.txt");
	vector<Booking> book;
	Booking booking;
	while (input_file >> booking) {
		book.push_back(booking);
	}
	return book;
}

void writeAccomondation(vector<Accommondations>& accom) {
	ofstream output_file("Accomondation.txt");

	for (const auto& accommondation : accom) {
		output_file << accommondation << std::endl;
	}
}
vector<Accommondations> ReadAccommonedations()
{
	ifstream input_file("Accomondation.txt");
	vector<Accommondations> accom;
	Accommondations accommondation;
	while (input_file >> accommondation) {
		accom.push_back(accommondation);
	}
	return accom;
}

void writeVacationParcs(vector<VacationParcs>& vacp)
{
	ofstream output_file("vacparc.txt");

	for (const auto& vacationparc : vacp) {
		output_file << vacationparc << std::endl;
	}
}
vector<VacationParcs> ReadVacationParcs()
{
	ifstream input_file("vacparc.txt");
	vector<VacationParcs> vacp;
	VacationParcs vacparc;
	while (input_file >> vacparc) {
		vacp.push_back(vacparc);
	}
	return vacp;
}

void writeparcs(vector<Parcs>& parc)
{
	ofstream output_file("parc.txt");

	for (const auto& parcs : parc) {
		output_file << parcs << std::endl;
	}
}
vector<Parcs> ReadParc()
{
	ifstream input_file("parc.txt");
	vector<Parcs> parc;
	Parcs parcs;
	while (input_file >> parcs) {
		parc.push_back(parcs);
	}
	return parc;
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

	cabin.setBathroomWithBath(question("does it have a bath? (y, n)"));

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
		cout << "what is the new number of people:" << endl;
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
		newbath = question("Is there a bath: (y, n)");
		accommodation.setID(newbath);
	}
	else if (option == 5)
	{
	luxurylevel = changeLuxuryLevel(luxurylevel);
	}

	return accommodation;
}
void SearchAccommodation(vector<Accommondations>& Listaccomodations)
{
	int searchId;
	int choise;
	char askcreate;
	int i = 0;
	cout << "What's the ID you're looking for? : " << endl;
	cin >> searchId;

	for (Accommondations Accom : Listaccomodations)
	{
		i++;
		if (Accom.getID() == searchId)
		{
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
			do {
				cout << "Would you like to Change or Delete this Accomondation? : " << endl << endl;
				cout << "- 1 : Change Accomondation" << endl << "- 2 : Delete Accomondation" << endl << "- 0 : Stop" << endl << endl;
				do {
					cout << "Choise: ";
					cin >> choise;
				} while (choise < 0 or choise > 4);

				if (choise == 1) {
					editAccommodation(Accom);
					cout << endl << "Accomondation has been changed!" << endl;
					cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
				}
				if (choise == 2) {

					Listaccomodations.erase(Listaccomodations.begin() + i);
					cout << endl << "Accomondation has been deleted!" << endl;
					break;
				}
			} while (choise != 0);
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		else
		{
			cout << "Couldn't find a Accomondation with the given id!" << endl;
		}
	}
	askcreate = question("Would you like to create a new Accomondation?  (y/n) :");
	if (askcreate)
	{
		createAccomodation();
		cout << endl << "Accomondation has been created!" << endl;
		cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	}
	else
	{
		return;
	}

};

LuxuryLevel createLuxury()
{
	LuxuryLevel LL;
	bool BBQ;
	bool SurroundSystem;
	bool breakfastService;
	bool cleaningService;
	string accomodationKind;

	//yes/no  questions
	SurroundSystem = question("is thre a surround system: (y, n)");
	BBQ = question("Is there a bbq: (y, n)");
	breakfastService = question("Is there breakfast service: (y, n)");
	cleaningService = question("Is there a cleaning Service: (y, n)");
	
	//string
	cout << "what is the accomodatoin kind:";
	cin.ignore();
	getline(cin, accomodationKind);

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
	hotelroom.setChildrenBeds(question("children bed in room (y, n):"));
	hotelroom.setFloor(floor);
	hotelroom.setLocation(location);
	hotelroom.setNrBeds(nrBeds);
	return hotelroom;
}

Customer CreateCustomer() {
	Customer customer;
	std::string naam, adres, email;

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	cout << "You want to create a customer account:" << endl << endl;
	cout << endl << "What is your name: ";
	cin.ignore();
	getline(cin, naam);
	cout << endl <<  "What is your address: ";
	cin.ignore();
	getline(cin, adres);
	cout << endl << "What is your email address: ";
	cin.ignore();
	getline(cin, email);

	customer.setName(naam);
	customer.setAddress(adres);
	customer.setMail(email);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	return customer;
}
Customer ChangeCustomer(std::string cust) {
	Customer customer;
	int choise;
	std::string naam, adres, email;

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	cout << "Your are currently changing Customer account: " << cust << endl;
	do {
		cout << "- 1 : Change Name" << endl << "- 2 : Change address" << endl << "- 3 : Change Email" << endl << "- 0 : Stop" << endl << endl;
		do {
			cout << "Choise: ";
			cin >> choise;
		} while (choise < 0 or choise > 4);
		

		if (choise == 1) {
			cout << "What is the new name: ";
			cin.ignore();
			getline(cin, naam);
			customer.setName(naam);
			cout << "The name is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 2) {
			cout << endl << "What is the new address: ";
			cin.ignore();
			getline(cin, adres);
			customer.setAddress(adres);
			cout << endl << "The adres is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 3) {
			cout << "What is the new Email: ";
			cin.ignore();
			getline(cin, email);
			customer.setMail(email);
			cout << endl << "The email is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
	} while (choise != 0);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	return customer;
}
void DeleteCustomer(vector<Customer>& customers) {

	std::string name, Cnaam;
	int Csize, Nsize, i;

	Csize = customers.size();
	Nsize = customers.size();
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	if (question("You want to delete a customer: (y, n) ? ")) {
		cout << "Give the name of the customer :" << endl;
		cin.ignore();
		getline(cin, name);
		for (i = 0; i < Csize; i++)
		{
			Cnaam = customers[i].getName();
			if (name.compare(Cnaam) == 0) {
				if (question("Are you sure you want to delete a customer: (y, n) ? ")) {
					customers.erase(customers.begin() + i);
					Nsize = customers.size();
				}
				break;
			}

		}
		if (Csize == Nsize) {
			cout << endl << "There was no change! Maybe the customer name does not exist" << endl;
		}
		else {
			cout << endl << "A customer was deleted!" << endl;
		}
	}
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

}
void SearchCustomer(vector<Customer>& customers, string name)
{
	string searchname;
	int choise;
	char askcreate;
	cout << "What's the first name of the customer you're looking for? : " << endl;
	cin.ignore();
	getline(cin, searchname);

	for (Customer customer : customers)
	{
		if (customer.getName() == searchname)
		{
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
			do {
				cout << "Would you like to Change or Delete this customer? : " << endl << endl;
				cout << "- 1 : Change customer" << endl << "- 2 : Delete customer" << endl << "- 0 : Stop" << endl << endl;
				do {
					cout << "Choise: ";
					cin >> choise;
				} while (choise < 0 or choise > 4);

				if (choise == 1) {
					ChangeCustomer(searchname);
					cout << endl << "Customer has been changed!" << endl;
					cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
				}
				if (choise == 2) {
					DeleteCustomer(customers);
					cout << endl << "Customer has been deleted!" << endl;
					break;
				}
			} while (choise != 0);
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		else
		{
			cout << "Couldn't find a customer with the given name!" << endl;
		}
	}
	askcreate = question("Would you like to create a new customer?  (y/n) :");
	if (askcreate)
	{
		CreateCustomer();
		cout << endl << "Customer has been created!" << endl;
		cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	}
	else
	{
		return;
	}

};
//void SearchCustomer(vector<Customer>& customers, string name)
//{
//	string searchname;
//	int choise;
//	char askcreate;
//	cout << "What's the first name of the customer you're looking for? : " << endl;
//	cin.ignore();
//	getline(cin, searchname);
//
//	for (Customer customer : customers)
//	{
//		if (customer.getName() == searchname)
//		{
//			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
//			do {
//				cout << "Would you like to Change or Delete this customer? : " << endl << endl;
//				cout << "- 1 : Change customer" << endl << "- 2 : Delete customer" << endl << "- 0 : Stop" << endl << endl;
//				do {
//					cout << "Choise: ";
//					cin >> choise;
//				} while (choise < 0 or choise > 4);
//
//				if (choise == 1) {
//					ChangeCustomer(searchname);
//					cout << endl << "Customer has been changed!" << endl;
//					cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
//				}
//				if (choise == 2) {
//					DeleteCustomer(customers);
//					cout << endl << "Customer has been deleted!" << endl;
//					break;
//				}
//			} while (choise != 0);
//			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
//		}
//		else
//		{
//			cout << "Couldn't find a customer with the given name!" << endl;
//		}
//	}
//	askcreate = question("Would you like to create a new customer?  (y/n) :");
//	if (askcreate)
//	{
//		CreateCustomer();
//		cout << endl << "Customer has been created!" << endl;
//		cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
//	}
//	else
//	{
//		return;
//	}
//
//};

Cabin createCabin(int NumberOfRooms) {
	Cabin temp;
	temp.setCabin(NumberOfRooms);
	return temp;
}

ParcServices addparcservices()
{
	ParcServices parcservices;

	cout << "services the park has to offer" << endl;
	parcservices.setSubtropicSwimmingPool(question("subtropic pool (y, n):"));
	parcservices.setSportsInfrastructure(question("sportinfrastructure (y, n):"));
	parcservices.setBowlingAlley(question("bowling alley (y, n):"));
	parcservices.setBicycleRent(question("bicycle rent (y, n):"));
	parcservices.setChilderensParadise(question("children paradise (y, n):"));
	parcservices.setWaterBikes(question("water bikes (y, n):"));
	return parcservices;
}
ParcServices Changeparcservices(Parcs Parc) {

	ParcServices parcservices;
	int choise;

	parcservices = Parc.getServices();

	do {

		cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		cout << "services the park" << Parc.getName() << "has to offer:" << endl;
		cout << parcservices.toString() << endl;
		cout << "What would you like to change:" << endl;
		cout << endl << "- 1 : Change subtropicSwimmingPool" << endl << "- 2 : Change SportsInfrastructure" << endl << "- 3 : Change BowlingAlley";
		cout << endl << "- 4 : Change BicycleRent" << endl << "- 5 : Change childerensParadise" << endl << "- 6 : Change waterBikes" << endl << "- 0 : Stop" << endl << endl;
		do {
			cout << "Choise: ";
			cin >> choise;
		} while (choise < 0 or choise > 7);

		if (choise == 1) {
			parcservices.setSubtropicSwimmingPool(parcservices.getSubtropicSwimmingPool() ? false : true);
		}
		else if (choise == 2) {
			parcservices.setSportsInfrastructure(parcservices.getSportsInfrastructure() ? false : true);
		}
		else if (choise == 3) {
			parcservices.setBowlingAlley(parcservices.getBowlingAlley() ? false : true);
		}
		else if (choise == 4) {
			parcservices.setBicycleRent(parcservices.getBicycleRent() ? false : true);
		}
		else if (choise == 5) {
			parcservices.setChilderensParadise(parcservices.getChilderensParadise() ? false : true);
		}
		else if (choise == 6) {
			parcservices.setWaterBikes(parcservices.getWaterBikes() ? false : true);
		}

	} while (choise != 0);

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
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
			cin.ignore();
			getline(cin, name);
			newCustomer.setName(name);

			cout << "Enter the customer's address: ";
			cin.ignore();
			getline(cin, address);
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

			cout << "Does the accommodation have a bathroom with a bath (y, n)? ";
			cin >> bathroomWithBath;

			// Read the luxury level of the accommodation
			cout << "Enter the luxury level of the accommodation: ";
			bool hasBBQ, hasSurroundSystem, hasBreakfastService, hasCleaningService;
			string accommodationKind;

			hasBBQ = question("Does the accommodation have a BBQ (y, n)?");
			hasSurroundSystem = question("Does the accommodation have a surround sound (y, n)?");
			hasBreakfastService = question("Does the accommodation have a breakfast service (y, n)?");
			hasCleaningService = question("Does the accommodation have a cleaning service (y, n)?");
			cout << "what kind of accommondation is it? ";
			cin.ignore();
			getline(cin, accommodationKind);

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
			bookings[i].setActivityPass(question("want new activity pass? (y,n)"));
			bookings[i].setSportPass(question("want new sport pass? (y,n)"));
			bookings[i].setBicycleRent(question("want new bicycle rent? (y,n)"));
			bookings[i].setSwimmingPass(question("want new swimming pass? (y,n)"));

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

Parcs CreateParc(vector<Parcs>& Parc) {
	Parcs parc;
	std::string name, address;
	ParcServices ParcService;
	vector<Accommondations> Accommondation;

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	if (question("You want to add a new parc : (y,n) ? ")) {

		cout << "Give the name of the new parc: " << endl;
		cin.ignore();
		getline(cin, name);
		cout << "Give the address of the new parc:" << endl;
		cin.ignore();
		getline(cin, address);
		cout << "Give the services of the parc:" << endl;
		ParcService = addparcservices();
		cout << "The program has automaticly made a list for Accommondation:" << endl;

	}

	parc.setName(name);
	parc.setAddress(address);
	parc.setServices(ParcService);
	parc.setAccommondations(Accommondation);

	Parc.push_back(parc);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	return parc;
}
void ChangeParc(vector<Parcs>& Parcs) {

	int choise, Vsize, i, Pchoise;
	std::string Pname, name, address;
	ParcServices ParcService;

	Vsize = Parcs.size();

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	cout << "Your are currently changing parcs: " << endl;
	cout << "This are the current parcs: " << endl;

	for (i = 0; i < Vsize; i++) {
		Pname = Parcs[i].getName();
		cout << i << ") " << Pname << endl;
	}
	cout << "Which parc would you like to change: " << endl;
	do {
		cout << "Choise: ";
		cin >> Pchoise;
	} while (Pchoise < 0 or Pchoise > Vsize - 1);

	do {
		cout << endl << "- 1 : Change Name" << endl << "- 2 : Change address" << endl << "- 3 : Add Services" << endl << "- 4 : Delete Services" << endl << "- 0 : Stop" << endl << endl;
		do {
			cout << "Choise: ";
			cin >> choise;
		} while (choise < 0 or choise > 5);


		if (choise == 1) {
			cout << "What is the new name: ";
			cin.ignore();
			getline(cin, name);
			Parcs[Pchoise].setName(name);
			cout << "The name is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 2) {
			cout << endl << "What is the new address: ";
			cin.ignore();
			getline(cin, address);
			Parcs[Pchoise].setAddress(address);
			cout << endl << "The address is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 3) {
			cout << "Add Services through parc: ";
			ParcService = Changeparcservices(Parcs[Pchoise]);
			Parcs[Pchoise].setServices(ParcService);
			cout << endl << "The services is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 4) {
			cout << "Delete Services through parc: ";
			ParcService = Changeparcservices(Parcs[Pchoise]);
			Parcs[Pchoise].setServices(ParcService);
			cout << endl << "The services is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
	} while (choise != 0);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

}
void DeleteParc(vector<Parcs>& Parc) {
	std::string name, Pnaam;
	int Vsize, Nsize, i;

	Vsize = Parc.size();
	Nsize = Parc.size();
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	if (question("You want to delete a parc : (y, n) ? ")) {
		cout << "Give the name of the parc :" << endl;
		cin.ignore();
		getline(cin, name);
		for (i = 0; i < Vsize; i++)
		{
			Pnaam = Parc[i].getName();
			if (name.compare(Pnaam) == 0) {
				if (question("Are you sure you want to delete the parc: (y, n) ? ")) {
					Parc.erase(Parc.begin() + i);
					Nsize = Parc.size();
				}
				break;
			}

		}
		if (Vsize == Nsize) {
			cout << endl << "There was no change! Maybe the parc name does not exist" << endl;
		}
		else {
			cout << endl << "A Vacation parc was deleted!" << endl;
		}
	}
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
}

VacationParcs CreateVacationParc(vector<VacationParcs>& vacantionParcs) {
	VacationParcs VacationParc;
	string name, address, VAT;
	vector<Parcs> parc;
	vector<Customer> customers;

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	if (question("You want to add a new vacation parc : (y,n) ? ")) {

		cout << "Give the name of the new vacation parc:" << endl;
		cin.ignore();
		getline(cin, name);
		cout << "Give the address of the new vacation parc:" << endl;
		cin.ignore();
		getline(cin, address);
		cout << "Give the VAT nummer of the new vacation parc:" << endl;
		cin.ignore();
		getline(cin, VAT);
		cout << "The program has automaticly made a list for parcs:" << endl;
		cout << "The program has automaticly made a list for customers:" << endl;

	}

	VacationParc.setName(name);
	VacationParc.setAddress(address);
	VacationParc.setVAT(VAT);
	VacationParc.setParcs(parc);
	VacationParc.setCustomers(customers);

	vacantionParcs.push_back(VacationParc);

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	return VacationParc;
}
void ChangeVacationParc(vector<VacationParcs>& vacantionParcs) {
	int choise,Vsize,i,VPchoise;
	std::string VPname, name, address, VAT;
	
	Vsize = vacantionParcs.size();

	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
	cout << "Your are currently changing vacantionParcs: " << endl;
	cout << "This are the current vacantionParcs: " << endl;

	for (i = 0; i < Vsize; i++) {
		VPname = vacantionParcs[i].getName();
		cout << i << ") " << VPname << endl;
	}
	cout << "Which vacationParc would you like to change: " << endl;
	do {
		cout << "Choise: ";
		cin >> VPchoise;
	} while (VPchoise < 0 or VPchoise > Vsize-1);

	do {
		cout << endl << "- 1 : Change Name" << endl << "- 2 : Change address" << endl << "- 3 : Change VAT" << endl << "- 0 : Stop" << endl << endl;
		do {
			cout << "Choise: ";
			cin >> choise;
		} while (choise < 0 or choise > 4);


		if (choise == 1) {
			cout << "What is the new name: ";
			cin.ignore();
			getline(cin, name);
			vacantionParcs[VPchoise].setName(name);
			cout << "The name is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 2) {
			cout << endl << "What is the new address: ";
			cin.ignore();
			getline(cin, address);
			vacantionParcs[VPchoise].setAddress(address);
			cout << endl << "The address is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
		if (choise == 3) {
			cout << "What is the new VAT: ";
			cin.ignore();
			getline(cin, VAT);
			vacantionParcs[VPchoise].setVAT(VAT);
			cout << endl << "The VAT is changed" << endl;
			cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
		}
	} while (choise != 0);
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
}
void DeleteVacationParc(vector<VacationParcs>& vacantionParcs) {

	std::string name, VPnaam;
	int Vsize,Nsize,i;

	Vsize = vacantionParcs.size();
	Nsize = vacantionParcs.size();
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;

	if (question("You want to delete a vacation parc : (y, n) ? ")) {
		cout << "Give the name of the vacation parc :" << endl;
		cin.ignore();
		getline(cin, name);
		for (i = 0; i < Vsize; i++)
		{
			VPnaam = vacantionParcs[i].getName();
			if (name.compare(VPnaam) == 0) {
				if (question("Are you sure you want to delete the vacation parc: (y, n) ? ")) {
					vacantionParcs.erase(vacantionParcs.begin() + i);
					Nsize = vacantionParcs.size();
				}
				break;
			}

		}
		if (Vsize == Nsize) {
			cout << endl << "There was no change! Maybe the vacation parc name does not exist" << endl;
		}
		else {
			cout << endl << "A Vacation parc was deleted!" << endl;
		}
	}
	cout << endl << endl << "----------------------------------------------------------------------------" << endl << endl;
}

bool question(string q) {
	string temp;
	cout << q << endl;
	do { cin >> temp; } while (temp != "n" and temp != "y");
	return temp == "y";
}