#pragma once
#include <string>
#include <fstream>
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
    void setAccommodationKind(std::string LLaccommodationKind);
    friend std::ostream& operator<<(std::ostream& out, const LuxuryLevel& obj) {
        out << obj.BBQ << ',' << obj.surroundSystem << ',' << obj.breakfastService << ',' << obj.cleaningService << ',' << obj.accommodationKind;
        return out;
    }
private:
    bool BBQ;
    bool surroundSystem;
    bool breakfastService;
    bool cleaningService;
    std::string accommodationKind;
};