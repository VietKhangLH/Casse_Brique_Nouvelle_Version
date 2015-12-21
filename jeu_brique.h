#ifndef JEU_BRIQUE_H
#define JEU_BRIQUE_H

#include "jeu.h"

<<<<<<< HEAD
void initBrick(Brique brick);
=======
struct Brique {
    SDL_Rect rectangle; // correspond aux dimensions physique de la barre

    int vie;
    bool touche; // passe à true si touché
};

void initBrick(Brique &brick);
>>>>>>> 91696dc6f8deed7bd2cbc58a553dde517329cfc4
void genererBrique(Brique brick);
void afficherBrique(Brique brick);

#endif // JEU_BRIQUE_H
