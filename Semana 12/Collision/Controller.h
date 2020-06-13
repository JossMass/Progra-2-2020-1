#pragma once
#include <vector>
#include "Bullet.h"
#include "Enemy.h"

using namespace std;

class Controller {
private:
	vector<Bullet*> bullets;
	vector<Enemy*> enemies;
	int numberOfEnemies;

public:
	Controller() {
		numberOfEnemies = rand() % 5 + 3;
	}

	~Controller(){}

	void createEnemies(int width, int height) {
		for (int i = 0; i < numberOfEnemies; i++) {
			Enemy* e = new Enemy(width, height, rand() % 2);
			enemies.push_back(e);
		}
	}

	void addBullet(Bullet *b) {
		bullets.push_back(b);
	}

	void drawEverything(Graphics^ g, Bitmap^ bmpEnemy, Bitmap^ bmpBullet) {
		for (int i = 0; i < enemies.size(); i++) {
			enemies[i]->draw(g, bmpEnemy);
		}
		for (int i = 0; i < bullets.size(); i++) {
			bullets[i]->draw(g, bmpBullet);
		}
	}

	void moveEverything(Graphics^ g) {
		for (int i = 0; i < enemies.size(); i++) {
			enemies[i]->move(g);
		}
		for (int i = 0; i < bullets.size(); i++) {
			bullets[i]->move(g);
		}
	}

	void collision(Graphics^ g) {
		//verify
		for (int i = 0; i < bullets.size(); i++) {
			if (bullets[i]->getX() <= 0 || bullets[i]->getXWidth() >= g->VisibleClipBounds.Width ||
				bullets[i]->getY() <= 0 || bullets[i]->getYHeight() >= g->VisibleClipBounds.Height) {
				bullets[i]->setVisibility(false);
			}
		}

		for (int i = 0; i < enemies.size(); i++) {
			for (int j = 0; j < bullets.size(); j++) {
				if (enemies[i]->getRectangle().IntersectsWith(bullets[j]->getRectangle())) {
					enemies[i]->setVisibility(false);
					bullets[j]->setVisibility(false);
				}
			}
		}

		//erase
		for (int i = 0; i < bullets.size(); i++) {
			if (!bullets[i]->getVisibility()) {
				bullets.erase(bullets.begin() + i);
			}
		}

		for (int i = 0; i < enemies.size(); i++) {
			if (!enemies[i]->getVisibility()) {
				enemies.erase(enemies.begin() + i);
			}
		}
	}
};