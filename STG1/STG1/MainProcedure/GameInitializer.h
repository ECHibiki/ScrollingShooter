#pragma once
#include <string>
#include <vector>
using namespace std;
#include "../World/World.h"
#include "../WorldLoading/MapReader.h"
#include "../WorldControlers/WorldControler.h"
class GameInitializer
{
public:
	World buildWorld(const vector<vector<string>>& map_attributes);
	GameInitializer(const string& map_path);
	~GameInitializer();
};

