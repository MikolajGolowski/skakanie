#include "Sterowanie.h"
#include "SDL.h"

SDL_Event event;

short InputZKlawiatury(gra_t* gra){
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {
                case SDLK_LEFT:
                    gra->gracz.predkosc_x = -PREDKOSC_X_GRACZA;
                   // printf("WCISNIETO LEWY");
                    break;
                case SDLK_RIGHT:
                    gra->gracz.predkosc_x = PREDKOSC_X_GRACZA;
                    //printf("WCISNIETO PRAWY");
                    break;
                case SDLK_ESCAPE:
                    return -1;
                    break;
                case SDLK_SPACE:
                    if(gra->gracz.stan==SPOCZYNEK){
                        gra->gracz.predkosc_y = SILA_NOG_GACZA;
                        gra->gracz.stan = SKOK;
                    }
                    break;
                case SDLK_s:
                    saveGame(gra);
                    break;
                default:
                    break;
            }
            //printf("WCISNIETO KLAWISZ\n");
            break;
        case SDL_KEYUP:
            switch (event.key.keysym.sym) {
                case SDLK_LEFT:
                    if(gra->gracz.predkosc_x < 0)
                        gra->gracz.predkosc_x = 0;
                    break;
                case SDLK_RIGHT:
                    if(gra->gracz.predkosc_x > 0)
                        gra->gracz.predkosc_x = 0;
                    break;
            }
            break;
        default:
            break;
    }
}