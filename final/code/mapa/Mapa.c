#include "Mapa.h"


void InitMap(gra_t *gra){
    time_t t;
    gra->indexAktSchodka = 0;
    gra->schodki[0] = schodki;

    schodki[0].nr_w_grze = 0;
    schodki[0].pozycja.y = pozycja_startowa_gracza_y + ROZMIAR_GRACZA + 0.1;
    schodki[0].pozycja.x = (pozycja_startowa_gracza_x + ROZMIAR_GRACZA/2) - (SZEROKOSC_SCHODKA/2);
    schodki[0].predkosc.y = 0;
    schodki[0].predkosc.x = 0;

    wygenerowane_schodki = 1;

    srand((unsigned )time(&t));
    for (int i = wygenerowane_schodki; i < WIDOCZNE_SCHODKI; ++i) {
        schodki[i].nr_w_grze = i;
        schodki[i].pozycja.x = rand()%(SCREEN_WIDTH - SZEROKOSC_SCHODKA);
        schodki[i].pozycja.y = schodki[i-1].pozycja.y + (rand()%LOSOWOSC_ODSTEPU_MIEDZY_SCHODKAMI) - ODSTEP_MIEDZY_SCHODKAMI;
        schodki[i].predkosc.y = 0;
        schodki[i].predkosc.x = 0;
        wygenerowane_schodki++;
    }
    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        gra->schodki[i] = &schodki[i];
    }
}

void NastSchodek(){
    //if(wygenerowane_schodki == SCHODKI_DO_WYGRANIA)
    //    return;
    schodki[wygenerowane_schodki].nr_w_grze = schodki[wygenerowane_schodki-1].nr_w_grze + 1;
    schodki[wygenerowane_schodki].pozycja.x = rand()%(SCREEN_WIDTH - SZEROKOSC_SCHODKA);
    schodki[wygenerowane_schodki].relacjaWzgledemWczesniejszego.y = (rand()%LOSOWOSC_ODSTEPU_MIEDZY_SCHODKAMI) - ODSTEP_MIEDZY_SCHODKAMI;
    schodki[wygenerowane_schodki].pozycja.y = schodki[wygenerowane_schodki-1].pozycja.y + schodki[wygenerowane_schodki].relacjaWzgledemWczesniejszego.y;
    schodki[wygenerowane_schodki].predkosc.y = 0;
    schodki[wygenerowane_schodki].predkosc.x = 0;
    wygenerowane_schodki++;

}
