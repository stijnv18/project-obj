#include "Accommondations.h" 
#include "HotelRoom.h"
#include "Cabin.h"
#include "Booking.h"
#include "Customer.h"
#include "LuxuryLevel.h"
#include "Parcs.h"
#include "ParcServices.h"
#include "VacationParcs.h"
#include <string>

LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService,bool cleaningService, std::string accomodationKind);

int main() {
	LuxuryLevel Lux;
	Lux = LuxuryNiveau(true, true, true, true, "yes");

}

LuxuryLevel LuxuryNiveau(bool BBQ, bool SurroundSystem, bool breakfastService, bool cleaningService, std::string accomodationKind)
{
	LuxuryLevel LL;

	LL.setBBQ(BBQ);
	LL.setSurroundSystem(SurroundSystem);
	LL.setBreakfastService(breakfastService);
	LL.setCleaningService(cleaningService);
	LL.setAccommodationKind(accomodationKind);


	return LuxuryLevel();
}
