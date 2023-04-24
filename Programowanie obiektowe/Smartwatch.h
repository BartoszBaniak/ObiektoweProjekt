#include <iostream>
using namespace std;

#ifndef PO_PROJEKT_SMARTWATCH_H
#define PO_PROJEKT_SMARTWATCH_H


class Smartwatch {
public:
    Smartwatch(string producent, int cena, string model, string system, int pamiec) {
        this->producent = producent;
        this->cena = cena;
        this->model = model;
        this->system = system;
        this->pamiec = pamiec;
    }
    string producent;
    int cena;
    string model;
    string system;
    int pamiec;

    ~Smartwatch() {
        cout << "\nTen smartwatch nie jest juz dostepny w sprzedazy!\n";
    }

    friend void updateSmartwatch(Smartwatch &, string newSystem);

    void printCenaInfo() {
        cout << "\nCena smartwatcha wynosi: " << cena << "PLN";
    }
    void printProducentInfo() {
        cout << "\nProducent: " << producent;
    }
    void printModelInfo() {
        cout << "\nModel: " << model;
    }
    void printSystemInfo() {
        cout << "\nSystem operacyjny: " << system;
    }
    void printPamiecInfo() {
        cout << "\nPamiec urzadzenia: " << pamiec;
    }

    void printSmartwatchInfo() {
        cout << endl << producent << " " << model << " " << pamiec << "GB "<< cena << "PLN " << system << endl;
    }

    friend class Serwis;
private:
    string systemError;

    void wyczyscBledy() {
        systemError = "";
    }
};


#endif //PO_PROJEKT_SMARTWATCH_H
