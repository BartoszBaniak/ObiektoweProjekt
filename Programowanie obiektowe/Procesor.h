
#ifndef PO_PROJEKT_PROCESOR_H
#define PO_PROJEKT_PROCESOR_H


class Procesor {
public:
    Procesor(string producent, string model, int cena, float taktowanie, int liczba_rdzeni, int cache) {
        this->producent = producent;
        this->cena = cena;
        this->model = model;
        this->taktowanie = taktowanie;
        this->liczba_rdzeni = liczba_rdzeni;
        this->cache = cache;
    }
    string producent;
    string model;
    float taktowanie;
    int liczba_rdzeni;
    int cache;
    int cena;

    ~Procesor() {
        cout << "\nTen procesor nie jest juz dostepny!\n";
    }

    friend void overclocking(Procesor &, float newTaktowanie);
    void printProcesorInfo() {
        cout << endl << producent << " " << model << " " << cena << "PLN\nTaktowanie: " << taktowanie << " GHz\nLiczba rdzeni: " << liczba_rdzeni << "\nCache: " << cache << " MB\n";
    }

    void printCenaInfo() {
        cout << "\nCena Procesora wynosi: " << cena << "PLN";
    }
    void printProducentInfo() {
        cout << "\nProducent: " << producent;
    }
    void printModelInfo() {
        cout << "\nModel: " << model;
    }
    void printPamiecInfo() {
        cout << "\nPamiec: " << cache;
    }
    void printTaktowanieInfo() {
        cout << "\nTaktowanie: " << taktowanie;
    }
private:
    Dioda *dioda;
};


#endif //PO_PROJEKT_PROCESOR_H
