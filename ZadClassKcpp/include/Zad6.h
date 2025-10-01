#ifndef ZAD6_H
#define ZAD6_H

#include "ZadKcpp.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <memory>

class Zad6 : public ZadKcpp {
public:
    void run() override;
    
private:
    // Abstrakcyjna klasa Figura
    class Figura {
    public:
        virtual double obliczObwod() const = 0;
        virtual double obliczPole() const = 0;
        virtual void wyswietl() const = 0;
        virtual void wprowadzDane() = 0;
        virtual ~Figura() {}
    };
    
    // Klasa Kwadrat
    class Kwadrat : public Figura {
        double bok;
    public:
        Kwadrat() : bok(0) {}
        double obliczObwod() const override { return 4 * bok; }
        double obliczPole() const override { return bok * bok; }
        void wyswietl() const override {
            std::cout << "Kwadrat (bok = " << bok << ")";
        }
        void wprowadzDane() override {
            std::cout << "Podaj dlugosc boku kwadratu: ";
            std::cin >> bok;
        }
    };
    
    // Klasa Prostokat
    class Prostokat : public Figura {
        double a, b;
    public:
        Prostokat() : a(0), b(0) {}
        double obliczObwod() const override { return 2 * (a + b); }
        double obliczPole() const override { return a * b; }
        void wyswietl() const override {
            std::cout << "Prostokat (" << a << " x " << b << ")";
        }
        void wprowadzDane() override {
            std::cout << "Podaj dlugosc prostokata: ";
            std::cin >> a;
            std::cout << "Podaj szerokosc prostokata: ";
            std::cin >> b;
        }
    };
    
    // Klasa Trojkat
    class Trojkat : public Figura {
        double a, b, c;
    public:
        Trojkat() : a(0), b(0), c(0) {}
        double obliczObwod() const override { return a + b + c; }
        double obliczPole() const override {
            double p = (a + b + c) / 2;
            return sqrt(p * (p - a) * (p - b) * (p - c));
        }
        void wyswietl() const override {
            std::cout << "Trojkat (" << a << ", " << b << ", " << c << ")";
        }
        void wprowadzDane() override {
            std::cout << "Podaj dlugosc boku a: ";
            std::cin >> a;
            std::cout << "Podaj dlugosc boku b: ";
            std::cin >> b;
            std::cout << "Podaj dlugosc boku c: ";
            std::cin >> c;
        }
    };
    
    // Klasa Kolo
    class Kolo : public Figura {
        double promien;
    public:
        Kolo() : promien(0) {}
        double obliczObwod() const override { return 2 * M_PI * promien; }
        double obliczPole() const override { return M_PI * promien * promien; }
        void wyswietl() const override {
            std::cout << "Kolo (r = " << promien << ")";
        }
        void wprowadzDane() override {
            std::cout << "Podaj promien kola: ";
            std::cin >> promien;
        }
        // Funkcja Dystans - oblicza promień dla danej powierzchni na osobę
        double dystans(double powierzchniaNaOsobe) const { 
            return sqrt(powierzchniaNaOsobe / M_PI); 
        }
    };

    // Metody pomocnicze
    void menuFigur();
    void utworzFigure(int wybor);
    void wyswietlWszystkieFigury();
    
    std::vector<std::unique_ptr<Figura>> figury;
};

#endif
