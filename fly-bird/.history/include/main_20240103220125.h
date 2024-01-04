#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

#define HANDLE_ERROR(msg)                \
    printf(msg ":%s/n", SDL_GetError()); \
    exit(1);

#endif // _MAIN_H_