#include "Mapa.h"


void InitMap(gra_t *gra){
    time_t t;
    wygenerowane_schodki = 1;
    srand((unsigned )time(&t));
    for (int i = wygenerowane_schodki; i < ILE_SCHODKOW_WYGENEROWAC_NA_POCZATKU; ++i) {
        schodki[i].nr_w_grze = i;
        schodki[i].pozycja.x = rand()%(SCREEN_WIDTH - SZEROKOSC_SCHODKA);
        schodki[i].pozycja.y = schodki[i-1].pozycja.y + (rand()%LOSOWOSC_ODSTEPU_MIEDZY_SCHODKAMI) - ODSTEP_MIEDZY_SCHODKAMI;
        wygenerowane_schodki++;
    }
    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        gra->schodki[i] = &schodki[i];
    }
}

void NastSchodek(){
    if(wygenerowane_schodki == SCHODKI_DO_WYGRANIA)
        return;
    schodki[wygenerowane_schodki].nr_w_grze = wygenerowane_schodki;
    schodki[wygenerowane_schodki].pozycja.x = rand()%(SCREEN_WIDTH - SZEROKOSC_SCHODKA);
    schodki[wygenerowane_schodki].pozycja.y = schodki[wygenerowane_schodki-1].pozycja.y + (rand()%LOSOWOSC_ODSTEPU_MIEDZY_SCHODKAMI) - ODSTEP_MIEDZY_SCHODKAMI;
    wygenerowane_schodki++;
}