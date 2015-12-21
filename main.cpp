#include "lib.h"
#include "constantes.h"
#include "fonctions.h"

using namespace std;

int main(int argc, char **argv)
{
    bool quit = false;

    SDL_Event event;

    initParametresJeu(); // On initialise la fenetre de jeu + librairies SDL

    Barre barre; // correspond à la "raquette" pour renvoyer la balle
    initBarre(barre); // On place la barre du j1 par défaut

    Balle balle;
    initBalle(balle);

    boucleDeJeu(quit, barre, balle, event); // boucle principale du jeu (contient while() )

    SDL_Quit();

    return EXIT_SUCCESS;
}


