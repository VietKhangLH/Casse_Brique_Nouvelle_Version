#ifndef JEU_BRIQUE_H
#define JEU_BRIQUE_H

#include "jeu.h"

struct Brique {
    SDL_Rect rectangle; // correspond aux dimensions physique de la barre

    int vie;
    bool touche; // passe à true si touché
};

void initBrick(Brique brick);
void genererBrique(Brique brick);

#endif // JEU_BRIQUE_H
