#include "jeu_brique.h"
#include "constantes.h"
#include "lib.h"
#include "fonctions.h"

#define L_PIXEL 1
#define H_PIXEL 1

using namespace std;

void genererBrique(Brique brick)
{
    switch (brick.vie) // selon le nombre de fois qu'il faudras touché la brique
    {
        case 1:
            SDL_FillRect(SDL_GetVideoSurface(), &brick.rectangle, SDL_MapRGB(SDL_GetVideoSurface()->format, 255, 0, 0));
            break;

        default:
            break;
    }
}

void initBrick(Brique &brick)
{
    brick.rectangle.x = 250;
    brick.rectangle.y = 200;
    brick.rectangle.w = 100;
    brick.rectangle.h = 20;

    brick.vie = 1;
}
