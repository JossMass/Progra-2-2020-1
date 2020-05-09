#pragma once
#include <iostream>
#include <string>

using namespace std;

string Brands[7] = { "Acura","Audi","BMW","Chebrolet","Ferrari","McClaren","Cadillac" };
string Models[6] = { "Titan","Frontier","Maxima","Murano","Hybrid","Coupe" };

class Car {
private:
	int carPlate;
	string brand;
	string model;

public:
	Car() {
		carPlate = 100000 + rand() % 90000;
		brand = Brands[rand() % 7];
		model = Models[rand() % 6];
	}

	void getCarInfo() {
		cout << "Car plate: " << carPlate << endl;
		cout << "Brand: " << brand << endl;
		cout << "Model: " << model << endl;
	}
};