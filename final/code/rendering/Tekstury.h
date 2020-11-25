//
// Created by mikolaj on 24.11.2020.
//

#ifndef NIEKONCZACE_SIE_SKAKANIE_TEKSTURY_H
#define NIEKONCZACE_SIE_SKAKANIE_TEKSTURY_H


#include <stdbool.h>
#include "SDL_image.h"
#include "SDL.h"

SDL_Texture* gracz_tekstura;
SDL_Texture* schodek_tekstura;

bool LoadTextures(SDL_Renderer* renderer);

#endif //NIEKONCZACE_SIE_SKAKANIE_TEKSTURY_H
