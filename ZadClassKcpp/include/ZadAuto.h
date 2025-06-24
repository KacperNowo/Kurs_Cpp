#ifndef ZADAUTO_H
#define ZADAUTO_H

#include "ZadKcpp.h"
#include <iostream>

class ZadAuto : public ZadKcpp {
public:
    void opis() override;
    void wykonaj() override;
};

#endif

