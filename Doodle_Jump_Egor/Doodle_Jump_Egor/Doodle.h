#pragma once
#include <SFML/Graphics.hpp>
class Doodle
{
	int height, ampl;
	sf::Texture doodle;
	sf::Sprite sprite2;
public:

	Doodle(int x, int y) {
		this->doodle.loadFromFile("C:\\Users\\student\\source\\repos\\Doodle_Jump_Egor\\Doodle_Jump_Egor\\doodle.png");
		this->sprite2.setTexture(this->doodle);
		}

	sf::Sprite getSprite()
	{
		return this->sprite2;
	}

};

