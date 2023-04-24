//
// Created by Bartosz Baniak on 04.01.2023.
//

#ifndef PO_PROJEKT_BRAMKA_H
#define PO_PROJEKT_BRAMKA_H


class Bramka : public Wartosci {
public:
    Bramka(string rodzaj_d, string typ, string rodzaj_t, string moc, string czestotliwosc, int a, int b, string rodzaj_b) : Wartosci(rodzaj_d, typ, rodzaj_t, moc, czestotliwosc, a, b){
        this->rodzaj_b = rodzaj_b;
    }
    string rodzaj_b;

    void printInfo() {
        cout << "\nRodzaj diody: " << rodzaj_d << "\nTyp zlacza: " << typ << "\nRodzaj tranzystora: " << rodzaj_t <<
        ", moc: " << moc << ", czestotliwosc: " << czestotliwosc << "\nWartosci: " << a << ", " << b << "\nBramka logiczna: " << rodzaj_b << endl;
    }
};


#endif //PO_PROJEKT_BRAMKA_H
