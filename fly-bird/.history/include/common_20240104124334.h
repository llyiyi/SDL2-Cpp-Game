#ifndef _COMMON_H_
#define _COMMON_H_

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

static void handle_error(const char *msg)
{
    printf("%s: %s\n", msg, SDL_GetError());
    exit(EXIT_FAILURE);
}

class app
{
public:
    app();
    ~app();
    void init()
    {
        if (SDL_Init(SDL_INIT_VIDEO))
            handle_error("SDL_Init");
        if (!IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG))
            handle_error("IMG_Init");
        if (TTF_Init() == -1)
            handle_error("TTF_Init");
        if (!Mix_Init(MIX_INIT_MP3))
            handle_error("Mix_Init");
    }
    void quit()
    {
        Mix_Quit();
        TTF_Quit();
        IMG_Quit();
        SDL_Quit();
    }
};

#endif // _COMMON_H_