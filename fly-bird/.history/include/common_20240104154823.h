#ifndef _COMMON_H_
#define _COMMON_H_

#include "utils/error.h"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

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