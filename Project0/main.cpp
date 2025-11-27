#include "common.hpp"

int main(void)
{

#ifdef DEBUG
	sf::RenderWindow window(sf::VideoMode({SCREEN_WIDTH / 3 * 2 , SCREEN_HEIGH / 3 * 2}), "Project0");
#else
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Project0", sf::State::Fullscreen);
#endif // DEBUG

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			// Close window: exit
			if (event->is<sf::Event::Closed>())
				window.close();
		}

		window.clear(sf::Color(96, 130, 182));

		window.display();

	}
	



	return EXIT_SUCCESS;
}