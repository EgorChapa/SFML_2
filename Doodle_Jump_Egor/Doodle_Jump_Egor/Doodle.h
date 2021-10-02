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
		this->sprite2.setPosition(200, 700);
		}
	void move() {
		for (int i = 0; i < 50; i++) {
			this->sprite2.setPosition(200, 700 + i);
		}
		for (int i = 49; i < 50; i--) {
			this->sprite2.setPosition(200, 700 - i);
		}
	}

	sf::Sprite getSprite()
	{
		return this->sprite2;
	}

};

