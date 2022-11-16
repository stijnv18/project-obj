#pragma once
#include "LuxuryLevel.h"
class Accommondations {
public:
    int getID()const {
        return ID;
    }
    void setID(int IDNumber) {
        ID = IDNumber;
    }
    int getNrPeople()const {
        return nrPeople;
    }
    void setNrPeople(int nrPeopleNumber) {
        nrPeople = nrPeopleNumber;
    }
    int getSize()const {
        return size;
    }
    void setSize(int sizeNumber) {
        size = sizeNumber;
    }
    bool getBathroomWithBath()const {
        return ID;
    }
    void setBathroomWithBath(bool bathroomWithBathState) {
        bathroomWithBath = bathroomWithBathState;
    }
    LuxuryLevel getLuxuryLevel()const {
        return luxuryLevel;
    }
    void setLuxuryLevel(LuxuryLevel luxuryLevelSet) {
        luxuryLevel = luxuryLevelSet;
    }
private:
    int ID;
    int nrPeople;
    int size;
    bool bathroomWithBath;
    LuxuryLevel luxuryLevel;
};