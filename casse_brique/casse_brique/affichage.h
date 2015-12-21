#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include "jeu.h"

SDL_Surface *loadImageWithColorKey(std::string filename, int r, int g, int b);
void applySurface(int x, int y, SDL_Surface* source,SDL_Surface* destination, SDL_Rect* clip);
SDL_Surface *load_image( std::string filename);
void showMessageScreen(std::string message,int x,int y,TTF_Font *font,int fontSize,SDL_Color textColor,SDL_Surface* &screen);


#endif // AFFICHAGE_H
