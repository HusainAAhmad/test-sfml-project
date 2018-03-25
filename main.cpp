#include <SFML\Graphics.hpp>
#include <SFML\Window\Keyboard.hpp>
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(600, 600), "Test Project");

	Font font;
	font.loadFromFile("C:/Windows/Fonts/Arial.ttf");

	Text text;
	text.setString("VOID");
	text.setPosition(250, 300);
	text.setFont(font);
	text.Bold;
	text.setFillColor(Color::Green);

	Texture texture;
	texture.loadFromFile("texture2.jpg");

	Sprite sprite(texture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(sprite);
		window.draw(text);
		window.display();
			
		if (Keyboard::isKeyPressed(Keyboard::Left))
		{
			text.move(-0.1, 0);
		}
		if (Keyboard::isKeyPressed(Keyboard::Right))
		{
			text.move(0.1, 0);
		}
		if (Keyboard::isKeyPressed(Keyboard::Up))
		{
			text.move(0, -0.1);
		}
		if (Keyboard::isKeyPressed(Keyboard::Down))
		{
			text.move(0, 0.1);
		}
	
	}

	return 0;
}