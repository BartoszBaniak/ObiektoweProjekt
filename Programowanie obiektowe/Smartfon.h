#include <iostream>
using namespace std;

#ifndef PO_PROJEKT_SMARTFON_H
#define PO_PROJEKT_SMARTFON_H


class Smartfon {
public:
    Smartfon(string producent, string model, int cena, string system, int pamiec, Bateria *bateria, Wyswietlacz *wyswietlacz) {
        this->producent = producent;
        this->model = model;
        this->cena = cena;
        this->system = system;
        this->pamiec = pamiec;
        this->bateria = bateria;
        this->wyswietlacz = wyswietlacz;
    }
    string producent;
    string model;
    int cena;
    string system;
    int pamiec;
    Bateria *bateria; //agregacja czesciowa
    Wyswietlacz *wyswietlacz;

    ~Smartfon() {
        cout << "\nTen smartfon juz nie jest dostepny w sprzedazy!\n";
    }

    friend void updateSmartfon(Smartfon &, string newSystem);

    void printSmartfonInfo() {
        cout << endl << producent << " " << model << " " << pamiec << "GB\n" << cena << "PLN " << "\nSystem " << system << "\nBateria: " << bateria->pojemnosc << endl;
        wyswietlacz->printWyswietlaczInfo();
    }

    void printCenaInfo() {
        cout << "\nCena telefonu wynosi: " << cena << "PLN";
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

    friend class Serwis;
private:
    string systemError;

    void wyczyscBledy() {
        systemError = "";
    }
};


#endif //PO_PROJEKT_SMARTFON_H
