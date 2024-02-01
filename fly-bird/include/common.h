#ifndef _COMMON_H_
#define _COMMON_H_

#include "utils/sdlerror.h"
#include "utils/display.h"
#include "utils/audio.h"
#include "utils/input.h"
#include "menu.h"

extern void handle_error(const char *msg);

class app
{
public:
    display *screen;
    audio *sound;
    menu *mainmenu;
    input *keyboard;
    app(const char *title);
    ~app();
};

#endif // _COMMON_H_