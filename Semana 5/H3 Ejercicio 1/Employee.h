#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Employee {
private:
	string name;
	string lastName;
	Date birthDate;
	Date hiringDate;

public:
	Employee(string _name, string _lastName, Date _birthDate, Date _hiringDate) {
		birthDate = _birthDate;
		hiringDate = _hiringDate;
		name = _name;
		lastName = _lastName;
	}

	int getBirthMonth() { return birthDate.getMonth(); }
	int getHiringMonth() { return hiringDate.getMonth(); }
	int getHiringYear() { return hiringDate.getYear(); }

	void printData() {
		cout << "Name: " << name << endl;
		cout << "Last Name: " << lastName << endl;
		cout << "Birthdate: "; birthDate.monthLetters(); cout << endl;
		cout << "Hiring date: "; hiringDate.monthLetters(); cout << endl << endl;
	}
};