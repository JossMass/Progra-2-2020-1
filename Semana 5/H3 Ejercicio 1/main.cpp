#include <conio.h>
#include <iostream>
#include "ArrEmployee.h"

using namespace std;
using namespace System;

void menu() {
	cout << "1. Add Employee" << endl;
	cout << "2. Employees born in april" << endl;
	cout << "3. Quantity of employees hired in march 2017" << endl;
	cout << "4. List all employees" << endl << endl;
}

void main() {
	int option;
	string name, lastName;
	int day, month, year;
	Date b;
	Date h;
	ArrEmployee* arr = new ArrEmployee();
	Employee* e;

	while (1) {
		menu();
		cout << "Input the option: "; cin >> option;

		switch (option)
		{
		case 1: 
			cout << "Employee name: "; cin >> name;
			cout << "Employee last name: "; cin >> lastName;
			do {
				cout << "Please enter a correct date " << endl;
				cout << "Employee birthdate day: "; cin >> day;
				cout << "Employee birthdate month: "; cin >> month;
				cout << "Employee birthdate year: "; cin >> year;
				b = Date(day, month, year);
			} while (!b.dateIsReal());

			do {
				cout << "Please enter a correct date " << endl;
				cout << "Employee hiring day: "; cin >> day;
				cout << "Employee hiring month: "; cin >> month;
				cout << "Employee hiring year: "; cin >> year;
				h = Date(day, month, year);
			} while (!h.dateIsReal());

			e = new Employee(name, lastName, b, h);
			arr->addEmployee(e);
			cout << "Employee added";
			break;

		case 2:
			arr->employeesBornInApril(); break;
		case 3:
			cout << "The number of employee hired in march 2017 are: " << arr->employeesMarch2017(); break;
		case 4:
			arr->listAll(); break;
		}


		_getch();
		Console::Clear();
	}

	_getch();
}