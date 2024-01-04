#ifndef _AUDIO_H_
#define _AUDIO_H_

#include "sdlerror.h"

extern void handle_error(const char *msg);

class audio
{
public:
    audio(const char *path);
    ~audio();
    Mix_Music *bgm;
    Mix_Chunk *beat;
    Mix_Chunk *fly;
    Mix_Chunk *score;
    void playmusic();
    void playbeat();
    void playfly();
    void playscore();
};

#endif // _AUDIO_H_