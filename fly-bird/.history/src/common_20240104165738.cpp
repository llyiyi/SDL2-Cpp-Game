#include "common.h"

app::app(const char *title)
{
    sound = new audio();
    screen = new display(title);
}
app::~app()
{
    delete sound;
    delete screen;
}