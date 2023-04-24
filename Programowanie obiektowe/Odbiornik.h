//
// Created by Bartosz Baniak on 10.01.2023.
//

#ifndef PO_PROJEKT_ODBIORNIK_H
#define PO_PROJEKT_ODBIORNIK_H


class Odbiornik {
public:
    virtual void printProducentInfo() = 0;
    virtual void printModelInfo() = 0;
    virtual void printPrzekatnaInfo() = 0;
    virtual void printRozdzielczoscInfo() = 0;
    virtual void printOdswiezanieInfo() = 0;
};


#endif //PO_PROJEKT_ODBIORNIK_H
