#include "utils/input.h"

input::input()
{
    click = 0;
    quit = 0;
}
input::~input()
{
}
void input::flushbool()
{
    click = 0;
    quit = 0;
}
void input::handleinput()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            printf("quit\n");
            quit = 1;
            return;
        case SDL_KEYDOWN:
            printf("key down: %s\n", SDL_GetKeyName(event.key.keysym.sym));
            break;
        case SDL_MOUSEBUTTONDOWN:
            printf("mouse down\n");
            click = 1;
            break;
        default:
            break;
        }
    }
    fflush(stdout);
    SDL_Delay(5);
}