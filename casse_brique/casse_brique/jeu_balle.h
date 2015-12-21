#ifndef JEU_BALLE_H
#define JEU_BALLE_H

#include "jeu.h"

void afficherBalle(Balle balle);
void initBalle(Balle &balle);
void mouvementsBalle(Balle &balle);
void changementDirection(Balle &balle, Barre barre);

#endif // JEU_BALLE_H
