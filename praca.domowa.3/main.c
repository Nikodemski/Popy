#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    char litera;
    srand(time(NULL));

    while (1) {
        printf("Podaj ile bajtow pamieci chcesz wykorzystac (nieujemna liczba calkowita): ");
        if (scanf("%d", &x) == 1 && x >= 0) {
        break;
        }
        else {
            printf("PODAJ POPRAWNA LICZBE!\n");
            while ((litera = getchar()) != '\n' && litera != EOF);
        }
    }
    int *obszar1;
    int *obszar2;

    obszar1 = (int*)malloc(x);
    obszar2 = (int*)malloc(x);

    int i;
    int ile_sie_zmiesci = x/sizeof(int);
    if (x==0){
        printf("\n\nW %d bajtach pamieci nie zmiesci sie zaden element\n.", x);
        }
    else{
    printf("\n\nW %d bajtach pamieci zmiesci sie %d elementow.\n", x, ile_sie_zmiesci);
    }

    for (i=0; i<ile_sie_zmiesci; i++) {
        *(obszar1+i)=rand()%999;
        printf("Pierwszy obszar pamieci: Element %d: %d\n", i+1, *(obszar1 + i));
    }
    for (i = 0; i < ile_sie_zmiesci; i++) {
        *(obszar2 + i) = *(obszar1 + (ile_sie_zmiesci - i -1));
    }
    printf("\n\nOdwrocona kolejnosc elementow\n\n");
    for (i=0; i<ile_sie_zmiesci; i++) {
        printf("Drugi obszar pamieci: Element %d: %d\n", i+1, *(obszar2 + i));
    }
    free(obszar1);
    free(obszar2);
    return 0;
}
