#include "jeu_barre.h"

#include "lib.h"
#include "constantes.h"
#include "fonctions.h"
#define INIT_VITESSE_BARRE 15

using namespace std;

// Initialise la barre à sa position par défaut
void initBarre(Barre &barre)
{
    barre.rectangle.x = (SCREEN_WIDTH - LG_BARRE) /2;
    barre.rectangle.y = (SCREEN_HEIGHT * 95) / 100;
    barre.rectangle.w = LG_BARRE;
    barre.rectangle.h = EP_BARRE;
    barre.vitesseMax = INIT_VITESSE_BARRE;
    barre.mvt_gauche = 0;
    barre.mvt_droite = 0;
}

//permet d'afficher la barre à l'écran
void afficherBarre(Barre b)
{
    SDL_FillRect(SDL_GetVideoSurface(), &b.rectangle, SDL_MapRGB(SDL_GetVideoSurface()->format, 255,0,0));
}

void bougerBarre(Barre &barre, Clavier clavier)
{
    if(barre.rectangle.x > 0 + 1)
    {
        if(clavier.touche[SDLK_LEFT])
        {
            barre.rectangle.x -= barre.mvt_gauche;
            if(barre.mvt_gauche < barre.vitesseMax)
            {
                barre.mvt_gauche++;
            }
        }
        else if(!clavier.touche[SDLK_LEFT] && barre.mvt_gauche > 0)
        {
            barre.rectangle.x -= barre.mvt_gauche;
            barre.mvt_gauche--;
        }
    }
    else
    {
        barre.mvt_gauche = 0;
    }

    if(barre.rectangle.x + barre.rectangle.w < SCREEN_WIDTH - 1)
    {
        if(clavier.touche[SDLK_RIGHT])
        {
            barre.rectangle.x += barre.mvt_droite;
            if(barre.mvt_droite < barre.vitesseMax)
            {
                barre.mvt_droite++;
            }
        }
        else if(!clavier.touche[SDLK_RIGHT] && barre.mvt_droite > 0)
        {
            barre.rectangle.x += barre.mvt_droite;
            barre.mvt_droite--;
        }
    }
    else
    {
        barre.mvt_droite = 0;
    }

    if(clavier.touche[SDLK_RIGHT] && clavier.touche[SDLK_LEFT])
    {
        barre.mvt_droite = 0;
        barre.mvt_gauche = 0;
    }
}
