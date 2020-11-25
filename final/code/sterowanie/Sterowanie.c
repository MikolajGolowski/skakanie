#include "Sterowanie.h"
#include "SDL.h"

SDL_Event event;

short InputZKlawiatury(gracz_t* gracz){
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {
                case SDLK_LEFT:
                    gracz->predkosc_x = -500;
                   // printf("WCISNIETO LEWY");
                    break;
                case SDLK_RIGHT:
                    gracz->predkosc_x = 500;
                    //printf("WCISNIETO PRAWY");
                    break;
                case SDLK_ESCAPE:
                    return -1;
                    break;
                case SDLK_SPACE:
                    if(gracz->stan==SPOCZYNEK){
                        gracz->predkosc_y = SILA_NOG_GACZA;
                        gracz->stan = SKOK;
                    }
                default:
                    break;
            }
            //printf("WCISNIETO KLAWISZ\n");
            break;
        case SDL_KEYUP:
            switch (event.key.keysym.sym) {
                case SDLK_LEFT:
                    if(gracz->predkosc_x < 0)
                        gracz->predkosc_x = 0;
                    break;
                case SDLK_RIGHT:
                    if(gracz->predkosc_x > 0)
                        gracz->predkosc_x = 0;
                    break;
            }
            break;
        default:
            break;
    }
}