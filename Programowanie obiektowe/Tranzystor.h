//
// Created by Bartosz Baniak on 04.01.2023.
//

#ifndef PO_PROJEKT_TRANZYSTOR_H
#define PO_PROJEKT_TRANZYSTOR_H


class Tranzystor : public Zlacze {
public:
    Tranzystor(string rodzaj_d, string typ, string rodzaj_t, string moc, string czestotliwosc) : Zlacze(rodzaj_d, typ) {
        this->rodzaj_t = rodzaj_t;
        this->moc = moc;
        this->czestotliwosc = czestotliwosc;
    }
    string rodzaj_t;
    string moc;
    string czestotliwosc;
};


#endif //PO_PROJEKT_TRANZYSTOR_H
