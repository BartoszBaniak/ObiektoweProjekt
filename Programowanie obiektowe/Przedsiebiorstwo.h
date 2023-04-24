//
// Created by Bartosz Baniak on 10.01.2023.
//

#ifndef PO_PROJEKT_PRZEDSIEBIORSTWO_H
#define PO_PROJEKT_PRZEDSIEBIORSTWO_H


class Przedsiebiorstwo {
public:
    virtual void printNazwaInfo() = 0;
    virtual void printSiedzibaInfo() = 0;
    virtual void printData_zalozeniaInfo() = 0;
    virtual void printPrezesInfo() = 0;
    virtual void printCena_akcjiInfo() = 0;
};


#endif //PO_PROJEKT_PRZEDSIEBIORSTWO_H
