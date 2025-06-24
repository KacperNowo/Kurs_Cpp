#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int poziom, max, liczba, strzal, proby = 0;
    cout << "1-latwy, 2-trudny: "; cin >> poziom;
    max = (poziom == 1) ? 50 : 200;
    liczba = rand() % max + 1;
    while(proby < 10) {
        cout << "Strzal: "; cin >> strzal;
        proby++;
        if(strzal == liczba) { cout << "Zgadles!" << endl; return 0; }
        if(strzal < liczba) cout << "Za malo" << endl;
        else cout << "Za duzo" << endl;
    }
    cout << "Przegrales, liczba to: " << liczba << endl;
    return 0;
}
