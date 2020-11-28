#include "RenderingLayers.h"


SDL_Rect playerPos = {SCREEN_WIDTH/2-ROZMIAR_GRACZA/2,
                      SCREEN_HEIGHT-100-ROZMIAR_GRACZA,
                      ROZMIAR_GRACZA,ROZMIAR_GRACZA};


bool RenderPlayer(SDL_Renderer* renderer, gracz_t *gracz){
    playerPos.x = gracz->pozycja_na_ekranie.x;
    playerPos.y = gracz->pozycja_na_ekranie.y;
  //  printf("%d\n",playerPos.x);
    //animacja gracza
    if(gracz->stan==SPOCZYNEK){
        if(gracz->kierunek == PRAWO)
            SDL_RenderCopy(renderer, tekstura_gracz_stoi, NULL, &playerPos);
        else
            SDL_RenderCopyEx(renderer, tekstura_gracz_stoi, NULL, &playerPos, 0, NULL, SDL_FLIP_HORIZONTAL);
    }
    else if (gracz->stan == SKOK){
        if(gracz->kierunek == PRAWO)
            SDL_RenderCopy(renderer, tekstura_gracz_skok, NULL, &playerPos);
        else
            SDL_RenderCopyEx(renderer, tekstura_gracz_skok, NULL, &playerPos, 0, NULL, SDL_FLIP_HORIZONTAL);
    }
    else             SDL_RenderCopy(renderer, tekstura_gracz_stoi, NULL, &playerPos);


    return true;
}

bool RenderSchodki(SDL_Renderer* renderer, schodek_t schodek[]){

    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        SDL_Rect pos = {schodek[i].pozycja.x, schodek[i].pozycja.y, SZEROKOSC_SCHODKA,WYSOKOSC_SCHODKA};
        SDL_RenderCopy(renderer, schodek_tekstura,NULL, &pos);
    }
    
}

bool RenderTlo(SDL_Renderer* renderer, gra_t* gra){

}

bool RenderWszystko(SDL_Renderer* renderer, gra_t* gra){
    SDL_RenderClear(renderer);
    RenderTlo(renderer, gra);
    RenderSchodki(renderer, &gra->schodki);
    RenderPlayer(renderer, &gra->gracz);

    return 1;
}