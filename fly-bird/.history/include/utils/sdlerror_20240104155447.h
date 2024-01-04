#ifndef _SDLERROR_H_
#define _SDLERROR_H_

#include <stdio.h>
#include <stdlib.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

void handle_error(const char *msg);

#endif // _SDLERROR_H_