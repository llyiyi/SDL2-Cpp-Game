#include "sdlerror.h"

void handle_error(const char *msg)
{
    printf("%s: %s\n", msg, SDL_GetError());
    exit(EXIT_FAILURE);
}