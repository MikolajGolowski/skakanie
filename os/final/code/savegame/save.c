#include "save.h"


int saveGame(gra_t* gra){
    if(gra->wynik > 20 && gra->gracz.stan == SPOCZYNEK) {
        FILE *f;
        char *buf[500];
        f = fopen(SAVEGAME, "w");
        //akt schodek
        sprintf(buf, "%d", gra->indexAktSchodka);
        fputs(buf, f);
        fputs(" ", f);
        //zapis wyniku
        sprintf(buf, "%d", gra->wynik);
        fputs(buf, f);
        fputs(" ", f);
        //najnizszy schodek wynik
        sprintf(buf, "%d", NajnizszySchodekNr(gra));
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
        //ile schodkow wygenerowano
        sprintf(buf, "%d", wygenerowane_schodki);
        fputs(buf, f);
        fputs(" ", f);
        //schodki
        for (int i = NajnizszySchodekNr(gra); i < NajnizszySchodekNr(gra) + WIDOCZNE_SCHODKI; ++i) {
            //schodki[i+gra->wynik].nr_w_grze = i+gra->wynik;
          //  printf("%d, %f\n",schodki[i].nr_w_grze,schodki[i].pozycja.y);
            //x schodka
            gcvt(schodki[i].pozycja.x, 5, buf);
            fputs(buf, f);
            fputs(" ", f);
            //y schodka
            gcvt(schodki[i].pozycja.y, 5, buf);
            fputs(buf, f);
            fputs(" ", f);
        }
        //indexy z wskaznikow z gry
        for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
            sprintf(buf, "%d", gra->schodki[i]->nr_w_grze);
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
    gra->gracz.stan = SPOCZYNEK;
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
    gra->indexAktSchodka = e[0];
    gra->wynik = e[1];
    int w = e[2];
    gra->gracz.pozycja_na_ekranie.x = e[3];
    gra->gracz.pozycja_na_ekranie.y = e[4] - 2;
    wygenerowane_schodki = e[5];
    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        schodki[i+w].pozycja.x = e[(i * 2) + 6];
        schodki[i+w].pozycja.y = e[(i * 2) + 7];
        schodki[i+w].nr_w_grze = i+w;
    }
    for (int i = 0; i < WIDOCZNE_SCHODKI; ++i) {
        gra->schodki[i] = &schodki[(int)e[i+ 2*WIDOCZNE_SCHODKI + 6]];
    }

    fclose(f);
    printf("Pomyślnie wczytano zapis gry z pliku %s\n", loc);
    return 0;
}


