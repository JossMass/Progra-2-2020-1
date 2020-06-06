#pragma once

using namespace System::Drawing;

class Enemy {
private:
	int x, y; //location
	int dx, dy; //movement
	int idX, idY; // index
	int width, height;
	int direction;

public:
	Enemy(int width, int height, int direction) {
		this->direction = direction;
		this->width = width;
		this->height = height;
		dx = dy = 20;
		x = 400;
		y = 200;
		idX = idY = 0;
	}

	~Enemy() {}

	void draw(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.0, height * 1.0);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void move(Graphics^ g) {
		
		if (direction == 1) {
			if (x + width * 1.0 > g->VisibleClipBounds.Width || x < 0) dx *= -1;

			if (dx > 0) {
				idY = 2;
			}
			else idY = 1;
			x += dx;
		}
		else {
			if (y + height * 1.0 > g->VisibleClipBounds.Height || y < 0) dy *= -1;

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