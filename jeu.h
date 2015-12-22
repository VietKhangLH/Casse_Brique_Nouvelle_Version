#ifndef JEU_H
#define JEU_H

#include "structures.h"

void initParametresJeu();
void initClavier(Clavier &clavier);
void actualiserEvenements(Clavier &clavier, SDL_Event events);
void boucleDeJeu(bool quit, Barre barre, Balle balle, Brique brick, SDL_Event event);
bool collision(SDL_Rect a, SDL_Rect b);
int alea(int mini, int maxi);

void boucleEditor(SDL_Event event);
#endif // JEU_H
