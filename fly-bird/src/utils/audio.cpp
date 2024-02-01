#include "utils/audio.h"

audio::audio()
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
    if (!score)
        handle_error("Mix_Loadscore");
}
audio::~audio()
{
    Mix_FreeMusic(bgm);
    Mix_FreeChunk(fly);
    Mix_FreeChunk(score);
    Mix_FreeChunk(beat);
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
        handle_error("Mix_Playbeat");
}
void audio::playfly()
{
    if (Mix_PlayChannel(-1, fly, 0) == -1)
        handle_error("Mix_Playfly");
}
void audio::playscore()
{
    if (Mix_PlayChannel(-1, score, 0) == -1)
        handle_error("Mix_Playscore");
}