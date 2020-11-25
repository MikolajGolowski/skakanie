#include "Tekstury.h"


bool LoadTextures(SDL_Renderer* renderer){
    SDL_Surface *tmp = IMG_Load("zasoby/gracz_stoi.png");
    gracz_tekstura = SDL_CreateTextureFromSurface(renderer,tmp);
    SDL_FreeSurface(tmp);

    tmp = IMG_Load("zasoby/schodek_ziemia.png");
    schodek_tekstura = SDL_CreateTextureFromSurface(renderer,tmp);
    SDL_FreeSurface(tmp);
}