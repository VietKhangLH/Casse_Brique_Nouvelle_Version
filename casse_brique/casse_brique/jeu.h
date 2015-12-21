#ifndef JEU_H
#define JEU_H

#include "structures.h"

void initParametresJeu();
void initClavier(Clavier &clavier);
void actualiserEvenements(Clavier &clavier, SDL_Event events);
void boucleDeJeu(bool quit, Barre barre, Balle balle, SDL_Event event);

#endif // JEU_H
