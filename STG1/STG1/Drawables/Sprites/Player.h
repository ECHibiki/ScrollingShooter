#pragma once
#include "Sprite.h"
#include "../../Weapons/Bomb.h"
class Player :
	public Sprite
{
public:
	Bomb bomb;
	Player(Drawable drawable);
	~Player();
};

