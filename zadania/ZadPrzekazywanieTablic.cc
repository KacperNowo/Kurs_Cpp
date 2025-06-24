#include <iostream>
using namespace std;

void wypisz(int tab[], int rozmiar) {
    for(int i = 0; i < rozmiar; ++i)
        cout << tab[i] << " ";
    cout << endl;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tab)/sizeof(tab[0]);
    wypisz(tab, rozmiar);
    return 0;
}
