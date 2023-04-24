#include <iostream>
using namespace std;
#ifndef PO_PROJEKT_BATERIA_H
#define PO_PROJEKT_BATERIA_H


class Bateria {
public:
    Bateria(int pojemnosc, string rodzaj) {
        this->pojemnosc = pojemnosc;
        this->rodzaj = rodzaj;
    }
    int pojemnosc;
    string rodzaj;

    ~Bateria() {
        cout << "\nTa bateria juz nie jest dostepna!\n";
    }

    friend void wymianaBaterii(Bateria &, int newPojemnosc);

    void printBateriaInfo() {
        cout << "\nRodzaj baterii: " << rodzaj << ", pojemnosc: " << pojemnosc << "mAh\n";
    }
};


#endif //PO_PROJEKT_BATERIA_H
