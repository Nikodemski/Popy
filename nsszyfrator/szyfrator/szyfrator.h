#ifndef SZYFRATOR_H_INCLUDED
#define SZYFRATOR_H_INCLUDED

#include <string>


class Szyfrator {
    public:
        Szyfrator();

        Szyfrator(std::string klucz1);

        ~Szyfrator();



        bool ustawKlucz(std::string klucz1);

        std::string pobierzKlucz();

        std::string szyfruj (std::string tekst);

        std::string deszyfruj (std::string tekst);


    protected:

    private:

        std::string klucz;


};


#endif // SZYFRATOR_H_INCLUDED
