#ifndef STRUCTURES
#define STRUCTURES

#include "lib.h"

#define COTE_OUEST 0
#define COTE_NORD 1
#define COTE_EST 2
#define COTE_SUD 3
#define NOMBRE_COTE 4

struct Balle
{
    SDL_Rect rectangle;
    int mvt_X;
    int mvt_Y;
};

struct Barre
{
    SDL_Rect rectangle;
    SDL_Rect cote[NOMBRE_COTE];

    int mvt_gauche;
    int mvt_droite;

    int vitesseMax; // la vitesse de pointe
};

struct Clavier
{
    bool touche[SDLK_LAST];
};

#endif // STRUCTURES
