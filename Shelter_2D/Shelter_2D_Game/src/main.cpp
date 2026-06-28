#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "../Player.h" // .. относительно папки, где лежит main.cpp: выйти на уровень выше и найти Player.h

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Shelter 2D");
    //////////////////////////////////////////////////////////////////


    Player player;// создаем персонажа
    sf::Font font; //создаем объект шрифта
    if (!font.loadFromFile("C:/Windows/Fonts/arial.ttf"))  // "!" - не   т.е. если не загрузился, то будеи выведена ошибка "Font load error!"
    {
        std::cout << "Font load error!" << std::endl;
    }
    sf::Text zdorovie;


    sf::Text sytostText;
    sytostText.setFont(font);  //устанавливаем используемый шрифт
    sytostText.setCharacterSize(24); // размер
    sytostText.setFillColor(sf::Color::Magenta); // цвет
    sytostText.setPosition(20.0f, 20.0f);
    sytostText.setString("Sytost: 100%");


    sf::Text temperaturaTela;
    sf::Text vlazhnost;

    /////////////////////////////////////////////////////////////////

    
    while (window.isOpen()) // цилк обновления экрана открытого окна
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(sytostText);
        window.display();
    }

    return 0;
}
