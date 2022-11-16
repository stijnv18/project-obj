#pragma once
class cabin {
public:
	void setCabin(int bedroomsNumber) {
		bedrooms = bedroomsNumber;
	}

	int getCabin() const {
		return bedrooms;
	}
private:
	int bedrooms;
};


