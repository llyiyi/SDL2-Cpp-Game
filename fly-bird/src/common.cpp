#include "common.h"

app::app(const char *title)
{
    sound = new audio();
    screen = new display(title);
    mainmenu = new menu(screen->renderer);
    keyboard = new input();
}
app::~app()
{
    delete sound;
    delete screen;
}