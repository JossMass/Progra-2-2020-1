#include <ctime>
#include <conio.h>

#include "ArrVacationPlan.h"

int main() {
	srand(time(NULL));
	ArrVacationPlan* arr = new ArrVacationPlan();

	arr->addVacationPlan();
	arr->addVacationPlan();
	arr->addVacationPlan();
	arr->addVacationPlan();

	arr->listAllVacationPlan();
	_getch(); system("cls");
	arr->vacationPlanSameHotelName("Westin");
	_getch(); system("cls");
	arr->vacationPlanIntADateInterval(1990, 2020);
	_getch(); system("cls");
	arr->listAllTickets();
	_getch();

	return 0;
}