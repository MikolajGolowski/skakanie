#include "save.h"


int saveGame(gra_t* gra){
    if(gra->wynik > 20) {
        FILE *f;
        char *buf[500];
        f = fopen(SAVEGAME, "w");
        //zapis wyniku
        sprintf(buf, "%d", gra->wynik);
        fputs(buf, f);
        fputs(" ", f);
        //aktualny schodek
        sprintf(buf, "%d", gra->indexAktSchodka);
        fputs(buf, f);
        fputs(" ", f);
        //x gracza
        gcvt(gra->gracz.pozycja_na_ekranie.x, 5, buf);
        fputs(buf, f);
        fputs(" ", f);
        //y gracza
        gcvt(gra->gracz.pozycja_na_ekranie.y, 5, buf);
        fputs(buf, f);
        fputs(" ", f);
        //schodki
        while (wygenerowane_schodki <= WIDOCZNE_SCHODKI) {
            NastSchodek();
        }
        for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
            //schodki[i+gra->wynik].nr_w_grze = i+gra->wynik;
            //x schodka
            gcvt(gra->schodki[i]->pozycja.x, 5, buf);
            fputs(buf, f);
            fputs(" ", f);
            //y schodka
            gcvt(gra->schodki[i]->pozycja.x, 5, buf);
            fputs(buf, f);
            fputs(" ", f);
        }
        fclose(f);
        printf("Zapisano stan gry\n");
    }
    else printf("Nie mozna zapisac stanu gry dopóki wynik jest mniejszy niż 20\n");
    return 0;
}

int loadSavegame(gra_t* gra, char* loc[]){


    return 0;
}


