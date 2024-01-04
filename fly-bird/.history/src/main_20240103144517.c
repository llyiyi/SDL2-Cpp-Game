/**
 * @file main.c
 * @author llyiyi (llyiyi@mail.nwpu.edu.cn)
 * @brief
 * @version 0.1
 * @date 2024-01-02
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <main.h>
#undef main

int main()
{
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);

    SDL_Window *window = SDL_CreateWindow("fly-bird",
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SDL_WINDOWPOS_UNDEFINED,
                                          1600,
                                          900,
                                          SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Surface *surface_background = IMG_Load("F:\\Desktop\\file\\Github\\SDL2-Cpp-Game\\fly-bird\\res\\image\\background.png");
    if (!surface_background)
    {
        printf("IMG_Load Error: %s\n", IMG_GetError());
        return 1;
    }

    SDL_Texture *texture_background = SDL_CreateTextureFromSurface(renderer, surface_background);
    if (!texture_background)
    {
        printf("SDL_CreateTextureFromSurface Error: %s\n", SDL_GetError());
        return 1;
    }
    SDL_RenderCopy(renderer, texture_background, NULL, NULL);
    SDL_RenderPresent(renderer);
    SDL_Delay(150);

    SDL_DestroyTexture(texture_background);
    SDL_FreeSurface(surface_background);
    SDL_DestroyWindow(window);

    IMG_Quit();
    SDL_Quit();
    return 0;
}