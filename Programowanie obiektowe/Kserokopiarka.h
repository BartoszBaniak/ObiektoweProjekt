//
// Created by Bartosz Baniak on 04.01.2023.
//

#ifndef PO_PROJEKT_KSEROKOPIARKA_H
#define PO_PROJEKT_KSEROKOPIARKA_H


class Kserokopiarka : Drukarka {
public:
    Kserokopiarka(string producent, string model, string rodzaj, string funkcje) : Drukarka(producent, model, rodzaj) {
        this->funkcje = funkcje;
    }
    string funkcje;

    void printDrukarkaInfo() {
        cout << "\nDrukarka " << producent << " " << model << "\nRodzaj drukarki: " << rodzaj;
    }

    void printKserokopiarkaInfo() {
        cout << "\nFunkcje kserokopiarki: " << funkcje << endl;
    };
};


#endif //PO_PROJEKT_KSEROKOPIARKA_H
