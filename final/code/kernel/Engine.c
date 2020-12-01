#include "Engine.h"
#include "../mapa/Mapa.h"
void InitEngine(){
    pozycja_startowa_gracza_y = SCREEN_HEIGHT-100-ROZMIAR_GRACZA;
    pozycja_startowa_gracza_x = SCREEN_WIDTH/2-ROZMIAR_GRACZA/2;
}

short KolejnySchodek(short schodekAkt){
    if(schodekAkt != WIDOCZNE_SCHODKI - 1)
        return schodekAkt + 1;
    return 0;
}

short WczesniejszySchodek(short schodekAkt){
    if(schodekAkt == 0){
        return WIDOCZNE_SCHODKI - 1;
    }
    return schodekAkt - 1;
}


short NajnizszySchodek(gra_t* gra){     //to jest do przerobienia na szybsze
    int min = gra->schodki[0]->nr_w_grze;
    int index = 0;
    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
      //  printf("%d, %d\n",gra->schodki[i]->nr_w_grze,min);
        if(gra->schodki[i]->nr_w_grze < min){
        //    printf("SDFGSDFSDFDS\n");
            index = i;
            min = gra->schodki[i]->nr_w_grze;
        }
    }
    //printf("min %d,%d\n",index,min);
    return index;
}

short NajwyzszySchodek(gra_t* gra){   //to mozna przerobic na szybsze
    int max = gra->schodki[0]->nr_w_grze;
    int index = 0;
    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        if(gra->schodki[i]->nr_w_grze > max)
            index = i;
    }
    return index;
}