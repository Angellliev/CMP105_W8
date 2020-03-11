#pragma once
#include "Framework/GameObject.h"

class Paddle: public GameObject
{

	float speed;
public:
	Paddle();
	void update(float dt, sf::RenderWindow* window);
};

