#include "utils/display.h"

display::display()
{
    if (!IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG))
        handle_error("IMG_Init");
    if (TTF_Init() == -1)
        handle_error("TTF_Init");
}
display::~display()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
}