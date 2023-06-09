#pragma once

#include "engine/audio_mixer.h"
#include "engine/screen.h"

class App {
public:
    Audio::Mixer audioMixer;
    Screen *screen;

};

extern App engine;