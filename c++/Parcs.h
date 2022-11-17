#pragma once
#include "ParcServices.h"
#include "Accommondations.h"
#include <vector>
#include <string>
class Parcs {
public:
	void setName(std::string nameName);
	std::string getName()const;
	void setAddress(std::string addressName);
	std::string getAddress()const;
	void setServices(ParcServices servicesSet);
	ParcServices getServices()const;
	void setAccommondations(std::vector<Accommondations> accommondationsSet);
	std::vector<Accommondations> getAccommondations()const;
private:
	std::string name;
	std::string address;
	ParcServices services;
	std::vector<Accommondations> accommondations;
};