#ifndef ZAD9_H
#define ZAD9_H

#include "ZadKcpp.h"
#include <iostream>

class Zad9 : public ZadKcpp {
public:
    void run() override;

private:
    bool czyParzystaBitowo(int liczba);
    bool czyParzystaModulo(int liczba);
    bool czyParzystaWarunkowo(int liczba);
};

#endif
