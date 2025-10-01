#ifndef ZAD8_H
#define ZAD8_H

#include "ZadKcpp.h"
#include <iostream>
#include <sstream>
#include <string>

class Zad8 : public ZadKcpp {
public:
    void run() override;

private:
    void przykladKonwersji();
    void przykladParsowania();
    void przykladFormatowania();
};

#endif
