//
// Created by Bartosz Baniak on 04.01.2023.
//

#ifndef PO_PROJEKT_WARTOSCI_H
#define PO_PROJEKT_WARTOSCI_H


class Wartosci : public Tranzystor {
public:
    Wartosci(string rodzaj_d, string typ, string rodzaj_t, string moc, string czestotliwosc, int a, int b) : Tranzystor(rodzaj_d, typ, rodzaj_t, moc, czestotliwosc) {
        this->a = a;
        this->b = b;
    }
    int a;
    int b;
};


#endif //PO_PROJEKT_WARTOSCI_H
