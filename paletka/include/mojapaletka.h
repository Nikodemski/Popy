#ifndef MOJAPALETKA_H_INCLUDED
#define MOJAPALETKA_H_INCLUDED
#include <iostream>
#include <string>
#include "paletka.h"

using namespace std;


class mojapaletka: public paletka {
    public:
    mojapaletka(int szerokosc, int pozycja, int maxwychylenie);
    virtual ~mojapaletka();

    virtual bool krok();



};


#endif // MOJAPALETKA_H_INCLUDED
