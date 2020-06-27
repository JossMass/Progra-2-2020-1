#pragma once
#include "Car.h"
#include "Enemy.h"
#include <vector>

class Controller {
private:
	vector<Enemy*> enemies;
	Car* c;

public:
	Controller(Bitmap^ bmpCar, Bitmap^ bmpEnemy) {
		for (int i = 0; i < 5; i++) {
			enemies.push_back(new Enemy(bmpEnemy->Width / 4, bmpEnemy->Height / 4));
		}

		c = new Car(bmpCar->Width / 4, bmpCar->Height / 4);
	}

	~Controller() {}

	void drawEverything(Graphics^ g, Bitmap^ bmpCar, Bitmap^ bmpEnemy) {
		for (int i = 0; i < enemies.size(); i++) {
			enemies[i]->draw(g, bmpEnemy);
		}
		c->draw(g, bmpCar);
	}

	void moveEverything(Graphics^ g) {
		for (int i = 0; i < enemies.size(); i++) {
			enemies[i]->move(g);
		}

		if (enemies.size() > 0) {
			c->move(enemies[0]);
		}
	}

	void collision() {
		//Verification
		if (enemies.size() > 0) {
			if (c->getRectangle().IntersectsWith(enemies[0]->getRectangle())) {
				enemies[0]->setVisible(false);
			}
		}
		//Elimination
		for (int i = 0; i < enemies.size(); i++) {
			if (!enemies[i]->getVisible()) {
				enemies.erase(enemies.begin() + i);
			}
		}
	}

	vector<Enemy*> getEnemies() {
		return enemies;
	}
};