#include "main.h"
App engine;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    SDL_Init(SDL_INIT_EVERYTHING);
    engine.audioMixer.start();

	while (1) 
	{
		engine.screen.update();
		engine.screen.draw();

	}

	return 0;
}