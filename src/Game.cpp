#include "Game.h"

Game::Game(void) {
    initialize();
}

Game::~Game(void) {
    destroy();
}

void Game::initialize(void) {
    m_render_window.create(sf::VideoMode(800, 600), "wayangpus", sf::Style::Titlebar | sf::Style::Close);
}

void Game::update(float time_delta) {
    sf::Event event;
    while (m_render_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            m_render_window.close();
            this->running = false;
        }
    }
}

void Game::draw(float time_delta) {
    m_render_window.clear(sf::Color(0x00FFFFFF));
    m_render_window.display();
}

void Game::destroy(void) {
    std::cout << "Bye" << std::endl;
}

