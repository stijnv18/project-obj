#include "Accommondations.h"
#include "Customer.h"
#include "Booking.h"
#include <vector>
using namespace std;
void Booking::setID(int IDset) {
    ID = IDset;
}
int Booking::getID() const {
    return ID;
}
void Booking::setCustomer(Customer customerset) {
    customer = customerset;
}
Customer Booking::getCustomer() const {
    return customer;
}
void Booking::setAccomodatins(vector<Accommondations> accommodationsset) {
    accommondations = accommodationsset;
}
vector<Accommondations> Booking::getAccommodatins() const {
    return accommondations;
}
void Booking::setActivityPass(bool ActivityPassset) {
    activityPass = ActivityPassset;
}
bool Booking::getActivityPass() const {
    return activityPass;
}
void Booking::setSportPass(bool SportPassSet) {
    sportsPass = SportPassSet;
}
bool Booking::getSportPass() const {
    return sportsPass;
}
void Booking::setSportPass(bool SportPassSet) {
    sportsPass = SportPassSet;
}
bool Booking::getSportPass() const {
    return sportsPass;
}
void Booking::setBicycleRent(bool bicycleRentSet) {
    bicycleRent = bicycleRentSet;
}
bool Booking::getBicycleRent() const {
    return bicycleRent;
}
void Booking::setSwimmingPass(bool swimmingPassSet) {
    swimmingPass = swimmingPassSet;
}
bool Booking::getSwimmingPass() const {
    return swimmingPass;
}