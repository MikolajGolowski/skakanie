#ifndef RENDERINGLAYERS_H
#define RENDERINGLAYERS_H

#include "SDL.h"
#include "SDL_image.h"
#include <stdbool.h>
#include "../kernel/Engine.h"
#include "Tekstury.h"

//bool DodajTextureDoWarstwy(int warstwa, SDL_Texture *tekstura);
bool RenderPlayer(SDL_Renderer* renderer, gracz_t *gracz);
bool RenderSchodki(SDL_Renderer* renderer, schodek_t* schodek[]);
bool RenderTlo(SDL_Renderer* renderer, gra_t* gra);
bool RenderWszystko(SDL_Renderer* renderer, gra_t* gra);

#endif //RENDERINGLAYERS_H
