#include <string>
class HotelRoom
{
public:
    int getFloor() const {
        return floor;
    }
    void setFloor(int floorNumbers) {
        floor = floorNumbers;
    }
    std::string getLocation() const {
        return location;
    }
    void setLocation(std::string locationName) {
        location = locationName;
    }
    int getNrBeds() const {
        return nrBeds;
    }
    void setNrBeds(int nrBedsNumber) {
        nrBeds = nrBedsNumber;
    }
    bool getChildrenBeds() const {
        return childrenBed;
    }
    void setChildrenBeds(bool childrenBedsState) {
        childrenBed = childrenBedsState;
    }
private:
    int floor;
    std::string location;
    bool childrenBed;
    int nrBeds;
};