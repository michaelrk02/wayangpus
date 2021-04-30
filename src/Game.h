#pragma once

#include "stdinc.h"
#include "GameObject.h"

class Game : public GameObject {
public:
    Game(void);
    ~Game(void);

    void initialize(void);
    void update(float time_delta);
    void draw(float time_delta);
    void destroy(void);

public:
    bool running;

protected:
    sf::RenderWindow m_render_window;
};

