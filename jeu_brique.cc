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
        SDL_Rect pix; // correspond au pixel qu'on va faire varier et remplir au fur et a mesure
            pix.x = brick.rectangle.x;
            pix.y = brick.rectangle.y;
            pix.w = L_PIXEL; // longueur du pixel
            pix.h = H_PIXEL; // hauteur du pixel

            for (pix.x; pix.x < (brick.rectangle.x + brick.rectangle.w); pix.x++)
            {
                SDL_FillRect(SDL_GetVideoSurface(), &pix, SDL_MapRGB(SDL_GetVideoSurface()->format,255,0,0));
            }
        break;

    default:
        break;
    }
}

void initBrick(Brique brick)
{
    brick.rectangle.x = 250;
    brick.rectangle.y = 200;
    brick.rectangle.w = 100;
    brick.rectangle.h = 20;

    brick.vie = 1;
}
