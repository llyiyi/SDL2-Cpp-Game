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
void audio::playmusic()
{
    Mix_Music *music = Mix_LoadMUS("assets/audio/music.mp3");
    if (!music)
        handle_error("Mix_LoadMUS");
    if (Mix_PlayMusic(music, -1) == -1)
        handle_error("Mix_PlayMusic");
}
void audio::playsound()
{
    Mix_Chunk *sound = Mix_LoadWAV("assets/audio/sound.wav");
    if (!sound)
        handle_error("Mix_LoadWAV");
    if (Mix_PlayChannel(-1, sound, 0) == -1)
        handle_error("Mix_PlayChannel");
}