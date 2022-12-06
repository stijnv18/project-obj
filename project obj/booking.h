#pragma once
#include "Customer.h"
#include "Accommondations.h"
#include <vector>
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
private:
    int ID;
    Customer customer;
    std::vector<Accommondations> accommondations;
    bool activityPass;
    bool sportsPass;
    bool bicycleRent;
    bool swimmingPass;
};