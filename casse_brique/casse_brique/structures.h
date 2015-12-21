#ifndef STRUCTURES
#define STRUCTURES

#include "lib.h"

struct Balle
{
    int x;
    int y;
    int w;
    int h;

    int mvt_X;
    int mvt_Y;

    bool aToucheUnObjet;
};

struct Barre
{
    SDL_Rect rectangle;
    /*
    int x; // coordonnées abscisses
    int y; // coordonnées ordonnés
    int w; // largeur de la barre
    int h; // hauteur de la barre*/

    int mvt_gauche;
    int mvt_droite;

    int vitesseMax; // la vitesse de pointe
};

struct Clavier
{
    bool touche[SDLK_LAST];
};

#endif // STRUCTURES
