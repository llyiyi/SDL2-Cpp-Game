#include "utils/audio.h"

audio::audio(const char *path)
{
    if (!Mix_Init(MIX_INIT_MP3))
        handle_error("Mix_Init");
    Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 2048);
}
audio::~audio()
{
    Mix_CloseAudio();
    Mix_Quit();
}
void audio::playmusic()
{
    Mix_Music *bgm = Mix_LoadMUS("../res/sound/bgm.mp3");
    if (!bgm)
        handle_error("Mix_LoadMUS");
    if (Mix_PlayMusic(bgm, -1) == -1)
        handle_error("Mix_PlayMusic");
}
void audio::beat()
{
    Mix_Chunk *beat = Mix_LoadWAV("assets/audio/sound.wav");
    if (!beat)
        handle_error("Mix_LoadWAV");
    if (Mix_PlayChannel(-1, sound, 0) == -1)
        handle_error("Mix_PlayChannel");
}