#ifndef ENGINE_H
#define ENGINE_H

#define WINDOWS 0
#define POZYCJA_GRACZA_Y 400
#define GRAWITACJA 1
#define WAGA_GRACZA 8
#define SILA_NOG_GACZA 2500
#define PREDKOSC_PODAZANIA 1000

#define LEWO 0
#define PRAWO 1

#define WIDOCZNE_SCHODKI 5
#define SCHODKI_DO_WYGRANIA 4
#define ROZMIAR_GRACZA 75
#define SZEROKOSC_SCHODKA 100
#define WYSOKOSC_SCHODKA 75

#define SCREEN_WIDTH 600
#define SCREEN_HEIGHT 700

//stan gracza
#define SKOK 0
#define SPOCZYNEK 1
#define ODBICIE 3
#define SPADEK 2

//wyglad schodka
#define LODOWY 0
#define ZIEMIANY 1
#define OGNISTY 2
#define CHMURA 3



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
}
schodek_t;

typedef struct {
    schodek_t schodki[WIDOCZNE_SCHODKI];
    gracz_t gracz;
    int wynik;
    int seed;
    short indexAktSchodka;
    float predkoscWszystkiego;
}
gra_t;

short KolejnySchodek(short schodekAkt);
short WczesniejszySchodek(short schodekAkt);

#endif //NIEKONCZACE_SIE_SKAKANIE_ENGINE_H

