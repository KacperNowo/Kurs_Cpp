#ifndef ZAD2_H
#define ZAD2_H

#include "ZadKcpp.h"
#include <iostream>
#include <array>

class Zad2 : public ZadKcpp {
public:
    void run() override;

private:
    // 1. Przez wartość
    int zwrocPrzezWartosc(int a, int b);
    
    // 2. Przez referencję
    void zwrocPrzezReferencje(int a, int b, int& wynik);
    
    // 3. Przez wskaźnik
    void zwrocPrzezWskaznik(int a, int b, int* wynik);
    
    // 4. Przez tablicę
    int* zwrocPrzezTablice(int a, int b);
};

#endif
