#pragma once
class ParcServices
{
public:
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
private:
    bool subtropicSwimmingPool;
    bool sportsInfrastructure;
    bool bowlingAlley;
    bool bicycleRent;
    bool childerensParadise;
    bool waterBikes;
};