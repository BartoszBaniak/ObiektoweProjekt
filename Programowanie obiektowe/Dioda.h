//
// Created by Bartosz Baniak on 04.01.2023.
//

#ifndef PO_PROJEKT_DIODA_H
#define PO_PROJEKT_DIODA_H


class Dioda {
public:
    string rodzaj_d;
    Dioda(string rodzaj_d) {
        this->rodzaj_d = rodzaj_d;
    }

    friend class Procesor;
    virtual void printInfo() = 0;
};


#endif //PO_PROJEKT_DIODA_H
