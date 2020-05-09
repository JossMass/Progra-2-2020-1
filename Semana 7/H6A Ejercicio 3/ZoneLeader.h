#pragma once
#include "Secretary.h"
#include "Car.h"
#include "Seller.h"

class ZoneLeader : public Employee {
private:
	int officeNumber;
	Secretary* secretary;
	vector<Seller*> sellers;
	Car car;

public:
	ZoneLeader(){}
	ZoneLeader(string name, string lastName, int DNI, string address,
		int phone, double salary, Secretary* secretary) : Employee(name, lastName, DNI, address,
			phone, salary) {

		car = Car();
		officeNumber = rand() % 101;
		this->secretary = secretary;
		secretary->setSupervisor(this);
		incrementPercentage = 20;
	}

	~ZoneLeader(){}

	void setNewSecretary(Secretary* s) {
		secretary = s;
		secretary->setSupervisor(this);
	}

	void setNewCar() {
		car = Car();
	}

	void addSeller(Seller* s) {
		s->setSupervisor(this);
		sellers.push_back(s);
	}

	void removeSeller() {
		sellers.pop_back();
	}

	void getZoneLeaderInfo() {
		getEmployeeInfo();
		cout << "The info of my car is: " << endl;
		car.getCarInfo();
		cout << "The info of my secretary is: " << endl;
		secretary->getSecretaryInfo();
		cout << "The name of my seller are: " << endl;
		for (int i = 0; i < sellers.size(); i++) {
			cout << sellers[i]->getName() << endl;
		}
		cout << "My office number is: " << officeNumber << endl;
	}


};