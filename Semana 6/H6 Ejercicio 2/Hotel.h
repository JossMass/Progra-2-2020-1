#pragma once
#include <iostream>
#include <string>

using namespace std;

string Continents[5] = { "North America","South America","Asia","Europe","Africa" };
string Names[5] = { "Marriot","Westin","Perkin","BigHouse","LandingWay" };
string Types[4] = { "Bussines","Airport","Suite","Resort" };

class Hotel {
protected:
	//Camel Case
	string name;
	string location;
	string type;
	int stars;
	int numberOfRooms;

public:
	Hotel() {
		location = Continents[rand() % 5];
		type = Types[rand() % 4];
		name = Names[rand() % 5];
		stars = rand() % 6;
		numberOfRooms = 20 + rand() % 81;
	}

	~Hotel(){}

	string getLocation() { return location; }
	string getName() { return name; }
	string getType() { return type; }
	int getStars() { return stars; }
	int getNumberOfRooms() { return numberOfRooms; }

	void getInfoHotel() {
		cout << "Name: " << name << endl;
		cout << "Location: " << location << endl;
		cout << "Type: " << type << endl;
		cout << "Stars: " << stars << endl;
		cout << "Number of rooms: " << numberOfRooms << endl << endl;
	}

};