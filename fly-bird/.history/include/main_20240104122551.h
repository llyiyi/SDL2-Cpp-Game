#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

class app
{
public:
    app();
    ~app();
    void init()
    {
        if (SDL_Init(SDL_INIT_VIDEO))
            handle_error("SDL_Init");
    }
}

#endif // _MAIN_H_