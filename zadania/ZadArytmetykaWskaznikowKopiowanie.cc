#include <iostream>
using namespace std;

void kopiujTablice(int* src, int* dest, int rozmiar) {
    for(int i = 0; i < rozmiar; i++) *(dest + i) = *(src + i);
}

int main() {
    int zrodlo[] = {1, 2, 3};
    int docelowa[3];
    kopiujTablice(zrodlo, docelowa, 3);
    for(int i = 0; i < 3; i++) cout << docelowa[i] << " ";
    return 0;
}
