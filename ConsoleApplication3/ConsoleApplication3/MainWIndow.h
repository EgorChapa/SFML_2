#pragma once
#include <string>
#include <SFML/Graphics.hpp>
using std::string;
class MainWIndow : public sf::RenderWindow
{
	string _name;
	sf::Color _bgColor;
public:
	MainWIndow(int width, int heigth, string _name) : sf::RenderWindow(sf::VideoMode(width, heigth), _name) {
		_name = "Hello sfml";
		_bgColor = sf::Color::Red;
	}
	void show() {
		while (this->isOpen())
		{
			sf::Event event;
			while (this->pollEvent(event))
			{
				if (event.type == sf::Event::Closed) {
					this->close();
				}
			}

			this->clear(this->_bgColor);
			this->display();
		}
	}
	void setName(string name) {
		this->_name = name;

	}

	void setBgColor(int r, int g, int b) {
		this->_bgColor.r = r;
		this->_bgColor.g = g;
		this->_bgColor.b = b;
	}
	void setBgColor(const sf::Color& _color) {
		this->_bgColor = sf::Color(_color);
	}

	~MainWIndow() {}
};

