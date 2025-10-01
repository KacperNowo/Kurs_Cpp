#ifndef ZAD7_H
#define ZAD7_H

#include "ZadKcpp.h"
#include <iostream>

class Zad7 : public ZadKcpp {
public:
    void run() override;

private:
    void przesun(int* tablica, int rozmiar);
    void wyswietlTablice(const int* tablica, int rozmiar);
};

#endif
