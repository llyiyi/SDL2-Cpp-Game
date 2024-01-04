#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

class app
{
public:
    SDL_Window *window;
    SDL_Renderer *renderer;
    app(const char *title);
    ~app();
    void init();
    void quit();
};

#endif // _COMMON_H_