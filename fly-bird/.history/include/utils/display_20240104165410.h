#ifndef _DISPLAY_H_
#define _DISPLAY_H_
#include "utils/sdlerror.h"

class display
{
public:
    display();
    ~display();
    SDL_Window *window;
    SDL_Renderer *renderer;
};

#endif // _DISPLAY_H_