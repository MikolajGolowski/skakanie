#include "RenderingLayers.h"


SDL_Rect playerPos = {SCREEN_WIDTH/2-ROZMIAR_GRACZA/2,
                      SCREEN_HEIGHT-100-ROZMIAR_GRACZA,
                      ROZMIAR_GRACZA,ROZMIAR_GRACZA};


bool RenderPlayer(SDL_Renderer* renderer, gracz_t *gracz){

    SDL_RenderCopy(renderer, gracz_tekstura,NULL, &playerPos);
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
    SDL_RenderPresent(renderer);
    return 1;
}