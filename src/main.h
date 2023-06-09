#pragma once

#include "engine/audio_mixer.h"
#include "engine/screen.h"

#ifndef PSP
#include <SDL2/SDL.h>
#endif

class App {
public:
#ifndef PSP
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Surface *screenSurface;
#endif
    Audio::Mixer audioMixer;
    Camera Main_cam;
    Screen *screen;
};

extern App engine;