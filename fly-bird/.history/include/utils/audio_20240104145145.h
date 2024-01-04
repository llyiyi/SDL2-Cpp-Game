#ifndef _AUDIO_H_
#define _AUDIO_H_

#include <SDL2/SDL_mixer.h>
class audio
{
public:
    audio(const char *path);
    ~audio();
    void playmusic();
    void playsound();
};

#endif // _AUDIO_H_