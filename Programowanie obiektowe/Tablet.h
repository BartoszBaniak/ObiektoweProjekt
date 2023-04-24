#include <iostream>
using namespace std;

#ifndef PO_PROJEKT_TABLET_H
#define PO_PROJEKT_TABLET_H


class Tablet {
public:
    Tablet(string producent, int cena, string model, string system, Wyswietlacz *wyswietlacz, int pojemnosc) {
        this->producent = producent;
        this->cena = cena;
        this->model = model;
        this->system = system;
        this->wyswietlacz = wyswietlacz;
        this->pojemnosc = pojemnosc;
    }
    string producent;
    string model;
    int cena;
    string system;
    Wyswietlacz *wyswietlacz; //agregacja czesciowa
    int pojemnosc;

    ~Tablet() {
        cout << "\nTen tablet nie jest juz dostepny!\n";
    }

    void printCenaInfo() {
        cout << "\nCena tabletu wynosi: " << cena << "PLN";
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
        cout << "\nPamiec urzadzenia: " << pojemnosc;
    }

    void printTabletInfo() {
        cout << endl << producent << " " << model << " " << pojemnosc << "GB\n";
        wyswietlacz->printWyswietlaczInfo();
    }

    friend class Serwis;
private:
    string systemError;

    void wyczyscBledy() {
        systemError = "";
    }
};


#endif //PO_PROJEKT_TABLET_H
