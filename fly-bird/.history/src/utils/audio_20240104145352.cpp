#include "utils/audio.h"

static void handle_error(const char *msg)
{
    printf("%s: %s\n", msg, SDL_GetError());
    exit(EXIT_FAILURE);
}
audio::audio()
{
}
audio::~audio()
{
}
