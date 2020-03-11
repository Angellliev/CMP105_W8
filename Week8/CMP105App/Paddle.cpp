#include "Paddle.h"

Paddle::Paddle()
{
	setSize(sf::Vector2f(60, 180));
	setFillColor(sf::Color::Magenta);
	speed = 900.f;
}

void Paddle::update(float dt, sf::RenderWindow* window)
{
	//if (input->isKeyDown(sf::Keyboard::W) && getPosition().y > 0)
	//{
	//	setPosition(getPosition().x, getPosition().y - speed * dt);
	//}
	//
	//if (input->isKeyDown(sf::Keyboard::S) && getPosition().y < window->getSize().y)
	//{
	//	setPosition(getPosition().x, getPosition().y + speed * dt);
	//}
}



