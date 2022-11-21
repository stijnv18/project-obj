#pragma once
#include "Accommondations.h" 
#include "HotelRoom.h"
#include "Cabin.h"
#include "Booking.h"
#include "Customer.h"
#include "LuxuryLevel.h"
#include "Parcs.h"
#include "ParcServices.h"
#include "VacationParcs.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

Cabin createCabin(int);


int main() {
	Cabin cabin;
	cabin = createCabin(110);
}

Cabin createCabin(int NumberOfRooms) {
	Cabin temp;
	temp.setCabin(NumberOfRooms);
	return temp;
}