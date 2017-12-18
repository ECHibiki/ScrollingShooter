#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "Boundry.h"
#include "../Drawables/Sprites/Player.h"
#include "../Drawables/Sprites/PlayerA.h"
#include "../Drawables/Sprites/Enemy.h"
#include "../Drawables/Sprites/EnemyA.h"
#include "../Drawables/Sprites/Boss.h"
#include "../Drawables/Sprites/BossA.h"
#include "../Weapons/CardA.h"
#include "../../Weapons/BombA.h"

class World
{
	vector<Player> players;
	vector<Boss> bosses;
	vector<Enemy> enemies;
public:
	Boundry boundry;
	World(const vector<vector<string>>& map_attributes);
	~World();
};

