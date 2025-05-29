#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main() {

	struct element *pierwszy = NULL;
	struct element *aktualny = NULL;
	int liczba;
	char litera;

	 while (1) {
        printf("Podaj liczbe liczonych elementow ciagow: ");
        if (scanf("%d", &liczba) == 1 && liczba > 0 ) {
        break;
        }
        else {
            printf("PODAJ POPRAWNA LICZBE!\n");
            while ((litera = getchar()) != '\n' && litera != EOF);
        }
    }


        //lista

    int i;
    int suma_szeregu=0;
    int a=0;
    int b=1;
    for (i=0; i<liczba; i++) {
        struct element *nowy_element = malloc(sizeof(struct element));

        //fb

    if (i==0) {
            nowy_element->fb=0;}
    else if (i==1) {
            nowy_element->fb=1;}
    else {
        nowy_element->fb = a+b;
        a=b;
        b=nowy_element->fb;
    }


        //szereg

    if ((i + 1) % 2 == 0) {
            suma_szeregu = suma_szeregu - (i + 1);}

    else {
            suma_szeregu = suma_szeregu + (i + 1);}

        nowy_element->indeks=i;
        nowy_element->szereg = suma_szeregu;

        nowy_element-> nastepny = NULL;

        if (pierwszy == NULL) {
            pierwszy = nowy_element;
        } else {
            aktualny->nastepny = nowy_element;
        }
        aktualny = nowy_element;
    }

    printf("\n\n\nLista przed usunieciem nieparzystych indeksow:\n");
    aktualny = pierwszy;
    int indeks = 0;
    while (aktualny != NULL) {
        printf("Indeks %d: Fibonacci = %d, Szereg = %d\n", aktualny->indeks, aktualny->fb, aktualny->szereg);
        aktualny = aktualny->nastepny;
    }


        //usuwanie

    aktualny = pierwszy;
    struct element *poprzedni = NULL;
    indeks = 0;
    while (aktualny != NULL) {
        if (indeks % 2 != 0) {
            if (poprzedni == NULL) {
                pierwszy = aktualny->nastepny;
            } else {
                poprzedni->nastepny = aktualny->nastepny;
            }
            struct element *do_usuniecia = aktualny;
            aktualny = aktualny->nastepny;
            free(do_usuniecia);
        } else {
            poprzedni = aktualny;
            aktualny = aktualny->nastepny;
        }
        indeks++;
    }


        //po usunieciu

    printf("\n\n\nLista po usunieciu nieparzystych indeksow:\n");
    aktualny = pierwszy;
    indeks = 0;
    while  (aktualny != NULL) {
        printf("Indeks %d: Fibonacci = %d, Szereg = %d\n", aktualny->indeks, aktualny->fb, aktualny->szereg);
        aktualny = aktualny->nastepny;
    }


        //zwalnianie pamieci

    aktualny = pierwszy;
    while (aktualny != NULL) {
        struct element *nast = aktualny->nastepny;
         free(aktualny);
        aktualny = nast;
    }

    return 0;
}


