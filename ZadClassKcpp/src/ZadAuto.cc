#include "ZadAuto.h"
#include <iostream>
using namespace std;

void ZadAuto::opis() {
    cout << "Klasa Auto - marka i rok" << endl;
}

void ZadAuto::wykonaj() {
    class Auto {
    public:
        string marka;
        int rok;
        Auto(string m, int r) : marka(m), rok(r) {}
        void pokaz() { cout << marka << " z " << rok << endl; }
    };
    Auto a("Opel", 2010);
    a.pokaz();
}
