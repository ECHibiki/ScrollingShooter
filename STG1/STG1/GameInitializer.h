#pragma once
#include "Map Source\World.h"

class GameInitializer
{
	World buildWorld(char* map_path);
public:
	GameInitializer();
	~GameInitializer();

};

