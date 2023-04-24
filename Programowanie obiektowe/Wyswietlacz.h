#include <iostream>
using namespace std;

#ifndef PO_PROJEKT_WYSWIETLACZ_H
#define PO_PROJEKT_WYSWIETLACZ_H


class Wyswietlacz {
public:
    Wyswietlacz(string nazwa, float przekatna, int odswiezanie, string rozdzielczosc) {
        this->nazwa = nazwa;
        this->przekatna = przekatna;
        this->odswiezanie = odswiezanie;
        this->rozdzielczosc = rozdzielczosc;
    }
    string nazwa;
    float przekatna;
    int odswiezanie;
    string rozdzielczosc;

    ~Wyswietlacz() {
        cout << "\nTen wyswietlacz juz nie jest dostepny!\n";
    }

    void printWyswietlaczInfo() {
        cout << "Wyswietlacz " << nazwa << " o przekatnej " << przekatna << "''\nOdswiezanie " << odswiezanie << " Hz\nRozdzielczosc " << rozdzielczosc << endl;
    }
};


#endif //PO_PROJEKT_WYSWIETLACZ_H
