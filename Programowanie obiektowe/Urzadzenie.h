//
// Created by Bartosz Baniak on 10.01.2023.
//

#ifndef PO_PROJEKT_URZADZENIE_H
#define PO_PROJEKT_URZADZENIE_H


class Urzadzenie {
public:
    virtual void printCenaInfo() = 0;
    virtual void printProducentInfo() = 0;
    virtual void printModelInfo() = 0;
    virtual void printSystemInfo() = 0;
    virtual void printPamiecInfo() = 0;
};


#endif //PO_PROJEKT_URZADZENIE_H
