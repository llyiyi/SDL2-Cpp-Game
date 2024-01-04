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
    TTF_Init();
    Mix_Init(MIX_INIT_MP3);
    SDL_Window *window = SDL_CreateWindow("fly-bird",
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SDL_WINDOWPOS_UNDEFINED,
                                          1600,
                                          900,
                                          SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 2048);

    TTF_Font *font_title = TTF_OpenFont("../res/font/STHUPO.TTF", 50);
    SDL_Surface surface_title = *TTF_RenderUTF8_Blended(font_title, "Fly Bird", (SDL_Color){0, 0, 0, 255});
    SDL_Texture *texture_title = SDL_CreateTextureFromSurface(renderer, &surface_title);

    SDL_Surface *surface_background = IMG_Load("../res/image/background.png");
    SDL_Texture *texture_background = SDL_CreateTextureFromSurface(renderer, surface_background);
    SDL_Rect rect_title = {100, 100, 800, 600};
    SDL_RenderCopy(renderer, texture_background, NULL, NULL);
    SDL_QueryTexture(texture_title, NULL, NULL, &rect_title.w, &rect_title.h);
    SDL_RenderCopy(renderer, texture_title, NULL, &rect_title);
    SDL_RenderPresent(renderer);

    Mix_Chunk *chunk = Mix_LoadWAV("../res/sound/fly.mp3");
    Mix_Music *bgm = Mix_LoadMUS("../res/sound/bgm.mp3");

    // Mix_PlayMusic(bgm, -1);
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
                Mix_PlayChannel(-1, chunk, -1);
                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("mouse down\n");
                break;
            default:
                break;
            }
        }
        fflush(stdout);
        SDL_Delay(5);
    }

    Mix_FreeChunk(chunk);
    Mix_FreeMusic(bgm);
    Mix_CloseAudio();
    SDL_DestroyTexture(texture_title);
    SDL_DestroyTexture(texture_background);
    SDL_FreeSurface(&surface_title);
    SDL_FreeSurface(surface_background);
    SDL_DestroyWindow(window);

    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
    Mix_Quit();
    return 0;
}