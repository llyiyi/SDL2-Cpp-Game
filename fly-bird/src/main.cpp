/**
 * @file main.cpp
 * @author llyiyi (llyiyi@mail.nwpu.edu.cn)
 * @brief
 * @version 0.1
 * @date 2024-01-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "main.h"
#undef main

int main()
{
    app *flybird = new app("fly-bird");

    flybird->sound->playmusic();
    flybird->mainmenu->showmenu();
    while (1)
    {
        flybird->keyboard->handleinput();
        if (flybird->keyboard->click)
        {
            flybird->keyboard->flushbool();
            flybird->sound->playfly();
        }
        if (flybird->keyboard->quit)
        {
            break;
        }
    }
    delete flybird;
    return 0;
}
