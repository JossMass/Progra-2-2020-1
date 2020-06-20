#pragma once
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace System;
using namespace std;

class File {
private:
	ofstream fileWrite;
	ifstream fileRead;
	string text;
	int n, x, y;

public:
	File(){}
	~File() {}

	void readData() {
		fileRead.open("configuration.txt", ios::in);

		if (fileRead.fail()) {
			fileRead.close();

			fileWrite.open("configuration.txt", ios::out);
			fileWrite << "10" << endl;
			fileWrite << "200" << endl;
			fileWrite << "100" << endl;
			fileWrite.close();

			fileRead.open("configuration.txt", ios::in);
		}

		getline(fileRead, text);
		n = atoi(text.c_str());
		getline(fileRead, text);
		x = atoi(text.c_str());
		getline(fileRead, text);
		y = atoi(text.c_str());

		fileRead.close();
	}

	int getN() { return n; }
	int getX() { return x; }
	int getY() { return y; }
};