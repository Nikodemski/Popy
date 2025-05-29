#include "mojapaletka.h"
#include <iostream>
#include <string>
#include <cstdio>

mojapaletka::mojapaletka(int szerokosc, int pozycja, int maxwychylenie):paletka(szerokosc, pozycja, maxwychylenie) {

}

bool mojapaletka::krok() {
    if (obiektY >=0){
    if((this->pozycja+(this->szerokosc-1)/2)<this->obiektX) {
        this->kierunek = 1;}

    else if((this->pozycja - (this->szerokosc-1)/2) > this->obiektX) {
        this->kierunek = -1;
    }else {
            this->kierunek = 0; }
        return paletka::krok();
        this->kierunek = 0;
}
return false;
}




mojapaletka::~mojapaletka() {}
