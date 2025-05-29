#include"szyfrator.h"
#include <iostream>
#include <string>

using namespace std;
Szyfrator::Szyfrator() {
    klucz = "";
}

Szyfrator::Szyfrator(string klucz1) {

    this->ustawKlucz(klucz1);

}



bool Szyfrator::ustawKlucz(string klucz1) {
    if (klucz1.size()%2!=0 || klucz1.size()==0) {
    return false;}

    for (int i=0; i<klucz1.size(); i++){
        for (int j=i+1; j<klucz1.size(); j++){
            if (klucz1[i]==klucz1[j]){
                    return false;}
        }
    }

    this->klucz=klucz1;
    return true;
    }


string Szyfrator::pobierzKlucz() {
    return this->klucz;
}

string Szyfrator::szyfruj(string tekst) {
    for (int i = 0; i < tekst.length(); i++) {
        for (int j = 0; j < klucz.length(); j += 2) {
            if (j+1<klucz.length()){
            if (tekst[i] == klucz[j]) {
                tekst[i] = klucz[j + 1];
                break;
            }
            else if (tekst[i] == klucz[j + 1]) {
                tekst[i] = klucz[j];
                break;
            }
        }
    }
    }
    return tekst;
}

string Szyfrator::deszyfruj(string tekst) {
    for (int i = 0; i < tekst.length(); i++) {
        for (int j = 0; j < klucz.length(); j += 2) {
            if (j+1<klucz.length()){
            if (tekst[i] == klucz[j+1]) {
                tekst[i] = klucz[j];
                break;
            }
            else if (tekst[i] == klucz[j]) {
                tekst[i] = klucz[j + 1];
                break;
            }
        }
    }
    }
    return tekst;
}

Szyfrator::~Szyfrator(){};
