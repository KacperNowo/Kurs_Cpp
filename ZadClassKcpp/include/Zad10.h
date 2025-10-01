#ifndef ZAD10_H
#define ZAD10_H

#include "ZadKcpp.h"
#include <iostream>
#include <string>

class Zad10 : public ZadKcpp {
public:
    void run() override;

private:
    class PrzykladowaKlasa {
    public:
        // Konstruktor
        PrzykladowaKlasa();
        
        // Metody zdefiniowane w klasie
        void wyswietlPublic() const {
            std::cout << "Public: " << zmiennaPublic << std::endl;
        }
        void ustawWartosci(int pub, int prot, int priv);
        void wyswietlWszystko() const;
        
        inline int getPublic() const { return zmiennaPublic; }
        
    protected:
        int zmiennaProtected;
        
        void wyswietlProtected() const {
            std::cout << "Protected: " << zmiennaProtected << std::endl;
        }
        
    private:
        int zmiennaPrivate;
        
        void wyswietlPrivate() const {
            std::cout << "Private: " << zmiennaPrivate << std::endl;
        }
        
    public:
        int zmiennaPublic;
        
        void dostepDoWszystkiego() const;
    };
};

#endif
