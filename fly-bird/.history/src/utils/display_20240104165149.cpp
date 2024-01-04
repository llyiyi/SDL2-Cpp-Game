#include "utils/display.h"

display::display()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        handle_error("SDL_Init");
    if (TTF_Init() != 0)
        handle_error("TTF_Init");
    if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG)
        handle_error("IMG_Init");
    window = SDL_CreateWindow("fly-bird", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if (!window)
        handle_error("SDL_CreateWindow");
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer)
        handle_error("SDL_CreateRenderer");
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}
display::~display()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
}