
#ifndef PO_PROJEKT_PLYTAGLOWNA_H
#define PO_PROJEKT_PLYTAGLOWNA_H


class PlytaGlowna {
public:
    PlytaGlowna(string producent, string model, int cena, string rodzaj_pamieci, int taktowanie, string chipset, int pamiec) {
        this->producent = producent;
        this->cena = cena;
        this->taktowanie = taktowanie;
        this->model = model;
        this->rodzaj_pamieci = rodzaj_pamieci;
        this->chipset = chipset;
        this->pamiec = pamiec;
    }
    string producent;
    string model;
    int cena;
    int taktowanie;
    string rodzaj_pamieci;
    int pamiec;
    string chipset;

    ~PlytaGlowna() {
        cout << "\nTa plyta glowna juz nie jest dostepna\n";
    }

    void printPlytaGlownaInfo() {
        cout << endl << producent << " " << model << " " << cena << "PLN\nChipset: " << chipset << "\nRodzaj pamieci: " << rodzaj_pamieci << " " << taktowanie << "MHz " << pamiec << "MB" << endl;
    };

    void printCenaInfo() {
        cout << "\nCena plyty glownej wynosi: " << cena << "PLN";
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


#endif //PO_PROJEKT_PLYTAGLOWNA_H
