#include <SFML/Graphics.hpp>

int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML 2 Sample");

    // Create a red circle
    sf::CircleShape circle(100.f);  // Radius: 100
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(200.f, 150.f);  // X, Y

    // Event object
    sf::Event event;

    // Main loop
    while (window.isOpen())
    {
        // Handle events
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with black
        window.clear(sf::Color::Black);

        // Draw the circle
        window.draw(circle);

        // Display on screen
        window.display();
    }

    return 0;
}
