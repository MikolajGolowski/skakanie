#ifndef _NIEKONCZACE_SIE_SKAKANIE_MAPA_H
#define _NIEKONCZACE_SIE_SKAKANIE_MAPA_H

#include "../kernel/Engine.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

schodek_t schodki[SCHODKI_DO_WYGRANIA+WIDOCZNE_SCHODKI];
int wygenerowane_schodki;

void InitMap(gra_t* gra);
void NastSchodek();

#endif //NIEKONCZACE_SIE_SKAKANIE_MAPA_H
