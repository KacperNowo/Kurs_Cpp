#include <iostream>
using namespace std;

int* maxElement(int* tab, int rozmiar) {
    int* max = tab;
    for(int i = 1; i < rozmiar; i++) if(*(tab + i) > *max) max = tab + i;
    return max;
}

int main() {
    int tab[] = {3, 7, 2, 9, 1};
    cout << "Max: " << *maxElement(tab, 5) << endl;
    return 0;
}
