#include "stdinc.h"
#include "Game.h"

int main(void) {
    try {
        Game main_game;
        
        sf::Clock clock;
        float delta_time = 0.0f;
        main_game.running = true;
        while (main_game.running) {
            clock.restart();

            main_game.update(delta_time);
            main_game.draw(delta_time);

            sf::Time elapsed = clock.getElapsedTime();
            delta_time = elapsed.asSeconds();
        }
    } catch (const std::exception &e) {
        std::cout << "[EXCEPTION] " << e.what() << std::endl;
    }

    return 0;
}

