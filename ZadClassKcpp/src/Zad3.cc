#include "../include/Zad3.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Zad3::run() {
    cout << "\n=== Zadanie 3 - Przeciążanie funkcji pole ===" << endl;
    
    double bok, a, b, promien;
    
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> bok;
    cout << "Pole kwadratu: " << fixed << setprecision(2) << pole(bok) << endl;
    
    cout << "\nPodaj dlugosc prostokata: ";
    cin >> a;
    cout << "Podaj szerokosc prostokata: ";
    cin >> b;
    cout << "Pole prostokata: " << fixed << setprecision(2) << pole(a, b) << endl;
    
    cout << "\nPodaj promien kola: ";
    cin >> promien;
    cout << "Pole kola: " << fixed << setprecision(2) << pole(promien, true) << endl;
}

double Zad3::pole(double bok) {
    return bok * bok;
}

double Zad3::pole(double a, double b) {
    return a * b;
}

double Zad3::pole(double promien, bool) {
    return M_PI * promien * promien;
}
