#include "Engine.h"

short KolejnySchodek(short schodekAkt){
    if(schodekAkt != WIDOCZNE_SCHODKI - 1)
        return schodekAkt + 1;
    return 0;
}

short WczesniejszySchodek(short schodekAkt){
    if(schodekAkt == 0){
        return WIDOCZNE_SCHODKI - 1;
    }
    return schodekAkt - 1;
}