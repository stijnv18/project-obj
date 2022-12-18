#pragma once
#include "ParcServices.h"
#include "Accommondations.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
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
    friend std::ostream& operator<<(std::ostream& os, const Parcs& parcs)
    {
        os << parcs.name;
        os << "," << parcs.address;
        os << "," << parcs.services;
        os << ",";
        for (const auto& accommodation : parcs.accommondations)
        {
            os << accommodation << ",";
        }
        return os;
    }

    // Overload the >> operator for Parcs
    friend std::istream& operator>>(std::istream& is, Parcs& parcs)
    {
        is >> parcs.name;
        is >> parcs.address;
        is >> parcs.services;
        int numAccommodations;
        is >> numAccommodations;
        parcs.accommondations.resize(numAccommodations);
        for (auto& accommodation : parcs.accommondations)
        {
            is >> accommodation;
        }
        return is;
    }

private:
	std::string name;
	std::string address;
	ParcServices services;
	std::vector<Accommondations> accommondations;
};