#include "menu.h"
menu::menu(SDL_Renderer *renderer)
{
    this->renderer = renderer;
}
menu::~menu()
{
    SDL_FreeSurface(background.surface);
    SDL_DestroyTexture(background.texture);
    SDL_FreeSurface(title.surface);
    SDL_DestroyTexture(title.texture);
}
void menu::loadbackground()
{
    background.surface = IMG_Load("../res/image/background.png");
    background.texture = SDL_CreateTextureFromSurface(renderer, background.surface);
    SDL_RenderCopy(this->renderer, background.texture, NULL, NULL);
}
void menu::loadtext()
{
    TTF_Font *font_title = TTF_OpenFont("../res/font/STHUPO.TTF", 50);
    title.surface = TTF_RenderUTF8_Blended(font_title, "Fly Bird", (SDL_Color){0, 0, 0, 255});
    title.texture = SDL_CreateTextureFromSurface(renderer, title.surface);
    SDL_Rect rect_title = {100, 100, 800, 600};
    SDL_QueryTexture(title.texture, NULL, NULL, &rect_title.w, &rect_title.h);
    SDL_RenderCopy(this->renderer, title.texture, NULL, &rect_title);
}
void menu::showmenu()
{
    loadbackground();
    loadtext();
    SDL_RenderPresent(this->renderer);
}