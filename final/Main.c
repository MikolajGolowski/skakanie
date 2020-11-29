#include "SDL.h"
#include "SDL_image.h"
#include "code/kernel/Engine.h"
#include "code/rendering/RenderingLayers.h"
#include "code/rendering/Tekstury.h"
#include "code/sterowanie/Sterowanie.h"
#include "code/kernel/Update.h"
#include "code/mapa/Mapa.h"
#include <time.h>

#if WINDOWS
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main(int argc, char *argv[])
{
    InitEngine();
	SDL_Init(SDL_INIT_EVERYTHING);
    InitRender();

	SDL_Window *window = SDL_CreateWindow(
		"Skakanie",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH,
		SCREEN_HEIGHT,
		0
	);

	gra_t gra;

    InitMap(&gra);

    gra.gracz.pozycja_na_ekranie.x = pozycja_startowa_gracza_x;
    gra.gracz.pozycja_na_ekranie.y = pozycja_startowa_gracza_y;
    gra.predkoscWszystkiego = 0;
    gra.gracz.predkosc_x = 0;
    gra.gracz.predkosc_y = 0;
    gra.wynik = 0;
    gra.gracz.stan = SPOCZYNEK;

 //   gra.schodki[0] = schodki;

    /*   gra.schodki[1].pozycja.x = 45;
       gra.schodki[2].pozycja.x = 12;
       gra.schodki[3].pozycja.x = 250;
       gra.schodki[4].pozycja.x = 350;
       gra.schodki[4].pozycja.y = 67;
       gra.schodki[3].pozycja.y = 150;
       gra.schodki[2].pozycja.y = 300;
       gra.schodki[1].pozycja.y = 453;
   */

 /*   gra.schodki[1].nr_w_grze = 1;
    gra.schodki[2].nr_w_grze = 2;
    gra.schodki[3].nr_w_grze = 3;
    gra.schodki[4].nr_w_grze = 4;
*/
  //  gra.indexAktSchodka = 0;

  //  gra.gracz.pozycja_na_ekranie.x = SCREEN_WIDTH/2-ROZMIAR_GRACZA/2;
  //  gra.gracz.pozycja_na_ekranie.y = SCREEN_HEIGHT-100-ROZMIAR_GRACZA;
    gra.gracz.predkosc_y = 0;
    gra.gracz.predkosc_x = 0;


	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

	LoadTextures(renderer);

    SDL_SetRenderDrawColor(renderer, 10, 20, 100, 0);

    clock_t poczatek,uplyw = clock();
   // SDL_DisplayMode* displayMode;
   // int monitorHz = SDL_GetDisplayMode(0,0,displayMode) == 0 ? displayMode->refresh_rate : 60;
    int monitorHz = 500;

    while(1){
        poczatek = clock();

        if(InputZKlawiatury(&gra.gracz) == -1){
            break;
        }
       // printf("%ld\n",CLOCKS_PER_SEC/(clock()-uplyw));       //ILOSC FPS
        Update(&gra,clock() - uplyw);

        uplyw = clock();
	    RenderWszystko(renderer, &gra);

    /*    while (((clock() - poczatek)) <= CLOCKS_PER_SEC/monitorHz){
#if WINDOWS
            Sleep(1);
#else
            usleep(10);
#endif
        }*/
        SDL_RenderPresent(renderer);
	}


	//SDL_Delay(30000);

    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        printf("%d %f\n",i,gra.schodki[i]->pozycja.x);
    }
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
