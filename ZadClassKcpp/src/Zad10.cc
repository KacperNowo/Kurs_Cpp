#include "../include/Zad10.h"
#include <iostream>
using namespace std;

// Definicje metod poza klasą
Zad10::PrzykladowaKlasa::PrzykladowaKlasa() 
    : zmiennaPublic(1), zmiennaProtected(2), zmiennaPrivate(3) {
}

void Zad10::PrzykladowaKlasa::ustawWartosci(int pub, int prot, int priv) {
    zmiennaPublic = pub;
    zmiennaProtected = prot;
    zmiennaPrivate = priv;
}

void Zad10::PrzykladowaKlasa::wyswietlWszystko() const {
    cout << "Wszystkie zmienne: " << endl;
    wyswietlPublic();
    wyswietlProtected();
    wyswietlPrivate();
}

void Zad10::PrzykladowaKlasa::dostepDoWszystkiego() const {
    cout << "Dostep do wszystkich sekcji:" << endl;
    cout << "Public: " << zmiennaPublic << endl;
    cout << "Protected: " << zmiennaProtected << endl;
    cout << "Private: " << zmiennaPrivate << endl;
}

void Zad10::run() {
    cout << "\n=== Zadanie 10 - Klasa z sekcjami ===" << endl;
    
    PrzykladowaKlasa obiekt;
    
    cout << "Wartosci domyslne:" << endl;
    obiekt.wyswietlWszystko();
    
    cout << "\nPo zmianie wartosci:" << endl;
    obiekt.ustawWartosci(100, 200, 300);
    obiekt.wyswietlWszystko();
    
    cout << "\nDostep przez funkcje inline:" << endl;
    cout << "getPublic(): " << obiekt.getPublic() << endl;
    
    cout << "\nDostep do wszystkich sekcji przez specjalna funkcje:" << endl;
    obiekt.dostepDoWszystkiego();
    
    // Dostęp bezpośredni tylko do public
    obiekt.zmiennaPublic = 999;
    cout << "\nPo bezposredniej zmianie public: " << obiekt.zmiennaPublic << endl;
}
