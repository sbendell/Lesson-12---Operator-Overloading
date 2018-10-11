#pragma once
#include "Enemy.h"
#include <iostream>

using namespace std;

class ArmedEnemy : public Enemy
{
public:
	ArmedEnemy(int hps, int ammo);
	virtual ~ArmedEnemy();
	virtual void set_score(int new_score);
	virtual void shoot();
	friend ostream& operator<<(ostream& ostr, const ArmedEnemy& ae);
protected:
	int ammo_level;
};