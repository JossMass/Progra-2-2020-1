#pragma once
#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int d, m, y;

public:
	Date() {
		d = rand() % 31;
		m = rand() % 13;
		y = 1950 + rand() % 71;
	}

	~Date(){}

	int getDay() { return d; }
	int getMonth() { return m; }
	int getYear() { return y; }

	string getCompleteDate() {
		//dd/mm/yy
		string aux;
		aux.append(to_string(d));
		aux.append("/");
		aux.append(to_string(m));
		aux.append("/");
		aux.append(to_string(y));
		return aux;
	}
};