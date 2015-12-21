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

struct Brique {
    SDL_Rect rectangle; // correspond aux dimensions physique de la barre

    int vie;
    bool touche; // passe à true si touché
};

struct Clavier
{
    bool touche[SDLK_LAST];
};

struct Chrono {
    long int timeState;
    bool timeIsPaused;
};

#endif // STRUCTURES
