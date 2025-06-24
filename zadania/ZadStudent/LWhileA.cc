#include <iostream>
using namespace std;

int main() {
    int liczba, licznik = 0;
    while(cin >> liczba) {
        if(liczba <= 0) { cout << "Podaj dodatnia liczbe" << endl; continue; }
        licznik++;
        if(liczba == 999) break;
    }
    cout << "Wprowadzono: " << licznik << endl;
    return 0;
}
