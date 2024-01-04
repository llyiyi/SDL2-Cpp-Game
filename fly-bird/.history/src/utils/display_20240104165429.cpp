#include "utils/display.h"

display::display(const char *title)
{
    if (SDL_Init(SDL_INIT_VIDEO))
        handle_error("SDL_Init");
    if (!IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG))
        handle_error("IMG_Init");
    if (TTF_Init() == -1)
        handle_error("TTF_Init");
    window = SDL_CreateWindow(title,
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              1600,
                              900,
                              SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);
}
display::~display()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
}