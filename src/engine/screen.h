#pragma once

#include "camera.h"

class Screen {
public:
    inline Screen(void) {}
    virtual void update(void) {}
    virtual void draw(void) {}
    virtual ~Screen(void) {}
};

void setScreen(Screen *scr);