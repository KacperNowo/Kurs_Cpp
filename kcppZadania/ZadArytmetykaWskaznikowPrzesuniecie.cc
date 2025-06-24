#include <iostream>
using namespace std;

void przesun(int* tab, int rozmiar) {
    int ostatni = *(tab + rozmiar - 1);
    for(int* p = tab + rozmiar - 1; p > tab; p--) *p = *(p - 1);
    *tab = ostatni;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    przesun(tab, 5);
    for(int i = 0; i < 5; i++) cout << tab[i] << " ";
    return 0;
}
