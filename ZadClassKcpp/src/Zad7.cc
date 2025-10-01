#include "../include/Zad7.h"
#include <iostream>
using namespace std;

void Zad7::run() {
    cout << "\n=== Zadanie 7 - Przesuniecie tablicy (wskazniki) ===" << endl;
    
    const int ROZMIAR = 5;
    int tablica[ROZMIAR] = {1, 2, 3, 4, 5};
    
    cout << "Tablica przed przesunieciem: ";
    wyswietlTablice(tablica, ROZMIAR);
    
    przesun(tablica, ROZMIAR);
    
    cout << "Tablica po przesunieciu: ";
    wyswietlTablice(tablica, ROZMIAR);
    
    int tablica2[6] = {10, 20, 30, 40, 50, 60};
    cout << "\nInna tablica przed przesunieciem: ";
    wyswietlTablice(tablica2, 6);
    
    przesun(tablica2, 6);
    cout << "Inna tablica po przesunieciu: ";
    wyswietlTablice(tablica2, 6);
}

void Zad7::przesun(int* tablica, int rozmiar) {
    if (rozmiar <= 1) return;
    
    int ostatni = *(tablica + rozmiar - 1);
    
    for (int i = rozmiar - 1; i > 0; i--) {
        *(tablica + i) = *(tablica + i - 1);
    }
    
    *tablica = ostatni;
}

void Zad7::wyswietlTablice(const int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tablica + i);
        if (i < rozmiar - 1) cout << ", ";
    }
    cout << endl;
}
