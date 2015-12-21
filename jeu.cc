#include "jeu.h"
#include "constantes.h"
#include "lib.h"
#include "fonctions.h"

using namespace std;

int alea(int mini, int maxi)
{
    return (rand() % (++maxi - mini))  + mini;
}

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

bool collision(SDL_Rect a, SDL_Rect b)
{
    return a.x < b.x + b.w && a.x + a.w > b.x && a.y + a .h > b.y && a.y < b.y + b.h;
}

void boucleDeJeu(bool quit, Barre barre, Balle balle, Brique brick, SDL_Event event)
{
    Clavier clavier;
    initClavier(clavier);

    Chrono chrono;

    do
    {
        SDL_FillRect(SDL_GetVideoSurface(), &SDL_GetVideoSurface()->clip_rect, SDL_MapRGB(SDL_GetVideoSurface()->format, 255, 255, 255));

        actualiserEvenements(clavier, event);

        bougerBarre(barre, clavier);
        afficherBarre(barre);

        mouvementsBalle(balle);
        changementDirection(balle, barre);

        afficherBalle(balle);
        afficherBrique(brick);

        SDL_Flip(SDL_GetVideoSurface());

        while(SDL_PollEvent(&event))
        {
            if ((event.type == SDL_QUIT) || (event.type == SDL_MOUSEBUTTONDOWN))
                quit = true;

        }


        SDL_Delay(15);

    }while(!quit);
}

// void niveauxCasseBrique()



