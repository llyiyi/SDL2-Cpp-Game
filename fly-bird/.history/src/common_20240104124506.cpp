#include "common.h"

app::app()
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