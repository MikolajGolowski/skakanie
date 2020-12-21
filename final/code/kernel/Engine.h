#ifndef _ENGINE_NSS_H
#define _ENGINE_NSS_H

#define POZYCJA_GRACZA_Y 500
#define GRAWITACJA 10
#define WAGA_GRACZA 80
#define SILA_NOG_GACZA 3000
#define PREDKOSC_X_GRACZA 800
#define PREDKOSC_PODAZANIA 5000
#define ZMIANA_KLOCKA 500   //jezeli klocek jest o tyle pod ekranem to go skasuj
#define ODSTEP_MIEDZY_SCHODKAMI 150
#define LOSOWOSC_ODSTEPU_MIEDZY_SCHODKAMI 20

#define LEWO 0
#define PRAWO 1

#define SAVEGAME "savegame.nss"

#define WIDOCZNE_SCHODKI 16
#define SCHODKI_DO_WYGRANIA 10000
#define ROZMIAR_GRACZA 75
#define SZEROKOSC_SCHODKA 100
#define WYSOKOSC_SCHODKA 75

#define SCREEN_WIDTH 600
#define SCREEN_HEIGHT 700

//stan gracza
#define SKOK 0
#define SPOCZYNEK 1
#define SPADEK 2

//wyglad schodka
#define LODOWY 0
#define ZIEMIANY 1
#define OGNISTY 2
#define CHMURA 3


float pozycja_startowa_gracza_y;
float pozycja_startowa_gracza_x;


typedef struct{
    float x,y;
}
pozycja_t;

typedef struct {
    pozycja_t pozycja_na_ekranie;
    pozycja_t pozycja_w_grze;
    int predkosc_x, predkosc_y;
    short stan;
    short kierunek;
}
gracz_t;

typedef struct {
    pozycja_t pozycja;
    pozycja_t predkosc;
    short wyglad;
    int nr_w_grze;
    short ruszaSie;
    pozycja_t relacjaWzgledemWczesniejszego;
}
schodek_t;

typedef struct {
    schodek_t* schodki[WIDOCZNE_SCHODKI];
    gracz_t gracz;
    int wynik;
    int seed;
    short indexAktSchodka;
    float predkoscWszystkiego;
}
gra_t;

void InitEngine();
short KolejnySchodek(short schodekAkt);
short WczesniejszySchodek(short schodekAkt);
short NajwyzszySchodek(gra_t* gra);
short NajnizszySchodek(gra_t* gra);
short JestLiczba(char c);
int NajnizszySchodekNr(gra_t* gra);

#endif //NIEKONCZACE_SIE_SKAKANIE_ENGINE_H

