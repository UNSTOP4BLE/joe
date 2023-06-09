#include "screen.h"
#include <cstdarg>
#include <cstring>  
#include <cstdio>
#include "../main.h"
void setScreen(Screen *scr)
{   
    if (engine.screen != NULL)
        delete engine.screen;
    engine.screen = scr;
}
