#include "lib.h"
#include "constantes.h"
#include "fonctions.h"

using namespace std;

int main(int argc, char **argv)
{
    bool quit = false;

    SDL_Event event;

    initParametresJeu(); // On initialise la fenetre de jeu + librairies SDL

    Barre b1; // correspond à la "raquette" pour renvoyer la balle
    initBarre(b1); // On place la barre du j1 par défaut

    boucleDeJeu(quit, b1, event); // boucle principale du jeu (contient while() )

    SDL_Quit();

    return EXIT_SUCCESS;
}


