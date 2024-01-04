#ifndef _COMMON_H_
#define _COMMON_H_

#include "utils/sdlerror.h"
#include "utils/display.h"
#include "utils/audio.h"
#include "utils/input.h"

extern void handle_error(const char *msg);

class app
{
public:
    SDL_Window *window;
    SDL_Renderer *renderer;
    app(const char *title);
    ~app();
    void init();
    void quit();
};

#endif // _COMMON_H_