/* Zadanie domowe z funkcji:

Osoby o nieparzystej liczbie liter w nazwisku realizują wariant (A), natomiast o parzystej liczbie liter nazwisku realizują wariant (B)

Wariant (B):
Napisać funkcję, która przyjmie tablicę danych (char) o podanej długości i dokona *dekompresji* RLE (Runtime Length Encoding).

Funkcja jako argumenty przyjmuje:
- tablicę wejściową ze skompresowanymi danymi,
- długość tablicy wejściowej,
- wskaźnik na zmienną, do której będzie zapisana liczba elementów tablicy po wykonaniu dekompresji (przekazanie przez wskaźnik)
Funkcja zwraca:
- wskaźnik na obszar pamięci (tablicę), która zawiera zdekompresowaną tablicę wejściową (konieczne użycie malloc)

Założenia i wymagania:
1. Format skompresowanych danych to tablica char[] zawierająca zawsze parzystą liczbę elementów. Np.:
[17, 'x', 41, 'o', 3, '*'] - oznacza, że 17 razy pod rząd powtarza się znak 'x', 41 razy powtarza się znak 'o', a 3 razy powtarza się pod rząd '*'
Wyżej opisany format danych skompresowanych jest obowiązujący i nie może być w programie wybrany inny. Weryfikacja działania programu będzie
polegała na kompresji bądź dekompresji ciągu. Jeśli wynik będzie inny od spodziewanego, program nie będzie zaliczony.

2. Nie wystąpi w ciągu więcej niż 255 powtórzeń jednego znaku

3. Napisana funkcja musi przyjmować identyczną listę parametrów (włącznie z kolejnością) i zwracać identyczne dane jak odpowiednia funkcja referencyjna (uwaga na typy!)

4. Funkcja ma być napisana w plikach moja.c i moja.h

Opcjonalnie, czyli "na szóstkę" program może czytać dane wejściowe z pliku i zapisywać wynik do innego pliku.

Ocenie podlega również estetyka kodu.

Dane do wykorzystania są w plikach nieskompresowane.h i skompresowane.h.

Funkcje referencyjne (plik referencyjne.h) służą jako odniesienie i wzór.

*/

#include <stdio.h>
#include <stdlib.h>
#include "nieskompresowane.h"
#include "skompresowane.h"
#include "referencyjne.h"
#include "moja.h"
#include "testy.h"

int main()  {

    unsigned char *mojeZwroconeDane = 0;
    unsigned int dlugoscDanychWejsciowych= sizeof(daneSkompresowane)/sizeof(daneSkompresowane[69]);
    unsigned int dlugoscDanychWyjsciowych = 0;


    mojeZwroconeDane = mojaFunkcja(&daneSkompresowane, dlugoscDanychWejsciowych, &dlugoscDanychWyjsciowych) ;


    for (unsigned int i = 0; i < dlugoscDanychWyjsciowych; i=i+1)
    {

    printf("%c", mojeZwroconeDane[i]);

    }



    testujFunkcjeDekompresji(mojaFunkcja);;
    free(mojeZwroconeDane);

    return 0;
}
