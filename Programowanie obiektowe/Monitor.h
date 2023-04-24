//
// Created by Bartosz Baniak on 10.01.2023.
//

#ifndef PO_PROJEKT_MONITOR_H
#define PO_PROJEKT_MONITOR_H


class Monitor {
public:
    Monitor(string producent, string model, int przekatna, string rozdzielczosc, int czestotliwosc_odswiezania) {
        this->producent = producent;
        this->model = model;
        this->przekatna = przekatna;
        this->rozdzielczosc = rozdzielczosc;
        this->czestotliwosc_odswiezania = czestotliwosc_odswiezania;

    }
    string producent;
    string model;
    int przekatna;
    string rozdzielczosc;
    int czestotliwosc_odswiezania;

    void printProducentInfo() {
        cout << "\nProducent monitora: " << producent;
    }
    void printModelInfo() {
        cout << "\nModel: " << model;
    }
    void printPrzekatnaInfo() {
        cout << "\nPrzekatna: " << przekatna << "''";
    }
    void printRozdzielczoscInfo() {
        cout << "\nRozdzielczosc: " << rozdzielczosc;
    }
    void printOdswiezanieInfo() {
        cout << "\nOdswiezanie: " << czestotliwosc_odswiezania << "Hz\n";
    }
};

#endif //PO_PROJEKT_MONITOR_H
