#ifndef _MENU_H_
#define _MENU_H_

#include "utils/sdlerror.h"

typedef struct
{
    SDL_Texture *texture;
    SDL_Surface *surface;
} item;

class menu
{
public:
    menu(SDL_Renderer *renderer);
    ~menu();
    item background;
    item title;
    SDL_Renderer *renderer;
    void showmenu();
    void loadbackground();
    void loadbuttons();
    void loadtext();
};

#endif // _MENU_H_