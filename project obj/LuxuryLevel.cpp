#include "LuxuryLevel.h"
#include <string>
using namespace std;

//function 1 GET BBQ
bool LuxuryLevel::getBBQ() const {
    return BBQ;
}
//function 2 SET BBQ
void LuxuryLevel::setBBQ(bool LLBBQ) {
    BBQ = LLBBQ;
}
//function 3 GET surroundSystem
bool LuxuryLevel::getSurroundSystem() const {
    return surroundSystem;
}
//function 4 SET surroundSystem
void LuxuryLevel::setSurroundSystem(bool LLsurroundSystem) {
    surroundSystem = LLsurroundSystem;
}
//function 5 GET breakfastService
bool LuxuryLevel::getBreakfastService() const {
    return breakfastService;
}
//function 6 SET breakfastService
void LuxuryLevel::setBreakfastService(bool LLbreakfastService) {
    breakfastService = LLbreakfastService;
}
//function 7 GET cleaningService
bool LuxuryLevel::getCleaningService() const {
    return cleaningService;
}
//function 8 SET cleaningService
void LuxuryLevel::setCleaningService(bool LLcleaningService) {
    cleaningService = LLcleaningService;
}
//function 7 GET accommodationKind
string LuxuryLevel::getAccommodationKind() const {
    return accommodationKind;
}
//function 8 SET accommodationKind
void LuxuryLevel::setAccommodationKind(string LLaccommodationKind) {
    accommodationKind = LLaccommodationKind;
}