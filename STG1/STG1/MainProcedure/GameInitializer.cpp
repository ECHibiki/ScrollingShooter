#include "GameInitializer.h"

GameInitializer::GameInitializer(const string& map_path)
{
	vector<vector<string>> map_attributes;
	MapReader map_reader(map_path, &map_attributes);
	WorldControler( 
		buildWorld(map_attributes).boundry
	);
}


GameInitializer::~GameInitializer()
{
}

World GameInitializer::buildWorld(const vector<vector<string>>& map_attributes)
{
	return World(map_attributes);
}