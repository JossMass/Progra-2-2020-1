#pragma once
#include <iostream>

using namespace std;
using namespace System::Drawing;

class Enemy {
private:
	int x, y;
	int dx, dy;
	int idX, idY;
	int width, height;
	int index;
	bool visible;

public:
	Enemy(int width, int height) {
		this->width = width;
		this->height = height;
		dx = dy = 5;
		x = 5 * (rand() % 140);
		y = 5 * (rand() % 60);
		idX = idY = 0;
		visible = true;
		index = rand() % 3;
	}

	~Enemy() {}

	void draw(Graphics^ g, Bitmap^ bmpEnemy) {
		Rectangle sectionShown = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.0, height * 1.0);
		g->DrawImage(bmpEnemy, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void move(Graphics^ g) {
		int i = rand() % 4;

		switch (index)
		{
		case 0:
			//Left
			if (i == 0 && x >= 0) {
				x -= dx;
				idY = 1;
			}
			//Right
			if (i == 1 && x + width * 1.0 <= g->VisibleClipBounds.Width) {
				x += dx;
				idY = 2;
			}
			//Up
			if (i == 2 && y >= 0) {
				y -= dy;
				idY = 3;
			}
			//Down
			if (i == 3 && y + height * 1.0 <= g->VisibleClipBounds.Height) {
				y += dy;
				idY = 0;
			}
			break;

		case 1:
			if (x + width * 1.0 > g->VisibleClipBounds.Width || x < 0) dx *= -1;

			if (dx > 0) {
				idY = 2;
			}
			else idY = 1;

			x += dx;
			break;

		case 2:
			if (y + height * 1.0 > g->VisibleClipBounds.Height || y < 0) dy *= -1;

			if (dy > 0) {
				idY = 0;
			}
			else idY = 3;

			y += dy;
		}

		idX++;
		if (idX > 3) idX = 0;
	}

	int getX() { return x; }
	int getY() { return y; }
	bool getVisible() { return visible; }
	void setVisible(bool v) { visible = v; }

	Rectangle getRectangle() {
		return Rectangle(x, y, width * 1.0, height * 1.0);
	}

};