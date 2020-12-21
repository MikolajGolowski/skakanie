#ifndef _RENDERINGLAYERS_NSS_H
#define _RENDERINGLAYERS_NSS_H

#include "SDL.h"
#include "SDL_image.h"
#include <stdbool.h>
#include "../kernel/Engine.h"
#include "Tekstury.h"

//bool DodajTextureDoWarstwy(int warstwa, SDL_Texture *tekstura);
void InitRender();
bool RenderPlayer(SDL_Renderer* renderer, gracz_t *gracz);
bool RenderSchodki(SDL_Renderer* renderer, schodek_t* schodek[]);
bool RenderTlo(SDL_Renderer* renderer, gra_t* gra);
bool RenderWszystko(SDL_Renderer* renderer, gra_t* gra);

#endif //RENDERINGLAYERS_H
