#ifndef _MAIN_NIEKONCZACE_SIE_SKAKANIE_C
#define _MAIN_NIEKONCZACE_SIE_SKAKANIE_C

#include "SDL.h"
#include <string.h>
#include "code/kernel/Engine.h"
#include "code/rendering/RenderingLayers.h"
#include "code/rendering/Tekstury.h"
#include "code/sterowanie/Sterowanie.h"
#include "code/kernel/Update.h"
#include "code/mapa/Mapa.h"
#include <time.h>

int main(int argc, char *argv[])
{
    bool loadGame = false;
    if(argc == 2){
        if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
            printf("\nGra \"Niekonczace sie skakanie\" polega na wskoczeniu na jak najwyzszy schodek na losowo generowanej mapie.\n\n"
                   "STEROWANIE:\nstrzalka w lewo - ruch w lewo\nstrzalka w prawo - ruch w prawo\nspacja - skok\nklawisz s - zapis stanu gry do pliku savegame.nss\nescape - wyjscie z gry\n\n"
                   "Aby wczytać zapisaną grę należy jako argument podać ścieżkę do pliku z zapisem, np. ./Niekonczace_sie_skakanie savegame.nss wczytuje zapis z pliku savegame.nss\n\n");
            return 0;
        }
        else if(fopen(argv[1],"r")!=NULL){
            loadGame = true;
        }else{
            printf("Nie znaleziono zapisu gry! Sprawdz -h lub --help\n");
            return 0;
        }
    }else if(argc > 2){
        printf("Program przyjmuje tylko jeden argument.\n Wpisz -h lub --help by uzyskac pomoc\n");
        return 0;
    }

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

	if(!loadGame)
        InitMap(&gra);

    gra.gracz.pozycja_na_ekranie.x = pozycja_startowa_gracza_x;
    gra.gracz.pozycja_na_ekranie.y = pozycja_startowa_gracza_y;
    gra.predkoscWszystkiego = 0;
    gra.gracz.predkosc_x = 0;
    gra.gracz.predkosc_y = 0;
    gra.wynik = 0;
    gra.gracz.stan = SPOCZYNEK;

    gra.gracz.predkosc_y = 0;
    gra.gracz.predkosc_x = 0;


	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

	LoadTextures(renderer);

    SDL_SetRenderDrawColor(renderer, 123, 125, 250, 0);

    clock_t uplyw = clock();

    if(loadGame)
        loadSavegame(&gra,argv[1]);

    while(1){

        if(InputZKlawiatury(&gra) == -1 | Update(&gra,clock() - uplyw) == -1){
            break;
        }
       // printf("%ld\n",CLOCKS_PER_SEC/(clock()-uplyw));       //ILOSC FPS
        uplyw = clock();
	    RenderWszystko(renderer, &gra);

        SDL_RenderPresent(renderer);

        if(gra.schodki[gra.indexAktSchodka]->nr_w_grze == SCHODKI_DO_WYGRANIA){
            printf("GRATULACJE! UDAŁO CI SIĘ WSPIĄĆ NA SAM SZCZYT I UKOŃCZYĆ GRĘ!\n");
        }
	}

    printf("Koniec gry!\n");
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
#endif