#pragma once
#include "Customer.h"
#include "Accommondations.h"
#include <vector>
class Booking
{
public:
	int setID(int IDset) {
		ID = IDset;
	}

	int getID() const {
		return ID;
	}

	Customer setCustomer(Customer customerset) {
		customer = customerset;
	}

	Customer getCustomer() const {
		return customer;
	}

	void setAccomodations(std::vector<Accommondations> accommodationsset) {
		accommondations = accommodationsset;
	}

	std::vector<Accommondations> getAccommodations() const {
		return accommondations;
	}


	bool setActivityPass(bool ActivityPassset) {
		activityPass = ActivityPassset;
	}

	bool getActivityPass() const {
		return activityPass;
	}


	bool setSportPass(bool SportPassSet) {
		sportsPass = SportPassSet;
	}

	bool getSportPass() const {
		return sportsPass;
	}

	bool setSportPass(bool SportPassSet) {
		sportsPass = SportPassSet;
	}

	bool getSportPass() const {
		return sportsPass;
	}

	bool setBicycleRent(bool bicycleRentSet) {
		bicycleRent = bicycleRentSet;
	}

	bool getBicycleRent() const {
		return bicycleRent;
	}

	bool setSwimmingPass(bool swimmingPassSet) {
		swimmingPass = swimmingPassSet;
	}

	bool getSwimmingPass() const {
		return swimmingPass;
	}
	
private:
	int ID;
	Customer customer;
	std::vector<Accommondations> accommondations;
	bool activityPass;
	bool sportsPass;
	bool bicycleRent;
	bool swimmingPass;
};

