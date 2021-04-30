#pragma once

#include "stdinc.h"

// GameObject interface
class GameObject {
public:
    // called at component creation
    virtual void initialize(void) = 0;

    // called once per frame
    // handles events, mechanisms, etc
    virtual void update(float time_delta) = 0;

    // called once per frame
    // draws child components onto screen
    virtual void draw(float time_delta) = 0;

    // called at component deletion
    virtual void destroy(void) = 0;
};

