#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

#define HANDLE_ERROR(msg)                     \
    printf(msg "ERROR:%s/n", SDL_GetError()); \
    exit(EXIT_FAILURE);

static void init_app();

static void quit_app();

#endif // _MAIN_H_