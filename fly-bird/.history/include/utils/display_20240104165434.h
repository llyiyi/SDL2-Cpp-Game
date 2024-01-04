#ifndef _DISPLAY_H_
#define _DISPLAY_H_
#include "utils/sdlerror.h"

class display
{
public:
    display(const char *title);
    ~display();
    SDL_Window *window;
    SDL_Renderer *renderer;
};

#endif // _DISPLAY_H_