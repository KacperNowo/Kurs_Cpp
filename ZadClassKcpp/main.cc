#include <iostream>
#include <vector>
#include "include/ZadKcpp.h"
#include "include/ZadAuto.h"

using namespace std;

int main() {
    vector<ZadKcpp*> zadania;
    zadania.push_back(new ZadAuto());

    while(true) {
        cout << "MENU:" << endl;
        for(size_t i = 0; i < zadania.size(); i++) {
            cout << i+1 << ". "; zadania[i]->opis();
        }
        cout << "0. Wyjscie" << endl;
        int wybor;
        cin >> wybor;
        if(wybor == 0) break;
        if(wybor > 0 && wybor <= zadania.size()) zadania[wybor-1]->wykonaj();
    }
    for(auto z : zadania) delete z;
    return 0;
}
