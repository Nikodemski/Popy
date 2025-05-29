#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int tablica[10];
    int t;
    srand(time(NULL));
    for(t=0; t<10; t++) {
        tablica[t]=rand()%100;
    }
    int suma=0;
    int s;
    for (s=0; s<10; s++) {
        suma=suma+tablica[s];
    }
    double sredniaA= (double)suma/s;
    double iloczyn=1;
    int i;
    for (i=0; i<10; i++) {
        iloczyn=(double)iloczyn*tablica[i];
    }
    double sredniaG=pow((double)iloczyn, 1.0/i);
    printf("Œrednia arytmetyczna: %lf\n", sredniaA);
    printf("Œrednia geometryczna: %lf\n", sredniaG);

    return 0;
}
