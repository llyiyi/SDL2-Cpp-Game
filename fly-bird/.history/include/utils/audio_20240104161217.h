#ifndef _AUDIO_H_
#define _AUDIO_H_

#include "sdlerror.h"

extern void handle_error(const char *msg);

class audio
{
public:
    audio(const char *path);
    ~audio();
    void playmusic();
    void beat();
    void fly();
    void score();
};

#endif // _AUDIO_H_