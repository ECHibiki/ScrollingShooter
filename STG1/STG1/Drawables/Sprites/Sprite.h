#pragma once
#include "../Drawable.h"
#include "../../Weapons/Card.h"
class Sprite :
	public Drawable
{
public:
	Card card;
	char bullet_type;
	unsigned int x, z;
	Sprite(Drawable drawable);
	~Sprite();
};

