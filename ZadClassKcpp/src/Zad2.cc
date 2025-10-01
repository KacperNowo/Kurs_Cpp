#include "../include/Zad2.h"
#include <iostream>
#include <array>
using namespace std;

void Zad2::run() {
    cout << "\n=== Zadanie 2 - Zwracanie przez funkcje ===" << endl;
    
    int a = 10, b = 20;
    
    // 1. Przez wartość
    int wynik1 = zwrocPrzezWartosc(a, b);
    cout << "1. Przez wartosc: " << a << " + " << b << " = " << wynik1 << endl;
    
    // 2. Przez referencję
    int wynik2;
    zwrocPrzezReferencje(a, b, wynik2);
    cout << "2. Przez referencje: " << a << " + " << b << " = " << wynik2 << endl;
    
    // 3. Przez wskaźnik
    int wynik3;
    zwrocPrzezWskaznik(a, b, &wynik3);
    cout << "3. Przez wskaznik: " << a << " + " << b << " = " << wynik3 << endl;
    
    // 4. Przez tablicę
    int* wynik4 = zwrocPrzezTablice(a, b);
    cout << "4. Przez tablice: " << a << " + " << b << " = " << *wynik4 << endl;
    delete wynik4; // Zwolnienie pamięci
}

int Zad2::zwrocPrzezWartosc(int a, int b) {
    return a + b;
}

void Zad2::zwrocPrzezReferencje(int a, int b, int& wynik) {
    wynik = a + b;
}

void Zad2::zwrocPrzezWskaznik(int a, int b, int* wynik) {
    *wynik = a + b;
}

int* Zad2::zwrocPrzezTablice(int a, int b) {

    int* wynik = new int;
    *wynik = a + b;
    return wynik;
}
