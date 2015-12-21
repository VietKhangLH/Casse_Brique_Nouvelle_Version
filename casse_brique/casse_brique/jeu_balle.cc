#include "jeu_balle.h"
#include "constantes.h"
#include "lib.h"
#include "fonctions.h"

using namespace std;

void afficherBalle(Balle balle)
{
    SDL_FillRect(SDL_GetVideoSurface(), &balle.rectangle, SDL_MapRGB(SDL_GetVideoSurface()->format, 255, 0, 0));
}

void initBalle(Balle &balle)
{
    balle.rectangle.w = 10;
    balle.rectangle.h = 10;
    balle.rectangle.x = (SCREEN_WIDTH - balle.rectangle.w) / 2;
    balle.rectangle.y = (SCREEN_HEIGHT - balle.rectangle.h) / 2;
    balle.mvt_X = 5;
    balle.mvt_Y = -5;
}

void mouvementsBalle(Balle &balle)
{
    balle.rectangle.x += balle.mvt_X;
    balle.rectangle.y += balle.mvt_Y;
}

void changementDirection(Balle &balle, Barre barre)
{
    if(balle.rectangle.x < 0)
    {
        balle.mvt_X *= -1;
        balle.rectangle.x = 1;
    }
    if(balle.rectangle.x + balle.rectangle.w > SCREEN_WIDTH)
    {
        balle.mvt_X *= -1;
        balle.rectangle.x = SCREEN_WIDTH - balle.rectangle.w - 1;
    }

    if(balle.rectangle.y < 0)
    {
        balle.mvt_Y *= -1;
        balle.rectangle.y = 1;
    }
    if(balle.rectangle.y + balle.rectangle.h > SCREEN_HEIGHT)
    {
        balle.mvt_Y *= -1;
        balle.rectangle.y = SCREEN_HEIGHT - balle.rectangle.w - 1;
    }

    if(collision(balle.rectangle, barre.cote[COTE_NORD]))
    {
        balle.mvt_Y *= -1;
        balle.rectangle.y = barre.cote[COTE_NORD].y - balle.rectangle.h - 1;
    }
    if(collision(balle.rectangle, barre.cote[COTE_SUD]))
    {
        balle.mvt_Y *= -1;
        balle.rectangle.y = barre.cote[COTE_SUD].y + barre.cote[COTE_SUD].h + 1;
    }
    if(collision(balle.rectangle, barre.cote[COTE_EST]))
    {
        balle.mvt_X *= -1;
        balle.rectangle.x = barre.cote[COTE_EST].x + barre.cote[COTE_EST].w + 1;
    }
    if(collision(balle.rectangle, barre.cote[COTE_OUEST]))
    {
        balle.mvt_X *= -1;
        balle.rectangle.x = barre.cote[COTE_OUEST].x + 1;
    }
}
