#ifndef _AUDIO_H_
#define _AUDIO_H_

class audio
{
public:
    audio(const char *path);
    ~audio();
    void playmusic();
    void playsound();
};

#endif // _AUDIO_H_