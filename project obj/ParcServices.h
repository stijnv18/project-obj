#pragma once
#include <string>
#include <fstream>
#include <iostream>
class ParcServices
{
public:
    std::string toString() const;
    //function 1 GET subtropicSwimmingPool
    bool getSubtropicSwimmingPool() const;
    //function 2 SET subtropicSwimmingPool
    void setSubtropicSwimmingPool(bool PSsubtropicSwimmingPool);
    //function 3 GET sportsInfrastructure
    bool getSportsInfrastructure() const;
    //function 4 SET sportsInfrastructure
    void setSportsInfrastructure(bool PSsportsInfrastructure);
    //function 5 GET BowlingAlley
    bool getBowlingAlley() const;
    //function 6 SET BowlingAlley
    void setBowlingAlley(bool PSbowlingAlley);
    //function 7 GET BicycleRent
    bool getBicycleRent() const;
    //function 8 SET BicycleRent
    void setBicycleRent(bool PSbicycleRent);
    //function 9 GET childerensParadise
    bool getChilderensParadise() const;
    //function 10 SET childerensParadise
    void setChilderensParadise(bool PSchilderensParadise);
    //function 11 GET waterBikes
    bool getWaterBikes() const;
    //function 12 SET waterBikes
    void setWaterBikes(bool PSwaterBikes);

    friend std::ostream& operator<<(std::ostream& os, const ParcServices& services)
    {
        os << services.subtropicSwimmingPool << ',';
        os << services.sportsInfrastructure << ',';
        os << services.bowlingAlley << ',';
        os << services.bicycleRent << ',';
        os << services.childerensParadise << ',';
        os  << services.waterBikes;
        return os;
    }

    // Overload the >> operator for ParcServices
    friend std::istream& operator>>(std::istream& is, ParcServices& services)
    {
        std::string input;
        is >> input; services.subtropicSwimmingPool = (input == "true");
        is >> input; services.sportsInfrastructure = (input == "true");
        is >> input; services.bowlingAlley = (input == "true");
        is >> input; services.bicycleRent = (input == "true");
        is >> input; services.childerensParadise = (input == "true");
        is >> input; services.waterBikes = (input == "true");
        return is;
    }

private:
    bool subtropicSwimmingPool;
    bool sportsInfrastructure;
    bool bowlingAlley;
    bool bicycleRent;
    bool childerensParadise;
    bool waterBikes;
};