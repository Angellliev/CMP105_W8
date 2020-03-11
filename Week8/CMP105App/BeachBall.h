#pragma once
#include "Framework/GameObject.h"
#include <iostream>

class BeachBall :
	public GameObject
{
	sf::Vector2f speed;
	sf::Texture beachBallTexture;
	sf::FloatRect collisionBox;
public:
	BeachBall();
	void invertSpeed();
	void update(float dt, sf::RenderWindow* window);
	void screenCollision(sf::RenderWindow* window);
	
};

