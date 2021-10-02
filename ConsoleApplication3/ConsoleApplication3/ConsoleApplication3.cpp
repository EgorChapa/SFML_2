#include "pch.h"
#include <iostream>
#include "MainWIndow.h"
int main()
{
	MainWIndow * window = new MainWIndow(400, 400, "Hi");
	window->setBgColor(127, 176, 48);
	//window->setBgColor(sf::Color::Green);
	window->show();


	delete window;
	return 0;
}
