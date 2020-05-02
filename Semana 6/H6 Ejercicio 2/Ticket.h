#pragma once
#include <iostream>
#include <string>

#include "Date.h"

using namespace std;

class Ticket {
protected:
	int code;
	double price;
	Date date; //Dependency relationship

public:
	Ticket() {
		code = rand() % 999999;
		price = rand() % 10000;
		date = Date();
	}

	~Ticket(){}

	int getDay() { return date.getDay(); }
	int getMonth() { return date.getMonth(); }
	int getYear() { return date.getYear(); }

	void getInfoTicket() {
		cout << "Code: " << code << endl;
		cout << "Price: " << price << endl;
		cout << "Date: " << date.getCompleteDate() << endl;
	}
};