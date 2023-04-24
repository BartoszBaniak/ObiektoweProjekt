#include <iostream>
using namespace std;

#ifndef PO_PROJEKT_KOMPUTER_H
#define PO_PROJEKT_KOMPUTER_H


class Komputer {
public:
    Komputer(KartaGraficzna *kartagraficzna, Procesor *procesor, PlytaGlowna *plytaglowna) {
        this->kartagraficzna = kartagraficzna;
        this->procesor = procesor;
        this->plytaglowna = plytaglowna;
    }
    KartaGraficzna *kartagraficzna;
    Procesor *procesor;
    PlytaGlowna *plytaglowna;

    ~Komputer() {
        cout << "\nTen komputer juz nie istnieje!\n";
    }

    friend void zmianaKarty(Komputer &, KartaGraficzna *newKarta);
    void printKomputerInfo() {
        cout << "\nInformacje o komputerze\nPlyta glowna: " << plytaglowna->producent << " " << plytaglowna->model << "\nProcesor: " << procesor->producent << " " << procesor->model << "\nKarta graficzna: " << kartagraficzna->producent << " " << kartagraficzna->model << endl;
    }
};


#endif //PO_PROJEKT_KOMPUTER_H
