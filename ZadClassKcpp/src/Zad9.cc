#include "../include/Zad9.h"
#include <iostream>
using namespace std;

void Zad9::run() {
    cout << "\n=== Zadanie 9 - Sprawdzanie parzystosci ===" << endl;
    
    int liczba;
    cout << "Podaj liczbe do sprawdzenia: ";
    cin >> liczba;
    
    cout << "\nWyniki sprawdzenia:" << endl;
    cout << "Bitowo (&): " << (czyParzystaBitowo(liczba) ? "parzysta" : "nieparzysta") << endl;
    cout << "Modulo (%): " << (czyParzystaModulo(liczba) ? "parzysta" : "nieparzysta") << endl;
    cout << "Warunkowo (? :): " << (czyParzystaWarunkowo(liczba) ? "parzysta" : "nieparzysta") << endl;
    
    // Test dla kilku liczb
    cout << "\nTest dla liczb 0-10:" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << i << ": bitowo=" << czyParzystaBitowo(i) 
             << ", modulo=" << czyParzystaModulo(i)
             << ", warunkowo=" << czyParzystaWarunkowo(i) << endl;
    }
}

bool Zad9::czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

bool Zad9::czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

bool Zad9::czyParzystaWarunkowo(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}
