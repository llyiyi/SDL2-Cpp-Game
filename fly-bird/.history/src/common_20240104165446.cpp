#include "common.h"

app::app(const char *title)
{
    if (SDL_Init(SDL_INIT_VIDEO))
        handle_error("SDL_Init");
    sound = new audio();
    window = SDL_CreateWindow(title,
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              1600,
                              900,
                              SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);
}
app::~app()
{
    delete sound;
}