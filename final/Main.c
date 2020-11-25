#include "SDL.h"
#include "SDL_image.h"
#include "code/kernel/Engine.h"
#include "code/rendering/RenderingLayers.h"
#include "code/rendering/Tekstury.h"


int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window = SDL_CreateWindow(
		"Skakanie",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH,
		SCREEN_HEIGHT,
		SDL_WINDOW_BORDERLESS
	);

	gra_t gra;

    gra.schodki[0].pozycja.x = 15;
    gra.schodki[1].pozycja.x = 45;
    gra.schodki[2].pozycja.x = 12;
    gra.schodki[3].pozycja.x = 250;
    gra.schodki[4].pozycja.x = 350;
    gra.schodki[4].pozycja.y = 300;
    gra.schodki[3].pozycja.y = 610;
    gra.schodki[2].pozycja.y = 150;
    gra.schodki[1].pozycja.y = 67;
    gra.schodki[0].pozycja.y = 453;

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

	LoadTextures(renderer);

    SDL_SetRenderDrawColor(renderer, 10, 20, 100, 0);
   while(1){
	    //input
	    RenderWszystko(renderer, &gra);
      // gra.schodki[0].pozycja.x++;
       if(gra.schodki[0].pozycja.x >= 600)
           break;
       //printf("%d\n",gra.schodki[0].pozycja.x);
	}


	//SDL_Delay(30000);

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
