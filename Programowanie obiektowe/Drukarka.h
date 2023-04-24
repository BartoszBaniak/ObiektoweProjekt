#include <iostream>
using namespace std;

#ifndef PO_PROJEKT_DRUKARKA_H
#define PO_PROJEKT_DRUKARKA_H


class Drukarka {
public:
    Drukarka(string producent, string model, string rodzaj) {
        this->producent = producent;
        this->model = model;
        this->rodzaj = rodzaj;

    }
    string producent;
    string model;
    string rodzaj;

    ~Drukarka() {
        cout << "\nTa drukarka juz nie jest dostepna\n";
    }
    virtual void printDrukarkaInfo() = 0;
};


#endif //PO_PROJEKT_DRUKARKA_H
