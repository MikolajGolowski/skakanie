
#include <stdio.h>
#include <stdlib.h>
#include "Update.h"
//#include <math.h>

short Update(gra_t* gra,clock_t uplyw){
    //printf("%f\n",((float)((float)(uplyw*gra->gracz.predkosc_x)/CLOCKS_PER_SEC)));
   // printf("%ld\n",uplyw);
    //gracz

    float pozycjaGraczYPrzedZmiana = gra->gracz.pozycja_na_ekranie.y;

    //zmiana polozenia gracza w poziomie i pionie (x, y)
    gra->gracz.pozycja_na_ekranie.x+=(float)((float)(uplyw*gra->gracz.predkosc_x)/CLOCKS_PER_SEC);
    gra->gracz.pozycja_na_ekranie.y-=(float)((float)(uplyw*(gra->gracz.predkosc_y + gra->predkoscWszystkiego))/CLOCKS_PER_SEC);

    //zmiana schodkow wzgledem poycji gracza
    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        gra->schodki[i].pozycja.y-=(float)((float)(uplyw*(gra->predkoscWszystkiego))/CLOCKS_PER_SEC);
    }

    if(gra->gracz.stan!=SPOCZYNEK){
        gra->gracz.predkosc_y-=GRAWITACJA*WAGA_GRACZA;
        if(gra->gracz.predkosc_y < 0){
            gra->gracz.stan = SPADEK;
        }
    }

    //printf("%d\n",gra->indexAktSchodka);
    //kolizja
    if(gra->schodki[gra->indexAktSchodka].pozycja.y < gra->gracz.pozycja_na_ekranie.y + ROZMIAR_GRACZA){ //jezeli gracz jest pod akt schodkiem
        if(pozycjaGraczYPrzedZmiana + ROZMIAR_GRACZA < gra->schodki[gra->indexAktSchodka].pozycja.y
        && gra->gracz.stan == SPADEK){ //jezeli znalazlby sie pod klockiem
            if(gra->gracz.pozycja_na_ekranie.x + ROZMIAR_GRACZA / 2 >= gra->schodki[gra->indexAktSchodka].pozycja.x
               && gra->gracz.pozycja_na_ekranie.x + ROZMIAR_GRACZA/2 <= gra->schodki[gra->indexAktSchodka].pozycja.x + SZEROKOSC_SCHODKA){ //jezeliby w niego uderzyl
                 printf("dosiad %d\n",gra->indexAktSchodka);
                gra->gracz.pozycja_na_ekranie.y = gra->schodki[gra->indexAktSchodka].pozycja.y - ROZMIAR_GRACZA;
                gra->gracz.stan = SPOCZYNEK;
                gra->gracz.predkosc_y = 0;
            }else{
                gra->indexAktSchodka = WczesniejszySchodek(gra->indexAktSchodka);
                printf("wczesniejszy %d\n",gra->indexAktSchodka);
            }
        }
    }else{  // jezeli jest nad akt schodkiem
        if(gra->schodki[KolejnySchodek(gra->indexAktSchodka)].pozycja.y > gra->gracz.pozycja_na_ekranie.y + ROZMIAR_GRACZA
        && gra->gracz.stan == SKOK){    //jezeli kolejny schodek jest pod graczem
            gra->indexAktSchodka = KolejnySchodek(gra->indexAktSchodka);
            printf("kolejny %d\n",gra->indexAktSchodka);
        }
    }
    //nadal kolizja
    if(gra->gracz.stan == SPOCZYNEK
      &&( gra->gracz.pozycja_na_ekranie.x + ROZMIAR_GRACZA / 2 < gra->schodki[gra->indexAktSchodka].pozycja.x
      || gra->gracz.pozycja_na_ekranie.x + ROZMIAR_GRACZA/2 > gra->schodki[gra->indexAktSchodka].pozycja.x + SZEROKOSC_SCHODKA)){
        gra->gracz.stan = SPADEK;
        printf("test %d\n",gra->indexAktSchodka);
        gra->indexAktSchodka = WczesniejszySchodek(gra->indexAktSchodka);
        printf("wczesniejszy %d\n",gra->indexAktSchodka);
    }

    gra->predkoscWszystkiego = PREDKOSC_PODAZANIA*
            (gra->schodki[gra->indexAktSchodka].pozycja.y - POZYCJA_GRACZA_Y)/(SCREEN_HEIGHT*2);
}