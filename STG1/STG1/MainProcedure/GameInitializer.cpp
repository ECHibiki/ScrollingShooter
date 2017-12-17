#include "GameInitializer.h"

GameInitializer::GameInitializer(const string& map_path)
{
	vector<vector<string>> map_attributes;
	MapReader map_reader(map_path, map_attributes);
	buildWorld(map_attributes);
}


GameInitializer::~GameInitializer()
{
}

World GameInitializer::buildWorld(const vector<vector<string>>& map_attributes)
{
	return World(map_attributes);
}