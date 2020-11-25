
#include <stdio.h>
#include "Update.h"

short Update(gra_t* gra,clock_t uplyw){
    //printf("%f\n",((float)((float)(uplyw*gra->gracz.predkosc_x)/CLOCKS_PER_SEC)));
   // printf("%ld\n",uplyw);
    //gracz

    //zmiana polozenia gracza w poziomie i pionie (x, y)
    gra->gracz.pozycja_na_ekranie.x+=(float)((float)(uplyw*gra->gracz.predkosc_x)/CLOCKS_PER_SEC);
    gra->gracz.pozycja_na_ekranie.y-=(float)((float)(uplyw*gra->gracz.predkosc_y)/CLOCKS_PER_SEC);

    if(gra->gracz.stan!=SPOCZYNEK){
        gra->gracz.predkosc_y-=GRAWITACJA*WAGA_GRACZA;
        if(gra->gracz.predkosc_y < 0){
            gra->gracz.stan = SPADEK;
        }
    }

}