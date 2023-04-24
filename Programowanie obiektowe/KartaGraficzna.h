
#ifndef PO_PROJEKT_KARTAGRAFICZNA_H
#define PO_PROJEKT_KARTAGRAFICZNA_H


class KartaGraficzna {
public:
    KartaGraficzna(int cena, string producent, string model, int pamiec, int taktowanie) {
        this->cena = cena;
        this->producent = producent;
        this->model = model;
        this->pamiec = pamiec;
        this->taktowanie = taktowanie;
    }
    int cena;
    string producent;
    string model;
    int pamiec;
    int taktowanie;

    ~KartaGraficzna() {
        cout << "\nTa karta graficzna juz nie jest dostepna!\n";
    }

    void printKartaGraficznaInfo() {
        cout << endl << producent << " " << model << "\nCena: " << cena << "zl" << "\nPamiec: " << pamiec << "GB\nTaktowanie rdzenia: " << taktowanie << "MHz\n";
    }

    void printCenaInfo() {
        cout << "\nCena karty graficznej wynosi: " << cena << "PLN";
    }
    void printProducentInfo() {
        cout << "\nProducent: " << producent;
    }
    void printModelInfo() {
        cout << "\nModel: " << model;
    }
    void printPamiecInfo() {
        cout << "\nPamiec: " << pamiec;
    }
    void printTaktowanieInfo() {
        cout << "\nTaktowanie: " << taktowanie;
    }

    friend class Serwis;
private:
    string systemError;

    void wyczyscBledy() {
        systemError = "";
    }
};


#endif //PO_PROJEKT_KARTAGRAFICZNA_H
