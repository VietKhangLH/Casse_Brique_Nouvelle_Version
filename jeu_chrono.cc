#include "jeu_chrono.h"
#include "constantes.h"
#include "lib.h"
#include "fonctions.h"

using namespace std;

void afficherChrono(Chrono chrono)
{
    TTF_Init();
    TTF_Font *fonts;
    string police = "sinkin-sans-regular.ttf";
    SDL_Color textColor = {255,255,255};
    int fontSize = 36;
    fonts = TTF_OpenFont(police.c_str(),fontSize);

    SDL_Surface *ecran = SDL_GetVideoSurface();

    chrono.timeState = SDL_GetTicks() / 1000; // temps en s (d'ou le / 1000)

    ostringstream tmpsEcran;
    tmpsEcran.flush();
    tmpsEcran.str("");

    tmpsEcran << chrono.timeState;

    showMessageScreen("tmpsEcran.str()", 150, 150, fonts, fontSize, textColor, ecran);
}
