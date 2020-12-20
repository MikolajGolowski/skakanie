#ifndef SAVE_H
#define SAVE_H
#include "../kernel/Engine.h"
#include "../mapa/Mapa.h"
#include <stdio.h>
#include <stdlib.h>

int saveGame(gra_t* gra);
int loadSavegame(gra_t* gra, char* loc[]);
//int read(char* loc[]);

#endif //NIEKONCZACE_SIE_SKAKANIE_SAVE_H
