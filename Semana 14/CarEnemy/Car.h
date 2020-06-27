#pragma once
#include "Enemy.h"

class Car {
	int x, y;
	int dx, dy;
	int idX, idY;
	int width, height;

public:
	Car(int width, int height) {
		this->width = width;
		this->height = height;
		dx = dy = 5;
		x = 70;
		y = 70;
		idX = idY = 0;
	}

	~Car() {}

	void draw(Graphics^ g, Bitmap^ bmpCar) {
		Rectangle sectionShown = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.0, height * 1.0);
		g->DrawImage(bmpCar, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void move(Enemy* e) {
		if (e->getVisible()) {
			if (x == e->getX()) {
				x += 0;
			}
			else if (x > e->getX()) {
				x -= dx;
				idY = 1;
			}
			else if (x < e->getX()) {
				x += dx;
				idY = 2;
			}

			if (y == e->getY()) {
				y += 0;
			}
			else if (y > e->getY()) {
				y -= dy;
				idY = 3;
			}
			else if (y < e->getY()) {
				y += dy;
				idY = 0;
			}

			idX++;
			if (idX > 3)idX = 0;
		}
	}

	Rectangle getRectangle() {
		return Rectangle(x, y, width * 1.0, height * 1.0);
	}
};