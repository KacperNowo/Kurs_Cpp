#include "../include/Zad6.h"
#include <iostream>
#include <iomanip>
#include <memory>
using namespace std;

void Zad6::run() {
    cout << "\n==========================================" << endl;
    cout << "Zadanie 5.6 - Metody abstrakcyjne (Figury)" << endl;
    cout << "==========================================" << endl;

    int wybor;
    do {
        cout << "\n=== MENU FIGUR ===" << endl;
        cout << "1. Dodaj kwadrat" << endl;
        cout << "2. Dodaj prostokat" << endl;
        cout << "3. Dodaj trojkat" << endl;
        cout << "4. Dodaj kolo" << endl;
        cout << "5. Wyswietl wszystkie figury" << endl;
        cout << "6. Oblicz bezpieczny dystans" << endl;
        cout << "0. Powrot do menu glownego" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;

        switch(wybor) {
            case 1: utworzFigure(1); break;
            case 2: utworzFigure(2); break;
            case 3: utworzFigure(3); break;
            case 4: utworzFigure(4); break;
            case 5: wyswietlWszystkieFigury(); break;
            case 6: {
                if (figury.empty()) {
                    cout << "Brak figur! Najpierw dodaj jakas figure." << endl;
                    break;
                }
                
                // Szukamy koła do obliczenia dystansu
                Kolo* kolo = nullptr;
                for (auto& figura : figury) {
                    kolo = dynamic_cast<Kolo*>(figura.get());
                    if (kolo) break;
                }
                
                if (!kolo) {
                    cout << "Nie znaleziono kola! Najpierw dodaj kolo." << endl;
                    break;
                }
                
                double powierzchniaNaOsobe;
                cout << "Podaj powierzchnię na osobę [m²]: ";
                cin >> powierzchniaNaOsobe;
                
                if (powierzchniaNaOsobe > 0) {
                    double bezpiecznyDystans = kolo->dystans(powierzchniaNaOsobe);
                    cout << "\nDla powierzchni " << powierzchniaNaOsobe << " m² na osobę:" << endl;
                    cout << "Bezpieczny dystans wynosi: " << fixed << setprecision(2) 
                         << bezpiecznyDystans << " metrów" << endl;
                    cout << "Następna osoba może znajdować się w odległości " 
                         << bezpiecznyDystans << " metrów od Ciebie." << endl;
                } else {
                    cout << "Powierzchnia musi być dodatnia!" << endl;
                }
                break;
            }
            case 0: 
                cout << "Powrot do menu glownego..." << endl;
                break;
            default:
                cout << "Nieprawidlowy wybor!" << endl;
        }
    } while (wybor != 0);
}

void Zad6::utworzFigure(int wybor) {
    unique_ptr<Figura> figura;
    
    switch(wybor) {
        case 1: 
            figura = make_unique<Kwadrat>();
            break;
        case 2:
            figura = make_unique<Prostokat>();
            break;
        case 3:
            figura = make_unique<Trojkat>();
            break;
        case 4:
            figura = make_unique<Kolo>();
            break;
        default:
            return;
    }
    
    cout << "\n--- Wprowadzanie danych ---" << endl;
    figura->wprowadzDane();
    figury.push_back(move(figura));
    cout << "Figura zostala dodana!" << endl;
}

void Zad6::wyswietlWszystkieFigury() {
    if (figury.empty()) {
        cout << "Brak figur!" << endl;
        return;
    }
    
    cout << "\n=== WSZYSTKIE FIGURY ===" << endl;
    for (size_t i = 0; i < figury.size(); i++) {
        cout << i + 1 << ". ";
        figury[i]->wyswietl();
        cout << "\n   Obwod: " << fixed << setprecision(2) << figury[i]->obliczObwod();
        cout << "\n   Pole: " << fixed << setprecision(2) << figury[i]->obliczPole() << endl;
        cout << "-----------------------" << endl;
    }
}
