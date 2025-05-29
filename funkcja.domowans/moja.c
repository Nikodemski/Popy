#include "moja.h"
#include <stdio.h>
#include <stdlib.h>

// Ciało mojej funkcji

unsigned char *mojaFunkcja(unsigned char *daneSkompresowane, unsigned int dlugoscDanychWejsciowych, unsigned int *dlugoscDanychWyjsciowych) {

    unsigned int dlugosc = 0;
    int i=0;


    for (i; i<dlugoscDanychWejsciowych; i =i+2) {

        dlugosc = dlugosc + (unsigned char)daneSkompresowane[i];
    }

    *dlugoscDanychWyjsciowych = dlugosc;
    unsigned char *wyjscie = (unsigned char *)malloc(dlugosc * sizeof(daneSkompresowane[69])) ;
    i=0;
    int indeks=0;
    for (i; i < dlugoscDanychWejsciowych; i=i+2) {
        unsigned char ile = (unsigned char)daneSkompresowane[i];
        unsigned char znak = daneSkompresowane[i+1];
        for (int j = 0; j < ile; j++)
            {
            wyjscie[indeks] = znak;
            indeks=indeks+1;
        }
    }


    return wyjscie;
}

