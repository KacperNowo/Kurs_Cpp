#ifndef ZAD3_H
#define ZAD3_H

#include "ZadKcpp.h"
#include <iostream>
#include <cmath>

class Zad3 : public ZadKcpp {
public:
    void run() override;

private:
    // Przeciążone funkcje pole()
    double pole(double bok);                          // Kwadrat
    double pole(double a, double b);                  // Prostokąt
    double pole(double promien, bool);                // Koło
};

#endif
