#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <stdio.h>

void playsound(void) 
{
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
        return;
    }

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
        return;
    }

    Mix_Music* music = Mix_LoadMUS("Ry Tanindrazanay Malala ô.mp3");
    if (music == NULL) {
        printf("Failed to load music! SDL_mixer Error: %s\n", Mix_GetError());
        return;
    }

    if (Mix_PlayMusic(music, -1) == -1) {
        printf("Failed to play music! SDL_mixer Error: %s\n", Mix_GetError());
        return;
    }

    printf("Musique en cours de lecture. Appuyez sur q pour quitter.\n");
    while (1)
    {
        if (getchar() == 'q')
        {    
        //getchar();
        //Mix_HaltMusic();

    
            Mix_FreeMusic(music);
            Mix_CloseAudio();
        //SDL_QuitSubSystem(SDL_INIT_AUDIO);
            Mix_Quit();
            SDL_Quit();
            return ;
        }
    }
}