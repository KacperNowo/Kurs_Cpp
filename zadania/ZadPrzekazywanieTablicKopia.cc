#include <iostream>
using namespace std;

void wypiszKopie(int tab[], int rozmiar) {
    int* kopia = new int[rozmiar];
    for(int i = 0; i < rozmiar; ++i)
        kopia[i] = tab[i];
    for(int i = 0; i < rozmiar; ++i)
        cout << kopia[i] << " ";
    cout << endl;
    delete[] kopia;
}

int main() {
    int tab[] = {10, 20, 30};
    int rozmiar = sizeof(tab)/sizeof(tab[0]);
    wypiszKopie(tab, rozmiar);
    return 0;
}
