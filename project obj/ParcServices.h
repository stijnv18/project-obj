class ParcServices
{
public:
    //function 1 GET subtropicSwimmingPool
    bool getSubtropicSwimmingPool() const {
        return subtropicSwimmingPool;
    }
    //function 2 SET subtropicSwimmingPool
    void setSubtropicSwimmingPool(bool PSsubtropicSwimmingPool) {
        subtropicSwimmingPool = PSsubtropicSwimmingPool;
    }
    //function 3 GET sportsInfrastructure
    bool getSportsInfrastructure() const {
        return sportsInfrastructure;
    }
    //function 4 SET sportsInfrastructure
    void setSportsInfrastructure(bool PSsportsInfrastructure) {
        sportsInfrastructure = PSsportsInfrastructure;
    }
    //function 5 GET BowlingAlley
    bool getBowlingAlley() const {
        return bowlingAlley;
    }
    //function 6 SET BowlingAlley
    void setBowlingAlley(bool PSbowlingAlley) {
        bowlingAlley = PSbowlingAlley;
    }
    //function 7 GET BicycleRent
    bool getBicycleRent() const {
        return bicycleRent;
    }
    //function 8 SET BicycleRent
    void setBicycleRent(bool PSbicycleRent) {
        bicycleRent = PSbicycleRent;
    }
    //function 9 GET childerensParadise
    bool getChilderensParadise() const {
        return childerensParadise;
    }
    //function 10 SET childerensParadise
    void setChilderensParadise(bool PSchilderensParadise) {
        childerensParadise = PSchilderensParadise;
    }
    //function 11 GET waterBikes
    bool getWaterBikes() const {
        return waterBikes;
    }
    //function 12 SET waterBikes
    void setWaterBikes(bool PSwaterBikes) {
        waterBikes = PSwaterBikes;
    }
private:
    bool subtropicSwimmingPool;
    bool sportsInfrastructure;
    bool bowlingAlley;
    bool bicycleRent;
    bool childerensParadise;
    bool waterBikes;
};