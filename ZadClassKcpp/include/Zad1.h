#ifndef ZAD1_H
#define ZAD1_H

#include "ZadKcpp.h"
#include <iostream>
#include <string>

class Zad1 : public ZadKcpp {
public:
    void run() override;

private:
    // Klasa Samochod wzorowana na KviCar.cc
    class Samochod {
    private:
        std::string marka;
        std::string model;
        int rokProdukcji;
        double pojemnoscSilnika;
        
    public:
        // Konstruktor
        Samochod(const std::string& m, const std::string& mod, int rok, double poj)
            : marka(m), model(mod), rokProdukcji(rok), pojemnoscSilnika(poj) {}
        
        // Metody zdefiniowane w klasie
        void wyswietlInfo() const {
            std::cout << marka << " " << model << " (" << rokProdukcji 
                      << "), " << pojemnoscSilnika << "L" << std::endl;
        }
        
        std::string getMarka() const { return marka; }
        
        // Metody zdefiniowane poza klasą
        void ustawRok(int rok);
        double obliczWiek(int biezacyRok) const;
    };
};

#endif
