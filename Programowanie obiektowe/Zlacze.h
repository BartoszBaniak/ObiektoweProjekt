//
// Created by Bartosz Baniak on 04.01.2023.
//

#ifndef PO_PROJEKT_ZLACZE_H
#define PO_PROJEKT_ZLACZE_H


class Zlacze : public Dioda {
public:
    Zlacze(string rodzaj_d, string typ) : Dioda(rodzaj_d) {
        this->typ = typ;
    }
    string typ;
};


#endif //PO_PROJEKT_ZLACZE_H
