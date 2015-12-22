#include "jeu_brique.h"
#include "constantes.h"
#include "lib.h"
#include "fonctions.h"

#define L_PIXEL 1
#define H_PIXEL 1

using namespace std;

void genererBrique(Brique brick)
{

}

void initBrick(Brique &brick)
{
    brick.rectangle.x = 250;
    brick.rectangle.y = 200;
    brick.rectangle.w = 100;
    brick.rectangle.h = 20;

    brick.vie = 1;
}
