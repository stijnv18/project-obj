#pragma once
#include "Customer.h"
#include "Accommondations.h"
#include <vector>
#include <fstream>
#include <iostream>
class Booking
{
public:
    void setID(int IDset);
    int getID() const;
    void setCustomer(Customer customerset);
    Customer getCustomer() const;
    void setAccomodations(std::vector<Accommondations> accommodationsset);
    std::vector<Accommondations> getAccommodations() const;
    void setActivityPass(bool ActivityPassset);
    bool getActivityPass() const;
    void setSportPass(bool SportPassSet);
    bool getSportPass() const;
    void setBicycleRent(bool bicycleRentSet);
    bool getBicycleRent() const;
    void setSwimmingPass(bool swimmingPassSet);
    bool getSwimmingPass() const;

    friend std::ostream& operator<<(std::ostream& out, const Booking& obj) {
        out << obj.ID << ',' << obj.customer << ',';

        // Output the number of accommodations
        out << obj.accommondations.size() << ',';

        // Output the accommodations
        for (const auto& accommodation : obj.accommondations) {
            out << accommodation << ',';
        }

        // Output the activity pass availability
        out << obj.activityPass << ',';

        // Output the sports pass availability
        out << obj.sportsPass << ',';

        // Output the bicycle rental availability
        out << obj.bicycleRent << ',';

        // Output the swimming pass availability
        out << obj.swimmingPass;

        return out;
    }
    friend std::istream& operator>>(std::istream& in, Booking& obj) {
        in >> obj.customer;

        // Read the number of accommodations
        int numAccommodations;
        in >> numAccommodations;
        in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the rest of the line

        // Read the accommodations
        obj.accommondations.resize(numAccommodations);
        for (int i = 0; i < numAccommodations; ++i) {
            in >> obj.accommondations[i];
        }

        // Read the activity pass availability
        std::string activityPassStr;
        std::getline(in, activityPassStr, ',');
        obj.activityPass = (activityPassStr == "true");

        // Read the sports pass availability
        std::string sportsPassStr;
        std::getline(in, sportsPassStr, ',');
        obj.sportsPass = (sportsPassStr == "true");

        // Read the bicycle rental availability
        std::string bicycleRentStr;
        std::getline(in, bicycleRentStr, ',');
        obj.bicycleRent = (bicycleRentStr == "true");

        // Read the swimming pass availability
        std::string swimmingPassStr;
        std::getline(in, swimmingPassStr, ',');
        obj.swimmingPass = (swimmingPassStr == "true");

        return in;
    
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