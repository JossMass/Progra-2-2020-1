#pragma once
#include <iostream>

using namespace System::Drawing;

class Enemy {
private:
	int x, y;
	int dx, dy;
	int idX, idY;
	int width, height;
	int index;

public:
	Enemy(int width, int height, int x, int y) {
		this->width = width;
		this->height = height;
		dx = dy = 20;
		/*x = rand() % 600;
		y = rand() % 300;*/
		this->x = x;
		this->y = y;
		idX = idY = 0;
		index = rand() % 2;
	}

	~Enemy(){}

	void draw(Graphics^ g, Bitmap^ bmpEnemy) {
		Rectangle sectionShown = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.0, height * 1.0);
		g->DrawImage(bmpEnemy, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void move(Graphics^ g) {
		if (index == 0) {
			//Horizantal
			if (x + width * 1.0 > g->VisibleClipBounds.Width || x < 0)dx *= -1;
			if (dx > 0) {
				idY = 2;
			}
			else idY = 1;

			x += dx;
		}
		else {
			//Vertical
			if (y + height * 1.0 > g->VisibleClipBounds.Height || y < 0)dy *= -1;
			if (dy > 0) {
				idY = 0;
			}
			else idY = 3;

			y += dy;
		}

		idX++;
		if (idX > 3)idX = 0;
	}

};