#include "../include/Zad8.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

void Zad8::run() {
    cout << "\n=== Zadanie 8 - StringStream ===" << endl;
    
    przykladKonwersji();
    przykladParsowania();
    przykladFormatowania();
}

void Zad8::przykladKonwersji() {
    cout << "\n--- Konwersja liczb na string ---" << endl;
    
    int liczba = 42;
    double pi = 3.14159;
    
    stringstream ss1;
    ss1 << "Liczba: " << liczba << ", Pi: " << pi;
    string wynik1 = ss1.str();
    cout << "StringStream: " << wynik1 << endl;
    
    // Konwersja string na liczby
    stringstream ss2("123 45.67");
    int a;
    double b;
    ss2 >> a >> b;
    cout << "Z parsowania: " << a << " i " << b << endl;
}

void Zad8::przykladParsowania() {
    cout << "\n--- Parsowanie danych ---" << endl;
    
    string dane = "Jan Kowalski 25 175.5";
    stringstream ss(dane);
    
    string imie, nazwisko;
    int wiek;
    double wzrost;
    
    ss >> imie >> nazwisko >> wiek >> wzrost;
    
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Wzrost: " << wzrost << " cm" << endl;
}

void Zad8::przykladFormatowania() {
    cout << "\n--- Formatowanie danych ---" << endl;
    
    stringstream ss;
    
    // Formatowanie liczb
    ss << fixed << setprecision(2);
    ss << "Cena: " << 19.999 << " zł" << endl;
    ss << "Procent: " << 0.4567 * 100 << "%" << endl;
    
    // Łączenie różnych typów
    ss << "Data: " << 2024 << "-" << setw(2) << setfill('0') << 1 << "-" << setw(2) << 15;
    
    cout << ss.str() << endl;
}
