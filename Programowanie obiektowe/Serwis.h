
#ifndef PO_PROJEKT_SERWIS_H
#define PO_PROJEKT_SERWIS_H

class Serwis {
public:
    Serwis(string nazwa, string siedziba, string data_zalozenia, string prezes, string cena_akcji) {
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

    void printNazwaInfo() {
        cout << "\nNazwa serwisu: " << nazwa;
    }
    void printSiedzibaInfo() {
        cout << "\nSiedziba: " << siedziba;
    }
    void printData_zalozeniaInfo() {
        cout << "\nData zalozenia serwisu: " << data_zalozenia;
    }
    void printPrezesInfo() {
        cout << "\nAktualny prezes serwis: " << prezes;
    }
    void printCena_akcjiInfo() {
        cout << "\nCena akcji: " << cena_akcji << endl;
    }

    friend class Producent;
    void przygotujSmartfonDoSprzedazy() {
        smartfon->wyczyscBledy();
    }

    void przygotujSmartwatchDoSprzedazy() {
        smartwatch->wyczyscBledy();
    }

    void przygotujTabletDoSprzedazy() {
        tablet->wyczyscBledy();
    }

    void przygotujKarteDoSprzedazy() {
        kartagraficzna->wyczyscBledy();
    }

    void przygotujPlyteDoSprzedazy() {
        plytaglowna->wyczyscBledy();
    }

private:
    Smartfon *smartfon; // częściowa
    Smartwatch *smartwatch;
    Tablet *tablet;
    KartaGraficzna *kartagraficzna;
    PlytaGlowna *plytaglowna;
    Telewizor *telewizor;
    Monitor *monitor;
    Drukarka *drukarka;
};


#endif //PO_PROJEKT_SERWIS_H
