#ifndef _INPUT_H_
#define _INPUT_H_

#include "utils/sdlerror.h"

class input
{
public:
    input();
    ~input();
    void handleinput();
    void flushbool();
    bool click;
    bool quit;
};

#endif // _INPUT_H_