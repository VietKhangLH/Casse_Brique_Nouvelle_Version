TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    affichage.cc \
    jeu.cc \
    jeu_balle.cc \
    jeu_barre.cc \
    jeu_brique.cc \
    main.cpp

OTHER_FILES +=

HEADERS += \
    affichage.h \
    constantes.h \
    fonctions.h \
    jeu.h \
    jeu_balle.h \
    jeu_barre.h \
    jeu_brique.h \
    lib.h \
    structures.h

LIBS+=`sdl-config --libs` -lSDL_image -lSDL_ttf
INCLUDEPATH+=-I/usr/include/SDL/


