#ifndef _NIEKONCZACE_SIE_SKAKANIE_TEKSTURY_H
#define _NIEKONCZACE_SIE_SKAKANIE_TEKSTURY_H


#include <stdbool.h>
#include "SDL_image.h"
#include "SDL.h"

SDL_Texture* tekstura_gracz_stoi;
SDL_Texture* schodek_tekstura;
SDL_Texture* tekstura_gracz_skok;
    SDL_Texture* tekstura_gracz_spada;

bool LoadTextures(SDL_Renderer* renderer);

#endif //NIEKONCZACE_SIE_SKAKANIE_TEKSTURY_H
