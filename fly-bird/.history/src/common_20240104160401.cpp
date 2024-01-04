#include "common.h"

app::app(const char *title)
{
    if (SDL_Init(SDL_INIT_VIDEO))
        handle_error("SDL_Init");
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
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}
void app::init()
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
void app::quit()
{
    Mix_Quit();
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
}