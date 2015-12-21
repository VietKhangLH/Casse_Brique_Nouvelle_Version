#ifndef STRUCTURES
#define STRUCTURES

#include "lib.h"

struct Balle
{
    SDL_Rect rectangle;
    int mvt_X;
    int mvt_Y;
};

struct Barre
{
    SDL_Rect rectangle;
    int mvt_gauche;
    int mvt_droite;

    int vitesseMax; // la vitesse de pointe
};

struct Clavier
{
    bool touche[SDLK_LAST];
};

#endif // STRUCTURES
