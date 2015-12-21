#include "jeu.h"
#include "constantes.h"
#include "lib.h"
#include "fonctions.h"

using namespace std;

void initClavier(Clavier &clavier)
{
    for(int i = 0 ; i < SDLK_LAST ; i++)
    {
        clavier.touche[i] = false;
    }
}

void actualiserEvenements(Clavier &clavier, SDL_Event events)
{
    while(SDL_PollEvent(&events))
    {
        switch(events.type)
        {
            case SDL_KEYDOWN:
                clavier.touche[events.key.keysym.sym] = true;
                break;
            case SDL_KEYUP:
                clavier.touche[events.key.keysym.sym] = false;
                break;
            default:
                break;
        }
    }
}

void initParametresJeu()
{
    putenv("SDL_VIDEO_WINDOW_POS=center");

    SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_HWSURFACE | SDL_DOUBLEBUF);

    SDL_Init(SDL_INIT_VIDEO);
}

void boucleDeJeu(bool quit, Barre b1, SDL_Event event)
{
    Clavier clavier;
    initClavier(clavier);

    do
    {
        SDL_FillRect(SDL_GetVideoSurface(), &SDL_GetVideoSurface()->clip_rect, SDL_MapRGB(SDL_GetVideoSurface()->format, 255, 255, 255));

        actualiserEvenements(clavier, event);

        bougerBarre(b1, clavier);

        afficherBarre(b1);

        while(SDL_PollEvent(&event))
        {
            quit = (event.type == SDL_QUIT) || (event.type == SDL_MOUSEBUTTONDOWN);
            std::cout << quit << std::endl;
        }

        SDL_Flip(SDL_GetVideoSurface());
        SDL_Delay(10);


    } while(!quit);
}

