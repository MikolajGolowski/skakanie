#include "save.h"


int saveGame(gra_t* gra){
    if(gra->wynik > 20 && gra->gracz.stan == SPOCZYNEK) {
        FILE *f;
        char *buf[500];
        f = fopen(SAVEGAME, "w");
        //stan gracza
        sprintf(buf, "%d", gra->gracz.stan);
        fputs(buf, f);
        fputs(" ", f);
        //zapis wyniku
        sprintf(buf, "%d", gra->wynik);
        fputs(buf, f);
        fputs(" ", f);
        //najnizszy schodek wynik
        sprintf(buf, "%d", NajnizszySchodek(gra));
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
            gcvt(gra->schodki[i]->pozycja.y, 5, buf);
            fputs(buf, f);
            fputs(" ", f);
        }
        fclose(f);
        printf("Zapisano stan gry\n");
    }
    else printf("Nie mozna zapisac stanu gry dopóki wynik jest mniejszy niż 20 lub gracz jest w locie!\n");
    return 0;
}

int loadSavegame(gra_t* gra, char loc[]){
    FILE* f;
    char t[1000000];
    f = fopen(loc,"r");
    fgets(t,1000000,f);
    float e[50000];
    int l = 0;
    char* pocz = t;
    for (char* koniec = t; *koniec != '\0'; koniec++) {
        if(*koniec == ' '){
            e[l] = strtof(pocz, &koniec);
            pocz = koniec;
            l++;
        }
    }
    gra->gracz.stan = e[0];
    if(gra->gracz.stan!= SPOCZYNEK)
        printf("ZŁY ZAPIS GRY!\n");
    gra->wynik = e[1];
    int w = e[2];
    gra->gracz.pozycja_na_ekranie.x = e[3];
    gra->gracz.pozycja_na_ekranie.y = e[4];

    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        schodki[i].pozycja.x = e[(i*2)+5];
        schodki[i].pozycja.y = e[(i*2) + 6];
        schodki[i].nr_w_grze += w;
        if(schodki[i].nr_w_grze == gra->wynik){
            gra->indexAktSchodka = i;
        }
    }

    fclose(f);
    return 0;
}


