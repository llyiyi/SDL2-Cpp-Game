#include "utils/audio.h"

audio::audio(const char *path)
{
    if (!Mix_Init(MIX_INIT_MP3))
        handle_error("Mix_Init");
    Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 2048);
    bgm = Mix_LoadMUS("../res/sound/bgm.mp3");
    if (!bgm)
        handle_error("Mix_LoadMUS");
    beat = Mix_LoadWAV("../res/sound/beat.wav");
    if (!beat)
        handle_error("Mix_Loadbaet");
    fly = Mix_LoadWAV("../res/sound/fly.mp3");
    if (!fly)
        handle_error("Mix_Loadfly");
    score = Mix_LoadWAV("../res/sound/score.wav");
}
audio::~audio()
{
    Mix_FreeChunk(beat);
    Mix_FreeChunk(fly);
    Mix_FreeChunk(score);
    Mix_FreeMusic(bgm);
    Mix_CloseAudio();
    Mix_Quit();
}
void audio::playmusic()
{
    if (Mix_PlayMusic(bgm, -1) == -1)
        handle_error("Mix_PlayMusic");
}
void audio::playbeat()
{
    if (Mix_PlayChannel(-1, beat, 0) == -1)
        handle_error("Mix_PlayChannel");
}
