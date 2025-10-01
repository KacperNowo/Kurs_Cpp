#ifndef ZAD4_H
#define ZAD4_H

#include "ZadKcpp.h"
#include <iostream>
#include <cmath>

class Zad4 : public ZadKcpp {
public:
    void run() override;

private:
    // Przeciążone funkcje potega()
    int potega(int podstawa, int wykladnik);          // Dla liczb całkowitych
    double potega(double podstawa, int wykladnik);    // Dla liczb zmiennoprzecinkowych
    double potega(double podstawa, double wykladnik); // Dla obu zmiennoprzecinkowych
};

#endif
