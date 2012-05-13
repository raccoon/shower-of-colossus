#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
	sf::RenderWindow game(sf::VideoMode(800, 600, 32), "Shower of the Colossus");
	while(game.isOpen())
	{
		sf::Event events;
		while(game.pollEvent(events))
		{
			if(events.type = sf::Event::Closed)
			{
				game.close();
			}
		}
		game.clear();
		game.display();
	}
}