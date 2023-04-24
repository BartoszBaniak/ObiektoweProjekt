#include <iostream>
#include "Bateria.h"
#include "Wyswietlacz.h"
#include "Smartfon.h"
#include "Smartwatch.h"
#include "Tablet.h"
#include "Dioda.h"
#include "Procesor.h"
#include "PlytaGlowna.h"
#include "KartaGraficzna.h"
#include "Komputer.h"
#include "Drukarka.h"
#include "Kserokopiarka.h"
#include "Zlacze.h"
#include "Tranzystor.h"
#include "Wartosci.h"
#include "Bramka.h"
#include "Odbiornik.h"
#include "Przedsiebiorstwo.h"
#include "Urzadzenie.h"
#include "Komponenty.h"
#include "Monitor.h"
#include "Telewizor.h"
#include "Serwis.h"
#include "Producent.h"
using namespace std;

void wymianaBaterii(Bateria &bateria, int newPojemnosc) {
    bateria.pojemnosc = newPojemnosc;
}

void overclocking(Procesor &procesor, float newTaktowanie) {
    procesor.taktowanie = newTaktowanie;
}

void updateSmartfon(Smartfon &smartfon, string newSystem) {
    smartfon.system = newSystem;
}

void updateSmartwatch(Smartwatch &smartwatch, string newSystem) {
    smartwatch.system = newSystem;
}

void zmianaKarty(Komputer &komputer, KartaGraficzna *newKarta) {
    komputer.kartagraficzna = newKarta;
}

int main() {
    Serwis *Komputronik = new Serwis("Komputronik", "Polska", "1996", "Wojciech Buczowski", "4,55 PLN");
    Procesor *i5 = new Procesor("Intel", "i5-11400", 870, 2.6, 6, 12);
    PlytaGlowna *Prime = new PlytaGlowna("ASUS", "Prime H510M-D", 369, "DDR 4", 3200, "Intel H510", 16);
    KartaGraficzna *GTX1060 = new KartaGraficzna(1250, "NVIDIA", "GeForce GTX 1060", 6, 1531);
    KartaGraficzna *RTX4090 = new KartaGraficzna(10590, "NVIDIA", "GeForce RTX 4090", 24, 2235);
    Komputer *k1 = new Komputer(RTX4090, i5, Prime);
    Bateria *B1 = new Bateria(3095, "litowo-polimerowa");
    Wyswietlacz *OLED = new Wyswietlacz("OLED", 6.1, 120, "2532 na 1170 pikseli");
    Wyswietlacz *LRetina = new Wyswietlacz("Luqid Retina", 11, 120, "2388 na 1668 pikseli");
    Smartfon *IPhone13Pro = new Smartfon("Apple", "IPhone 13 Pro", 5199, "IOS 15", 128, B1, OLED);
    Smartwatch *SE = new Smartwatch("Apple",1499, "Watch SE", "watchOS 9.1", 32);
    Tablet *iPad = new Tablet("Apple", 5629, "iPad Pro 4gen", "iPadOS 16", LRetina, 512);
    Kserokopiarka *Brother = new Kserokopiarka("BROTHER", "HL-1222WE", "laserowa", "drukowanie, kserowanie");
    Producent *Apple = new Producent("APPLE INC.", "Kalifornia, USA", "1 kwietnia 1976", "Arthur Levinson", "130,73 USD");
    Producent *Sony = new Producent("SONY CORPORATION", "Tokio, Japonia", "7 maja 1946", "Kenichiro Yoshida", "10725 JPY");
    Monitor *Odyssey = new Monitor("Samsung", "Odyssey G5", 34, "3440 x 1440", 165);
    Telewizor *LG = new Telewizor("LG", "55C12LA", 55, "4K", 120);
    Odyssey->printProducentInfo();
    Odyssey->printModelInfo();
    Odyssey->printPrzekatnaInfo();
    Odyssey->printRozdzielczoscInfo();
    Odyssey->printOdswiezanieInfo();

    LG->printProducentInfo();
    LG->printModelInfo();
    LG->printPrzekatnaInfo();
    LG->printRozdzielczoscInfo();
    LG->printOdswiezanieInfo();

    Apple->printNazwaInfo();
    Apple->printSiedzibaInfo();
    Apple->printData_zalozeniaInfo();
    Apple->printPrezesInfo();
    Apple->printCena_akcjiInfo();

    Sony->printNazwaInfo();
    Sony->printSiedzibaInfo();
    Sony->printData_zalozeniaInfo();
    Sony->printPrezesInfo();
    Sony->printCena_akcjiInfo();

    Komputronik->printNazwaInfo();
    Komputronik->printSiedzibaInfo();
    Komputronik->printData_zalozeniaInfo();
    Komputronik->printPrezesInfo();
    Komputronik->printCena_akcjiInfo();

    RTX4090->printKartaGraficznaInfo();
    IPhone13Pro->printSmartfonInfo();
    updateSmartfon(*IPhone13Pro, "IOS 16");
    wymianaBaterii(*B1, 3250);
    IPhone13Pro->printSmartfonInfo();
    SE->printSmartwatchInfo();
    updateSmartwatch(*SE,"watchOS 9.2");
    iPad->printTabletInfo();
    i5->printProcesorInfo();
    Prime->printPlytaGlownaInfo();
    k1->printKomputerInfo();
    zmianaKarty(*k1,GTX1060);
    delete RTX4090;
    delete Sony;
    k1->printKomputerInfo();
    overclocking(*i5,2.9);
    i5->printProcesorInfo();
    Brother->printDrukarkaInfo();
    Brother->printKserokopiarkaInfo();
    Bramka *logiczna_AND = new Bramka("dioda polprzewodnikowa", "zlacze p-n", "tranzystor bipolarny", "mala", "wielka", 0, 1, "AND");
    logiczna_AND->printInfo();

    LG->przekatna += 33;
    cout << LG->przekatna << endl;
    GTX1060->cena *= 100;
    cout << GTX1060->cena << endl;
    Prime->pamiec -= 4;
    cout << Prime->pamiec << endl;
    iPad->cena /= 3;
    cout << iPad->cena << endl;
    IPhone13Pro->pamiec *= 4;
    cout << IPhone13Pro->pamiec << endl;
    return 0;
}