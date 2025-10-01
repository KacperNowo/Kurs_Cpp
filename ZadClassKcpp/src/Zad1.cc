#include "../include/Zad1.h"
#include <iostream>
using namespace std;

void Zad1::Samochod::ustawRok(int rok) {
    if (rok > 1885 && rok <= 2024) {
        rokProdukcji = rok;
    }
}

double Zad1::Samochod::obliczWiek(int biezacyRok) const {
    return biezacyRok - rokProdukcji;
}

void Zad1::run() {
    cout << "\n=== Zadanie 1 - Prosta klasa (Samochod) ===" << endl;
    
    // Tworzenie obiektów
    Samochod samochod1("Toyota", "Corolla", 2020, 1.8);
    Samochod samochod2("Ford", "Focus", 2018, 2.0);
    
    cout << "Samochod 1: ";
    samochod1.wyswietlInfo();
    
    cout << "Samochod 2: ";
    samochod2.wyswietlInfo();
    
    // Testowanie metod
    cout << "\nMarka samochodu 1: " << samochod1.getMarka() << endl;
    cout << "Wiek samochodu 1 (w 2024): " << samochod1.obliczWiek(2024) << " lat" << endl;
    
    samochod1.ustawRok(2022);
    cout << "Po zmianie roku: ";
    samochod1.wyswietlInfo();
}
