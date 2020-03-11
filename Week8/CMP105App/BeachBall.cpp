#include "BeachBall.h"

BeachBall::BeachBall()
{
	speed = sf::Vector2f(500.f,0.f);
	setSize(sf::Vector2f(100, 100));
	beachBallTexture.loadFromFile("gfx/Beach_Ball.png");
	setTexture(&beachBallTexture);
}

void BeachBall::invertSpeed()
{
	speed = sf::Vector2f(-speed.x, -speed.y);
}

void BeachBall::update(float dt, sf::RenderWindow* window)
{
	move(speed * dt);
	screenCollision(window);
}

void BeachBall::screenCollision(sf::RenderWindow* window)
{

	if (getPosition().x + getSize().x >= window->getSize().x)
	{
		setPosition(window->getSize().x - getSize().x, getPosition().y);
		speed = sf::Vector2f(-speed.x, speed.y);
	}
	
	else if (getPosition().x <= 0)
	{
		speed = sf::Vector2f(fabs(speed.x), speed.y);
	}
	
	if (getPosition().y + getSize().y >= window->getSize().y)
	{
		setPosition(getPosition().x , window->getSize().y - getSize().y);
		speed = sf::Vector2f(speed.x, -speed.y);
	}
	
	else if (getPosition().y <= 0)
	{
		speed = sf::Vector2f(speed.x, fabs(speed.y));
	}
}
