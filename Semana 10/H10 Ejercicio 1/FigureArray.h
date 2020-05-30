#pragma once
#include "MyRectangle.h"
#include "MyEllipse.h"
#include "MyTriangle.h"
#include <vector>

using namespace std;

class FigureArray {
private:
	vector<MyRectangle*> myRectangles;
	vector<MyEllipse*> myEllipses;
	vector<MyTriangle*> myTriangles;
public:
	FigureArray(){}
	~FigureArray() {}

	void addMyRectangle() {
		//MyRectangle* r = new MyRectangle(); // explicit
		myRectangles.push_back(new MyRectangle()); // implicit
	}

	void addMyEllipse() {
		myEllipses.push_back(new MyEllipse());
	}

	void addMyTriangle() {
		myTriangles.push_back(new MyTriangle());
	}

	void drawEverything(Graphics^ g) {
		for (int i = 0; i < myRectangles.size(); i++) {
			myRectangles[i]->draw(g);
		}

		for (int i = 0; i < myEllipses.size(); i++) {
			myEllipses[i]->draw(g);
		}

		for (int i = 0; i < myTriangles.size(); i++) {
			myTriangles[i]->draw(g);
		}
	}

	void moveEverything(Graphics^ g) {
		for (int i = 0; i < myRectangles.size(); i++) {
			myRectangles[i]->move(g);
		}

		for (int i = 0; i < myEllipses.size(); i++) {
			myEllipses[i]->move(g);
		}

		for (int i = 0; i < myTriangles.size(); i++) {
			myTriangles[i]->move(g);
		}
	}

};
