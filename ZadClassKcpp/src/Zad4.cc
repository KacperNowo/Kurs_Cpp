#include "../include/Zad4.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Zad4::run() {
    cout << "\n=== Zadanie 4 - Przeciążanie funkcji potega ===" << endl;
    
    cout << "Potega dla liczb calkowitych:" << endl;
    cout << "2^3 = " << potega(2, 3) << endl;
    cout << "5^4 = " << potega(5, 4) << endl;
    
    cout << "\nPotega dla liczb zmiennoprzecinkowych (double, int):" << endl;
    cout << "2.5^3 = " << fixed << setprecision(2) << potega(2.5, 3) << endl;
    cout << "3.14^2 = " << fixed << setprecision(2) << potega(3.14, 2) << endl;
    
    cout << "\nPotega dla liczb zmiennoprzecinkowych (double, double):" << endl;
    cout << "4.0^0.5 = " << fixed << setprecision(2) << potega(4.0, 0.5) << endl;
    cout << "8.0^(1/3) = " << fixed << setprecision(2) << potega(8.0, 1.0/3.0) << endl;
}

int Zad4::potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

double Zad4::potega(double podstawa, int wykladnik) {
    double wynik = 1.0;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

double Zad4::potega(double podstawa, double wykladnik) {
    return pow(podstawa, wykladnik);
}
