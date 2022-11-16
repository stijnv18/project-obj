#pragma once
#include <string>

class Customer {
public:
	void setName(std::string nameSet) {
		name = nameSet;
	}

	std::string getName() const {
		return name;
	}

	void setAddress(std::string addressSet) {
		address = addressSet;
	}

	std::string getAddress() const {
		return address;
	}

	void setMail(std::string mailSet) {
		mail = mailSet;
	}

	std::string getMail() const {
		return mail;
	}
private:
	std::string name;
	std::string address;
	std::string mail;
};
