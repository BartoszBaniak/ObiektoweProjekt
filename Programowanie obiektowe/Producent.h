#include <iostream>
using namespace std;

#ifndef PO_PROJEKT_PRODUCENT_H
#define PO_PROJEKT_PRODUCENT_H


class Producent {
public:
    Producent(string nazwa, string siedziba, string data_zalozenia, string prezes, string cena_akcji){
        this->nazwa = nazwa;
        this->siedziba = siedziba;
        this->data_zalozenia = data_zalozenia;
        this->prezes = prezes;
        this->cena_akcji = cena_akcji;
    }
    string nazwa;
    string siedziba;
    string data_zalozenia;
    string prezes;
    string cena_akcji;

    ~Producent() {
        cout << "\nTen producent juz nie istnieje!" << endl;
    }

    void printNazwaInfo() {
        cout << "\nNazwa firmy: " << nazwa;
    }
    void printSiedzibaInfo() {
        cout << "\nSiedziba: " << siedziba;
    }
    void printData_zalozeniaInfo() {
        cout << "\nData zalozenia firmy: " << data_zalozenia;
    }
    void printPrezesInfo() {
        cout << "\nAktualny prezes firmy: " << prezes;
    }
    void printCena_akcjiInfo() {
        cout << "\nCena akcji: " << cena_akcji << endl;
    }

    void wyczyscBledySmartfon(Serwis *serwis) {
        serwis->przygotujSmartfonDoSprzedazy();
    }

    void wyczyscBledySmartwatch(Serwis *serwis) {
        serwis->przygotujSmartwatchDoSprzedazy();
    }

    void wyczyscBledyTablet(Serwis *serwis) {
        serwis->przygotujTabletDoSprzedazy();
    }

    void wyczyscBledyKarta(Serwis *serwis) {
        serwis->przygotujKarteDoSprzedazy();
    }

    void wyczyscBledyPlyta(Serwis *serwis) {
        serwis->przygotujPlyteDoSprzedazy();
    }

};


#endif //PO_PROJEKT_PRODUCENT_H
