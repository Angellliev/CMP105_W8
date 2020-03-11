#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	
	playerOne.setPosition(20, window->getSize().y / 2 - playerOne.getSize().y / 2);
	playerTwo.setPosition(window->getSize().x - 80, window->getSize().y / 2 - playerOne.getSize().y / 2);

	beachBall.setPosition(100,200);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

}

// Update game objects
void Level::update(float dt)
{
	
	playerOne.update(dt, window);
	beachBall.update(dt, window);
	

	if (collision.checkBoundingBox(&beachBall, &playerOne))
	{
		beachBall.invertSpeed();
	}
	else if (collision.checkBoundingBox(&beachBall, &playerTwo))
	{
		beachBall.invertSpeed();
	}
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(beachBall);
	window->draw(playerOne);
	
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}