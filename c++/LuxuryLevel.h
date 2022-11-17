#pragma once
#include <string>

class LuxuryLevel
{
public:
    //function 1 GET BBQ
    bool getBBQ() const;
    //function 2 SET BBQ
    void setBBQ(bool LLBBQ);
    //function 3 GET surroundSystem
    bool getSurroundSystem() const;
    //function 4 SET surroundSystem
    void setSurroundSystem(bool LLsurroundSystem);
    //function 5 GET breakfastService
    bool getBreakfastService() const;
    //function 6 SET breakfastService
    void setBreakfastService(bool LLbreakfastService);
    //function 7 GET cleaningService
    bool getCleaningService() const;
    //function 8 SET cleaningService
    void setCleaningService(bool LLcleaningService);
    //function 7 GET accommodationKind
    std::string getAccommodationKind() const;
    //function 8 SET accommodationKind
    void setAccommodationKind(bool LLaccommodationKind);
private:
    bool BBQ;
    bool surroundSystem;
    bool breakfastService;
    bool cleaningService;
    std::string accommodationKind;
};