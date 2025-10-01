#include <iostream>
#include <vector>
#include <memory>
#include "ZadKcpp.h"
#include "Zad1.h"
#include "Zad2.h"
#include "Zad3.h"
#include "Zad4.h"
#include "Zad5.h"
#include "Zad6.h"
#include "Zad7.h"
#include "Zad8.h"
#include "Zad9.h"
#include "Zad10.h"

void showMenu() {
    std::cout << "\n==========================================" << std::endl;
    std::cout << "            MENU GLOWNE - KCPP" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "1. ZadClassExample - Prosta klasa (Samochod)" << std::endl;
    std::cout << "2. ZadZwracanie - Zwracanie przez funkcje" << std::endl;
    std::cout << "3. ZadPrzeciazaniePole - Przeciążanie funkcji pole" << std::endl;
    std::cout << "4. LPrzeciazaniePotega - Przeciążanie funkcji potega" << std::endl;
    std::cout << "5. ZadArytmetykaWskaznikowZamiana - Zamiana miejscami" << std::endl;
    std::cout << "6. LClassMetodyAbstrakcyjne - Figury" << std::endl;
    std::cout << "7. ZadArytmetykaWskaznikowPrzesuniecie - Przesuniecie tablicy" << std::endl;
    std::cout << "8. LStringStream - StringStream" << std::endl;
    std::cout << "9. ZadParzysta - Sprawdzanie parzystosci" << std::endl;
    std::cout << "10. ZadClass - Klasa z sekcjami" << std::endl;
    std::cout << "0. Wyjscie" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "Wybierz zadanie (0-10): ";
}

int main() {
    std::vector<std::unique_ptr<ZadKcpp>> tasks;
    
    tasks.push_back(std::make_unique<Zad1>());
    tasks.push_back(std::make_unique<Zad2>());
    tasks.push_back(std::make_unique<Zad3>());
    tasks.push_back(std::make_unique<Zad4>());
    tasks.push_back(std::make_unique<Zad5>());
    tasks.push_back(std::make_unique<Zad6>());
    tasks.push_back(std::make_unique<Zad7>());
    tasks.push_back(std::make_unique<Zad8>());
    tasks.push_back(std::make_unique<Zad9>());
    tasks.push_back(std::make_unique<Zad10>());

    int choice;
    do {
        showMenu();
        std::cin >> choice;
        
        if (choice > 0 && choice <= static_cast<int>(tasks.size())) {
            tasks[choice - 1]->run();
        } else if (choice != 0) {
            std::cout << "Nieprawidlowy wybor! Wybierz 0-10." << std::endl;
        }
    } while (choice != 0);
    
    std::cout << "Dziekuje i do zobaczenia!" << std::endl;
    return 0;
}
