#pragma once

#ifndef PSP
#include <SDL2/SDL.h>
#endif

namespace GFX {

constexpr int SCREEN_WIDTH  = 1280;
constexpr int SCREEN_HEIGHT = 720;

template<typename T> struct RECT {
public:
    T x, y, w, h;
};

#ifdef PSP
struct Texture {
    unsigned int *texdata;
};
#else
typedef SDL_Texture Texture;
#endif
void init(void);
void clear(int color);
void flip(void);
Texture *loadTex(const char *path);
void freeTex(Texture **tex);
template<typename T> void drawTex(Texture* tex, GFX::RECT<int> *Img, GFX::RECT<T> *Disp, bool linear, float angle, int alpha);
template<typename T> void drawTexZoom(Texture* tex, GFX::RECT<int> *Img, GFX::RECT<T> *Disp, bool linear, float angle, int alpha, float zoom);
};