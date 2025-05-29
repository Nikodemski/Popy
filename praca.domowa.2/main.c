#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tablica[100];
    int t;
    srand(time(NULL));
    for(t=0; t<100; t++) {
        tablica[t]=rand()%999;
    }
    int max, min;
    for (t=0; t<100; t++) {
        if (t==0) {
            max = tablica[t];
            min = tablica[t];
        }
        if (tablica[t]>max) {
            max = tablica[t];
        }
        if (tablica[t]<min) {
            min = tablica[t];
        }
    }
    printf("Maksymalna wartosc wynosi: %d\n", max);
    printf("Minimalna wartosc wynosi: %d\n", min);

    return 0;
}
