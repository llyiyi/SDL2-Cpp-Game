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

    TTF_Font *font_title = TTF_OpenFont("../res/font/STHUPO.TTF", 50);
    SDL_Surface surface_title = *TTF_RenderUTF8_Blended(font_title, "Fly Bird", (SDL_Color){0, 0, 0, 255});
    SDL_Texture *texture_title = SDL_CreateTextureFromSurface(flybird->renderer, &surface_title);

    SDL_Surface *surface_background = IMG_Load("../res/image/background.png");
    SDL_Texture *texture_background = SDL_CreateTextureFromSurface(flybird->renderer, surface_background);
    SDL_Rect rect_title = {100, 100, 800, 600};
    SDL_RenderCopy(flybird->renderer, texture_background, NULL, NULL);
    SDL_QueryTexture(texture_title, NULL, NULL, &rect_title.w, &rect_title.h);
    SDL_RenderCopy(flybird->renderer, texture_title, NULL, &rect_title);
    SDL_RenderPresent(flybird->renderer);

    SDL_Event event;
    while (1)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                printf("quit\n");
                return 0;
            case SDL_KEYDOWN:
                printf("key down: %s\n", SDL_GetKeyName(event.key.keysym.sym));
                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("mouse down\n");
                flybird->sound->fly;
                break;
            default:
                break;
            }
        }
        fflush(stdout);
        SDL_Delay(5);
    }

    SDL_DestroyTexture(texture_title);
    SDL_DestroyTexture(texture_background);
    SDL_FreeSurface(&surface_title);
    SDL_FreeSurface(surface_background);

    delete flybird;
    return 0;
}
