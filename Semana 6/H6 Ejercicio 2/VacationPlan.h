#pragma once
#include <iostream>
#include <string>

#include "Hotel.h"
#include "Ticket.h"

using namespace std;

class VacationPlan : public Hotel, public Ticket {
private:
	int duration;
	int numberOfPersons;

public:
	VacationPlan() {
		duration = 1 + rand() % 15;
		numberOfPersons = 2 + rand() % 9;
	}

	~VacationPlan(){}

	void getInfoVacationPlan() {
		cout << "Duration: " << duration << endl;
		cout << "Number of persons: " << numberOfPersons << endl;
		getInfoTicket();
		getInfoHotel();
	}

};