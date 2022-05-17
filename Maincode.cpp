#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Shamrocks");
	sf::CircleShape circle;
	sf::RectangleShape rect;



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}

		//render section-------------------------------
		window.clear();

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(200, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(250, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(225, 150);
		window.draw(circle);

		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(46, 100, 0));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);


		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 56)));
		circle.setPosition(400, 400);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(45, 100, 0)));
		circle.setPosition(450, 400);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(425, 350);
		window.draw(circle);

		rect.setPosition(445, 400);
		rect.setFillColor(sf::Color(204, 100, 0));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(600, 600);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 5)));
		circle.setPosition(650, 600);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 200)));
		circle.setPosition(625, 550);
		window.draw(circle);

		rect.setPosition(645, 600);
		rect.setFillColor(sf::Color(90, 100, 4));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);


		window.display();

	}//end game loop-------------------------------------------------



	return 0;
} //end main
