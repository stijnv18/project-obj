#include <string>
class LuxuryLevel
{
public:
    //function 1 GET BBQ
    bool getBBQ() {
        return BBQ;
    }
    //function 2 SET BBQ
    void setBBQ(bool LLBBQ) {
        BBQ = LLBBQ;
    }
    //function 3 GET surroundSystem
    bool getSurroundSystem() {
        return surroundSystem;
    }
    //function 4 SET surroundSystem
    void setSurroundSystem(bool LLsurroundSystem) {
        surroundSystem = LLsurroundSystem;
    }
    //function 5 GET breakfastService
    bool getBreakfastService() {
        return breakfastService;
    }
    //function 6 SET breakfastService
    void setBreakfastService(bool LLbreakfastService) {
        breakfastService = LLbreakfastService;
    }
    //function 7 GET cleaningService
    bool getCleaningService() {
        return cleaningService;
    }
    //function 8 SET cleaningService
    void setCleaningService(bool LLcleaningService) {
        cleaningService = LLcleaningService;
    }
    //function 7 GET accommodationKind
    std::string getAccommodationKind() {
        return accommodationKind;
    }
    //function 8 SET accommodationKind
    void setAccommodationKind(bool LLaccommodationKind) {
        accommodationKind = LLaccommodationKind;
    }
private:
    bool BBQ;
    bool surroundSystem;
    bool breakfastService;
    bool cleaningService;
    std::string accommodationKind;
};