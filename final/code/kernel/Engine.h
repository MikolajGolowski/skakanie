#ifndef ENGINE_H
#define ENGINE_H

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
#define ODBICIE 2
#define SPADEK 3

//wyglad schodka
#define LODOWY 0
#define ZIEMIANY 1
#define OGNISTY 2
#define CHMURA 3



typedef struct{
    int x,y;
}
pozycja_t;

typedef struct {
    pozycja_t pozycja_na_ekranie;
    pozycja_t pozycja_w_grze;
    float predkosc_x, predkosc_y;
    short stan;

}
gracz_t;

typedef struct {
    pozycja_t pozycja;
    short wyglad;
    int nr_w_grze;
    short ruszaSie;
    float predkosc;
}
schodek_t;

typedef struct {
    schodek_t schodki[WIDOCZNE_SCHODKI];
    gracz_t gracz;
    int wynik;
    int seed;
}
gra_t;



#endif //NIEKONCZACE_SIE_SKAKANIE_ENGINE_H
