#include "ParcServices.h"
#include <string>
#include <sstream>

std::string ParcServices::toString() const {
    std::stringstream ss;
    ss << "SubtropicSwimmingPool: " << (getSubtropicSwimmingPool() ? "true" : "false")
       << "\nSportsInfrastructure: " << (getSportsInfrastructure() ? "true" : "false")
       << "\nBowlingAlley: " << (getBowlingAlley() ? "true" : "false")
       << "\nBicycleRent: " << (getBicycleRent() ? "true" : "false")
       << "\nChilderensParadise: " << (getChilderensParadise() ? "true" : "false")
       << "\nWaterBikes: " << (getWaterBikes() ? "true\n" : "false\n");
    return ss.str();
}
//function 1 GET subtropicSwimmingPool
bool ParcServices::getSubtropicSwimmingPool() const {
    return subtropicSwimmingPool;
}
//function 2 SET subtropicSwimmingPool
void ParcServices::setSubtropicSwimmingPool(bool PSsubtropicSwimmingPool) {
    subtropicSwimmingPool = PSsubtropicSwimmingPool;
}
//function 3 GET sportsInfrastructure
bool ParcServices::getSportsInfrastructure() const {
    return sportsInfrastructure;
}
//function 4 SET sportsInfrastructure
void ParcServices::setSportsInfrastructure(bool PSsportsInfrastructure) {
    sportsInfrastructure = PSsportsInfrastructure;
}
//function 5 GET BowlingAlley
bool ParcServices::getBowlingAlley() const {
    return bowlingAlley;
}
//function 6 SET BowlingAlley
void ParcServices::setBowlingAlley(bool PSbowlingAlley) {
    bowlingAlley = PSbowlingAlley;
}
//function 7 GET BicycleRent
bool ParcServices::getBicycleRent() const {
    return bicycleRent;
}
//function 8 SET BicycleRent
void ParcServices::setBicycleRent(bool PSbicycleRent) {
    bicycleRent = PSbicycleRent;
}
//function 9 GET childerensParadise
bool ParcServices::getChilderensParadise() const {
    return childerensParadise;
}
//function 10 SET childerensParadise
void ParcServices::setChilderensParadise(bool PSchilderensParadise) {
    childerensParadise = PSchilderensParadise;
}
//function 11 GET waterBikes
bool ParcServices::getWaterBikes() const {
    return waterBikes;
}
//function 12 SET waterBikes
void ParcServices::setWaterBikes(bool PSwaterBikes) {
    waterBikes = PSwaterBikes;
}