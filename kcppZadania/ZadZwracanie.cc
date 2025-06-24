#include <iostream>
using namespace std;

// 1. Przez wartość
int przezWartosc() {
    return 10;
}

// 2. Przez referencję
int& przezReferencje(int& x) {
    x += 5;
    return x;
}

// 3. Przez wskaźnik
int* przezWskaznik(int* x) {
    *x += 7;
    return x;
}

// 4. Tablica (zwracamy wskaźnik do tablicy statycznej)
int* zwrocTablice() {
    static int tab[3] = {1, 2, 3};
    return tab;
}

int main() {
    int a = przezWartosc();
    cout << "Wartosc: " << a << endl;

    int b = 20;
    int& ref = przezReferencje(b);
    cout << "Referencja: " << ref << endl;

    int c = 30;
    int* wsk = przezWskaznik(&c);
    cout << "Wskaznik: " << *wsk << endl;

    int* tab = zwrocTablice();
    cout << "Tablica: " << tab[0] << ", " << tab[1] << ", " << tab[2] << endl;

    return 0;
}

