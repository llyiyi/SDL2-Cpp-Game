#include "common.h"

app::app(const char *title)
{
    sound = new audio();
}
app::~app()
{
    delete sound;
}