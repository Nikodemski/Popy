#include <iostream>
#include "szyfrator.h"

using namespace std;

/*
Napisz klasę szyfrująco-deszyfrującą ciągi tekstowe dowolnym szyfrem podstawieniowym.

Klasa powinna posiadać:
- konstruktor podstawowy (bezargumentowy);
- konstruktor przyjmujący klucz szyfrujący jako argument;
- getter i setter "klucza" typu std::string;
- metody szyfruj(std::string) i deszyfruj(std::string);

Zwróć uwagę, które elementy powinny być chronione lub prywatne, a które powinny być publiczne.

Klucz powinien być przekazywany w formie std::string o parzystej liczbie znaków. Przykładowo klucz
"abcdefgh" oznacza, że przy szyfrowaniu:
- litera 'a' ma zostać zamieniona na 'b',
- litera 'c' ma zostać zamieniona na 'd',
itd. itp.
Przy deszyfrowaniu ma być wykonana operacja odwrotna:
- 'b' zamienione na 'a',
- 'd' zamienione na 'c',
itd. itp.

Klasa powinna nazywać się Szyfrator.

*/

int main() {

    string klucz1 = "qwertyuiopasdfghjklzxcvbnm!@#$%^&*?>";
    string klucz2 = "abcdefghijklmnopqrstuvwxyz$%^&!@#*>?";
    string testowy = "jaka prosta praca domowa!";
    string testowy2 = "czy uda mi sie zdac?";




    Szyfrator *szyfr1 = new Szyfrator(klucz1);
    Szyfrator *szyfr2 = new Szyfrator(klucz2);

    if (!szyfr1->ustawKlucz(klucz1) && !szyfr2->ustawKlucz(klucz2)) {
        cout << "Niepoprawny klucz 1 i 2!" << endl;
        delete szyfr1;
        delete szyfr2;
        return 1;
    }


    if (!szyfr1 -> ustawKlucz(klucz1)) {
        cout << "Niepoprawny klucz 1!" << endl;
        delete szyfr1;
        return 1;
    }




    if (!szyfr2->ustawKlucz(klucz2)) {
        cout << "Niepoprawny klucz 2!" << endl;
        delete szyfr2;
        return 1;
    }



    cout << "Oryginalny tekst: " << testowy << endl;


    string zakodowane1 = szyfr1->szyfruj(testowy);

    cout << "Zaszyfrowany tekst 1: " << zakodowane1 << endl;

    string odkodowane1 = szyfr1->deszyfruj(zakodowane1);
    cout << "Odszyfrowany tekst 1: " << odkodowane1 << endl;
    cout << endl;
    cout << endl;


    cout << "Oryginalny tekst 2: " << testowy2 << endl;


    string zakodowane2 = szyfr2->szyfruj(testowy2);

    cout << "Zaszyfrowany tekst 2: " << zakodowane2 << endl;

    string odkodowane2 = szyfr2->deszyfruj(zakodowane2);
    cout << "Odszyfrowany tekst 2: " << odkodowane2 << endl;

    cout << endl;

    cout << "Weryfikacja czy operacje sa odwracalne" << endl;
    cout << szyfr1->deszyfruj(szyfr1->szyfruj(testowy)) << endl;
    cout << szyfr2->deszyfruj(szyfr2->szyfruj(testowy)) << endl;

    delete szyfr1;
    delete szyfr2;

    return 0;
}
