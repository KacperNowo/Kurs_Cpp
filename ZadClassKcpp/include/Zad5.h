#ifndef ZAD5_H
#define ZAD5_H

#include "ZadKcpp.h"
#include <iostream>

class Zad5 : public ZadKcpp {
public:
    void run() override;

private:
    void zamien(int* a, int* b);
    void zamien(double* a, double* b);
};

#endif
